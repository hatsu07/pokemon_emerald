cmake_minimum_required(VERSION 3.16)

# 既存の専用ツールを直接呼び出すため、C/C++/ASMコンパイラ検出は行わない。
project(pokemon_emerald_jp NONE)

# asm/data内の.incbinが "build/..." を参照するため、ビルド先を固定する。
get_filename_component(EXPECTED_BUILD_DIR
    "${CMAKE_SOURCE_DIR}/build" ABSOLUTE)
get_filename_component(ACTUAL_BUILD_DIR
    "${CMAKE_BINARY_DIR}" ABSOLUTE)

if(NOT ACTUAL_BUILD_DIR STREQUAL EXPECTED_BUILD_DIR)
    message(FATAL_ERROR
        "このプロジェクトは -B build で構成してください。\n"
        "期待値: ${EXPECTED_BUILD_DIR}\n"
        "現在値: ${ACTUAL_BUILD_DIR}")
endif()

find_package(Python3 REQUIRED COMPONENTS Interpreter)

find_program(SHA1SUM_EXECUTABLE sha1sum)
if(NOT SHA1SUM_EXECUTABLE)
    message(FATAL_ERROR "sha1sumが見つかりません")
endif()

set(AS      "${CMAKE_SOURCE_DIR}/tools/binutils/bin/arm-none-eabi-as")
set(LD      "${CMAKE_SOURCE_DIR}/tools/binutils/bin/arm-none-eabi-ld")
set(OBJCOPY "${CMAKE_SOURCE_DIR}/tools/binutils/bin/arm-none-eabi-objcopy")
set(GBAFIX  "${CMAKE_SOURCE_DIR}/tools/gbafix/gbafix")
set(PREPROC "${CMAKE_SOURCE_DIR}/tools/preproc/preproc")
set(GBAGFX  "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx")

foreach(REQUIRED_TOOL IN ITEMS
        "${AS}"
        "${LD}"
        "${OBJCOPY}"
        "${GBAFIX}"
        "${PREPROC}"
        "${GBAGFX}")
    if(NOT EXISTS "${REQUIRED_TOOL}")
        message(FATAL_ERROR "必要なツールが見つかりません: ${REQUIRED_TOOL}")
    endif()
endforeach()

set(ASFLAGS -mcpu=arm7tdmi)

set(ROM_NAME pokeemerald_jp)
set(ROM_FILE "${CMAKE_BINARY_DIR}/${ROM_NAME}.gba")
set(ELF_FILE "${CMAKE_BINARY_DIR}/${ROM_NAME}.elf")
set(MAP_FILE "${CMAKE_BINARY_DIR}/${ROM_NAME}.map")

set(ASM_BUILD_DIR     "${CMAKE_BINARY_DIR}/asm")
set(DATA_BUILD_DIR    "${CMAKE_BINARY_DIR}/data")
set(GENERATED_DIR     "${CMAKE_BINARY_DIR}/generated")
set(CHARMAP_BUILD_DIR "${CMAKE_BINARY_DIR}/charmap")
set(GRAPHICS_BUILD_DIR "${CMAKE_BINARY_DIR}/graphics")

# ---------------------------------------------------------------------------
# clean
# ---------------------------------------------------------------------------

# Makefileジェネレータでは、add_custom_commandのOUTPUTは通常cleanで削除される。
# 画像変換物は再生成コストが高いため、自動削除の対象から外し、
# それ以外の生成物だけを明示的にclean対象へ登録する。
if(CMAKE_GENERATOR MATCHES "Makefiles")
    set_property(DIRECTORY PROPERTY CLEAN_NO_CUSTOM TRUE)
else()
    message(WARNING
        "標準cleanで画像生成物を保持する設定はMakefileジェネレータ専用です。"
        "現在のジェネレータ: ${CMAKE_GENERATOR}")
endif()

set_property(DIRECTORY APPEND PROPERTY ADDITIONAL_CLEAN_FILES
    "${ASM_BUILD_DIR}"
    "${DATA_BUILD_DIR}"
    "${CHARMAP_BUILD_DIR}"
    "${ROM_FILE}"
    "${ELF_FILE}"
    "${MAP_FILE}")

# generated/ と ld_script_jp.ld はCMake構成時に生成され、
# ビルド規則では再生成できないため、通常cleanでは保持する。

# ---------------------------------------------------------------------------
# 結合charmap
# ---------------------------------------------------------------------------

set(CHARMAP_PARTS
    "${CMAKE_SOURCE_DIR}/data/charmap/charmap.txt"
    "${CMAKE_SOURCE_DIR}/data/charmap/charmap_extra.txt")

set(CHARMAP_FILE "${CHARMAP_BUILD_DIR}/charmap_combined.txt")
set(CHARMAP_SCRIPT "${GENERATED_DIR}/make_charmap.cmake")
set(CHARMAP_STAMP "${CHARMAP_BUILD_DIR}/charmap.stamp")

file(MAKE_DIRECTORY "${GENERATED_DIR}")
file(WRITE "${CHARMAP_SCRIPT}"
"file(READ \"${CMAKE_SOURCE_DIR}/data/charmap/charmap.txt\" PART1)\n"
"file(READ \"${CMAKE_SOURCE_DIR}/data/charmap/charmap_extra.txt\" PART2)\n"
"file(MAKE_DIRECTORY \"${CHARMAP_BUILD_DIR}\")\n"
"file(WRITE \"${CHARMAP_FILE}\" \"\${PART1}\${PART2}\")\n")

add_custom_command(
    OUTPUT "${CHARMAP_STAMP}"
    BYPRODUCTS "${CHARMAP_FILE}"
    COMMAND "${CMAKE_COMMAND}" -P "${CHARMAP_SCRIPT}"
    COMMAND "${CMAKE_COMMAND}" -E touch "${CHARMAP_STAMP}"
    DEPENDS ${CHARMAP_PARTS} "${CHARMAP_SCRIPT}"
    VERBATIM)

# ---------------------------------------------------------------------------
# 画像生成物
# ---------------------------------------------------------------------------

file(GLOB_RECURSE GRAPHICS_SCAN_FILES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/asm/*.s"
    "${CMAKE_SOURCE_DIR}/asm/*.inc"
    "${CMAKE_SOURCE_DIR}/data/*.s"
    "${CMAKE_SOURCE_DIR}/data/*.inc")

# .incbin参照が変更された場合も再構成して依存関係を更新する。
set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    ${GRAPHICS_SCAN_FILES})

set(GRAPHICS_RELATIVE_OUTPUTS)

foreach(SCAN_FILE IN LISTS GRAPHICS_SCAN_FILES)
    file(READ "${SCAN_FILE}" SCAN_CONTENT)
    string(REGEX MATCHALL
        "build/graphics/[A-Za-z0-9_./-]+\\.(1bpp|4bpp(\\.lz)?|8bpp(\\.lz)?|gbapal(\\.lz)?|hwjpnfont|latfont|bin\\.lz)"
        FOUND_GRAPHICS
        "${SCAN_CONTENT}")
    list(APPEND GRAPHICS_RELATIVE_OUTPUTS ${FOUND_GRAPHICS})
endforeach()

# Makefileでも明示的に依存していたフォント。
list(APPEND GRAPHICS_RELATIVE_OUTPUTS
    "build/graphics/fonts/font_tiles.4bpp.lz")

list(REMOVE_DUPLICATES GRAPHICS_RELATIVE_OUTPUTS)
list(SORT GRAPHICS_RELATIVE_OUTPUTS)

set(GRAPHICS_OUTPUTS)

macro(add_graphics_rule RELATIVE_OUTPUT)
    set(OUTPUT_ABS "${CMAKE_SOURCE_DIR}/${RELATIVE_OUTPUT}")
    get_filename_component(OUTPUT_DIR "${OUTPUT_ABS}" DIRECTORY)

    # BEGIN MAP TILESET PNG PIPELINE
    if("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/tilesets/(.+)/tiles[.]4bpp[.]lz$")
        set(TILESET_ASSET_DIR "${CMAKE_MATCH_1}")
        set(TILESET_SOURCE_DIR
            "${CMAKE_SOURCE_DIR}/graphics/tilesets/${TILESET_ASSET_DIR}")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
                encode-tiles "${TILESET_SOURCE_DIR}" "${OUTPUT_ABS}"
            DEPENDS
                "${TILESET_SOURCE_DIR}/tiles.png"
                "${TILESET_SOURCE_DIR}/metadata.json"
                "${TILESET_SOURCE_DIR}/lz_plan.json"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/tilesets/(.+)/tiles[.]4bpp$")
        set(TILESET_ASSET_DIR "${CMAKE_MATCH_1}")
        set(TILESET_SOURCE_DIR
            "${CMAKE_SOURCE_DIR}/graphics/tilesets/${TILESET_ASSET_DIR}")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
                encode-tiles "${TILESET_SOURCE_DIR}" "${OUTPUT_ABS}"
            DEPENDS
                "${TILESET_SOURCE_DIR}/tiles.png"
                "${TILESET_SOURCE_DIR}/metadata.json"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/tilesets/(.+)/palettes[.]gbapal$")
        set(TILESET_ASSET_DIR "${CMAKE_MATCH_1}")
        set(TILESET_SOURCE_DIR
            "${CMAKE_SOURCE_DIR}/graphics/tilesets/${TILESET_ASSET_DIR}")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
                encode-palettes "${TILESET_SOURCE_DIR}" "${OUTPUT_ABS}"
            DEPENDS
                "${TILESET_SOURCE_DIR}/palettes.png"
                "${TILESET_SOURCE_DIR}/metadata.json"
                "${CMAKE_SOURCE_DIR}/tools/tileset_asset_codec.py"
            VERBATIM)
    # END MAP TILESET PNG PIPELINE


    # BEGIN RAYQUAZA SCENE 1 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_1/(.+)[.]4bpp[.]lz$")
        set(RAY_SCENE1_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/${RAY_SCENE1_STEM}.png")
        set(RAY_SCENE1_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/rayquaza_scene1_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                repack-gfx
                --manifest "${RAY_SCENE1_PLAN}"
                --key "${RAY_SCENE1_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE1_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_1/(.+)[.]gbapal[.]lz$")
        set(RAY_SCENE1_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/${RAY_SCENE1_STEM}.png")
        set(RAY_SCENE1_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/rayquaza_scene1_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                repack-pal
                --manifest "${RAY_SCENE1_PLAN}"
                --key "${RAY_SCENE1_STEM}_pal"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE1_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_1/(clouds[123])[.]bin[.]lz$")
        set(RAY_SCENE1_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/${RAY_SCENE1_STEM}.tilemap.inc")
        set(RAY_SCENE1_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_1/rayquaza_scene1_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                repack-tilemap
                --manifest "${RAY_SCENE1_PLAN}"
                --key "${RAY_SCENE1_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_TILEMAP}"
                "${RAY_SCENE1_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene1_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END RAYQUAZA SCENE 1 EXACT PIPELINE

    # BEGIN RAYQUAZA SCENE 2 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_2/(.+)[.]4bpp[.]lz$")
        set(RAY_SCENE2_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/${RAY_SCENE2_STEM}.png")
        set(RAY_SCENE2_PLAN "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/rayquaza_scene2_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                4bpp --manifest "${RAY_SCENE2_PLAN}" --key "${RAY_SCENE2_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${RAY_SCENE2_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_2/(rayquaza)[.]8bpp[.]lz$")
        set(RAY_SCENE2_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/${RAY_SCENE2_STEM}.png")
        set(RAY_SCENE2_PLAN "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/rayquaza_scene2_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                8bpp --manifest "${RAY_SCENE2_PLAN}" --key "${RAY_SCENE2_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${RAY_SCENE2_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_2/(smoke|rayquaza)[.]gbapal[.]lz$")
        set(RAY_SCENE2_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/${RAY_SCENE2_STEM}.png")
        set(RAY_SCENE2_PLAN "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/rayquaza_scene2_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                pal --manifest "${RAY_SCENE2_PLAN}" --key "${RAY_SCENE2_STEM}_pal"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${RAY_SCENE2_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_2/(rayquaza|bg)[.]bin[.]lz$")
        set(RAY_SCENE2_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/${RAY_SCENE2_STEM}.tilemap.inc")
        set(RAY_SCENE2_PLAN "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_2/rayquaza_scene2_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                tilemap --manifest "${RAY_SCENE2_PLAN}" --key "${RAY_SCENE2_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_TILEMAP}" "${RAY_SCENE2_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene2_exact_assets.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END RAYQUAZA SCENE 2 EXACT PIPELINE

    # BEGIN RAYQUAZA SCENE 3 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_3/(rayquaza|rayquaza_tail|bg|light)[.]4bpp[.]lz$")
        set(RAY_SCENE3_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/${RAY_SCENE3_STEM}.png")
        set(RAY_SCENE3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/rayquaza_scene3_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                4bpp
                --manifest "${RAY_SCENE3_PLAN}"
                --key "${RAY_SCENE3_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_3/bg[.]gbapal[.]lz$")
        set(INPUT_PAL
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/bg.pal.inc")
        set(RAY_SCENE3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/rayquaza_scene3_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                u16
                --manifest "${RAY_SCENE3_PLAN}"
                --key "bg_pal"
                "${INPUT_PAL}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PAL}"
                "${RAY_SCENE3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_3/(bg|light)[.]bin[.]lz$")
        set(RAY_SCENE3_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/${RAY_SCENE3_STEM}.tilemap.inc")
        set(RAY_SCENE3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_3/rayquaza_scene3_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                u16
                --manifest "${RAY_SCENE3_PLAN}"
                --key "${RAY_SCENE3_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_TILEMAP}"
                "${RAY_SCENE3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene3_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END RAYQUAZA SCENE 3 EXACT PIPELINE

    # BEGIN RAYQUAZA SCENE 4 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_4/(bg|streaks|rayquaza)[.]4bpp[.]lz$")
        set(RAY_SCENE4_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/${RAY_SCENE4_STEM}.png")
        set(RAY_SCENE4_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/rayquaza_scene4_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                4bpp
                --manifest "${RAY_SCENE4_PLAN}"
                --key "${RAY_SCENE4_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE4_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_4/bg[.]gbapal[.]lz$")
        set(INPUT_PAL
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/bg.pal.inc")
        set(RAY_SCENE4_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/rayquaza_scene4_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                u16
                --manifest "${RAY_SCENE4_PLAN}"
                --key "bg_pal"
                "${INPUT_PAL}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PAL}"
                "${RAY_SCENE4_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_4/(bg|streaks|rayquaza|orbs)[.]bin[.]lz$")
        set(RAY_SCENE4_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/${RAY_SCENE4_STEM}.tilemap.inc")
        set(RAY_SCENE4_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_4/rayquaza_scene4_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                u16
                --manifest "${RAY_SCENE4_PLAN}"
                --key "${RAY_SCENE4_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_TILEMAP}"
                "${RAY_SCENE4_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene4_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END RAYQUAZA SCENE 4 EXACT PIPELINE

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_b/(.+)[.]4bpp[.]lz$")
        set(PRIORITY_B_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/priority_b/${PRIORITY_B_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
                repack-png
                --key "${PRIORITY_B_STEM}.4bpp.lz"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_b/(.+)[.]bin[.]lz$")
        set(PRIORITY_B_STEM "${CMAKE_MATCH_1}")
        set(INPUT_INC
            "${CMAKE_SOURCE_DIR}/graphics/priority_b/${PRIORITY_B_STEM}.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
                repack-inc
                --key "${PRIORITY_B_STEM}.bin.lz"
                "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_INC}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_b/(.+)[.]gbapal$")
        set(PRIORITY_B_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/priority_b/${PRIORITY_B_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
                encode-indexed-palette
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/priority_b_exact_assets.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_a/(.+)[.](4bpp|8bpp)[.]lz$")
        set(PRIORITY_A_STEM "${CMAKE_MATCH_1}")
        set(PRIORITY_A_BPP "${CMAKE_MATCH_2}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/priority_a/${PRIORITY_A_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
                repack-png
                --key "${PRIORITY_A_STEM}.${PRIORITY_A_BPP}.lz"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_a/(.+)[.]bin[.]lz$")
        set(PRIORITY_A_STEM "${CMAKE_MATCH_1}")
        set(INPUT_INC
            "${CMAKE_SOURCE_DIR}/graphics/priority_a/${PRIORITY_A_STEM}.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
                repack-inc
                --key "${PRIORITY_A_STEM}.bin.lz"
                "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_INC}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/priority_a/(.+)[.]gbapal$")
        set(PRIORITY_A_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/priority_a/${PRIORITY_A_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
                encode-palette
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/priority_a_exact_assets.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/analyzed/(.+)[.]4bpp[.]lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/analyzed/${STEM}.png")
        set(LZ77_PLAN_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/analyzed/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${LZ77_PLAN_MANIFEST}"
                --stem "${STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${LZ77_PLAN_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/analyzed/(.+)\\.4bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/analyzed/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
                --format 4bpp-tiled "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/analyzed/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/analyzed/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}" --no-pad "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                    "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/spinda/spots/(.+)\\.1bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/spinda/spots/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
                --format spinda-1bpp
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/(pokemon/egg/(hatch|shard)|interface/blank|battle_interface/unused_status_summary|trade/early_tiles)\\.4bpp$")
        string(REGEX REPLACE
            "^build/graphics/(.+)\\.4bpp$" "\\1"
            STEM_PATH "${RELATIVE_OUTPUT}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/${STEM_PATH}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
                --format 4bpp-tiled
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/fonts/(.+)\\.(hwjpnfont|latfont)$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/fonts/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/fonts/(.+)\\.4bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/fonts/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/link/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/link/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/evolution/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/evolution/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/evolution/(.+)\\.gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/evolution/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro_credits/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro_credits/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro_credits/(.+)\\.bin\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP_TEXT
            "${CMAKE_SOURCE_DIR}/graphics/intro_credits/${STEM}.tilemap.txt")
        set(OUTPUT_TILEMAP
            "${OUTPUT_DIR}/${STEM}.tilemap")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            BYPRODUCTS "${OUTPUT_TILEMAP}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/tilemap_text.py"
                encode "${INPUT_TILEMAP_TEXT}" "${OUTPUT_TILEMAP}"
            COMMAND "${GBAGFX}" "${OUTPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_TILEMAP_TEXT}"
                "${CMAKE_SOURCE_DIR}/tools/tilemap_text.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro_credits/(.+)\\.gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro_credits/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/link/(.+)\\.4bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/link/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/link/(.+)\\.gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/link/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/link/(.+)\\.bin\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_BIN
            "${CMAKE_SOURCE_DIR}/graphics/link/${STEM}.bin")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_BIN}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_BIN}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/raw_cleanup/(.+)\\.4bpp\\.lz$")
        set(RAW_CLEAN_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/raw_cleanup/${RAW_CLEAN_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py"
                repack-png --key "${RAW_CLEAN_STEM}.4bpp.lz" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/raw_cleanup/(.+)\\.bin\\.lz$")
        set(RAW_CLEAN_STEM "${CMAKE_MATCH_1}")
        set(INPUT_INC "${CMAKE_SOURCE_DIR}/graphics/raw_cleanup/${RAW_CLEAN_STEM}.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py"
                repack-inc --key "${RAW_CLEAN_STEM}.bin.lz" "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_INC}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/raw_cleanup/(.+)\\.gbapal$")
        set(RAW_CLEAN_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/raw_cleanup/${RAW_CLEAN_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py"
                encode-palette "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${CMAKE_SOURCE_DIR}/tools/raw_cleanup_exact_assets.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_interface/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_interface/(.+)\\.gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/(.+)\\.4bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/(.+)\\.gbapal\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}" --lz
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/(.+)\\.gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/save_failed_screen/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/save_failed_screen/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokeblock_feed/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock_feed/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokeblock_feed/(.+)\\.gbapal\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock_feed/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}" --lz
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_dome/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_dome/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                --no-pad
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_dome/(.+)\\.gbapal\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_dome/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}" --lz
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/unknown/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/unknown/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                --no-pad
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/unknown/(.+)\\.gbapal\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/unknown/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}" --lz
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/balls/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/balls/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                --no-pad
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/balls/(.+)\\.gbapal\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/balls/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}" --lz
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/fonts/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/fonts/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}"
                --no-pad
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)

    else()
        message(FATAL_ERROR
            "生成方法を判定できない画像出力です: ${RELATIVE_OUTPUT}")
    endif()

    list(APPEND GRAPHICS_OUTPUTS "${OUTPUT_ABS}")
endmacro()

foreach(GRAPHICS_RELATIVE_OUTPUT IN LISTS GRAPHICS_RELATIVE_OUTPUTS)
    add_graphics_rule("${GRAPHICS_RELATIVE_OUTPUT}")
endforeach()

# Nintendoロゴ
set(NINTENDO_LOGO_PNG
    "${CMAKE_SOURCE_DIR}/graphics/gba_nintendo_logo.png")
set(NINTENDO_LOGO_BIN
    "${GRAPHICS_BUILD_DIR}/gba_nintendo_logo.bin")

add_custom_command(
    OUTPUT "${NINTENDO_LOGO_BIN}"
    COMMAND "${CMAKE_COMMAND}" -E make_directory "${GRAPHICS_BUILD_DIR}"
    COMMAND "${Python3_EXECUTABLE}"
        "${CMAKE_SOURCE_DIR}/tools/gba_logo_converter.py"
        encode
        "${NINTENDO_LOGO_PNG}"
        "${NINTENDO_LOGO_BIN}"
    COMMAND /bin/sh -c
        "test \"$(wc -c < \"${NINTENDO_LOGO_BIN}\")\" -eq 156"
    DEPENDS
        "${NINTENDO_LOGO_PNG}"
        "${CMAKE_SOURCE_DIR}/tools/gba_logo_converter.py"
    VERBATIM)

# crt0.sはソースを変更せず、Nintendoロゴの.incbinだけbuild配下へ向ける。
set(CRT0_SOURCE "${CMAKE_SOURCE_DIR}/asm/crt0.s")
set(GENERATED_CRT0 "${GENERATED_DIR}/crt0.s")

set_property(DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    "${CRT0_SOURCE}"
    "${CMAKE_SOURCE_DIR}/ld_script_jp.txt")

file(READ "${CRT0_SOURCE}" CRT0_CONTENT)
string(REPLACE
    "\"graphics/gba_nintendo_logo.bin\""
    "\"build/graphics/gba_nintendo_logo.bin\""
    CRT0_CONTENT
    "${CRT0_CONTENT}")
file(WRITE "${GENERATED_CRT0}" "${CRT0_CONTENT}")

# ---------------------------------------------------------------------------
# アセンブリ
# ---------------------------------------------------------------------------

file(GLOB ASM_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/asm/*.s")
file(GLOB DATA_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/data/*.s")

file(GLOB_RECURSE COMMON_ASM_DEPENDENCIES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/asm/*.inc"
    "${CMAKE_SOURCE_DIR}/constants/*.inc")

file(GLOB_RECURSE DATA_INCLUDE_DEPENDENCIES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/data/*.inc")

file(GLOB_RECURSE AUDIO_SOURCE_BINARIES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/audio/*.bin")


# BEGIN DIRECTSOUND WAV PIPELINE
set(AUDIO_BUILD_DIR "${CMAKE_BINARY_DIR}/audio")
set(DIRECTSOUND_MANIFEST
    "${CMAKE_SOURCE_DIR}/audio/direct_sound/manifest.json")
set(DIRECTSOUND_CODEC
    "${CMAKE_SOURCE_DIR}/tools/direct_sound_asset_codec.py")

file(GLOB_RECURSE DIRECTSOUND_WAV_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/audio/direct_sound/*.wav")

set(AUDIO_GENERATED_BINARIES)
foreach(DIRECTSOUND_WAV IN LISTS DIRECTSOUND_WAV_SOURCES)
    file(RELATIVE_PATH DIRECTSOUND_RELATIVE
        "${CMAKE_SOURCE_DIR}/audio/direct_sound"
        "${DIRECTSOUND_WAV}")
    string(REGEX REPLACE "[.]wav$" ".bin"
        DIRECTSOUND_BIN_RELATIVE "${DIRECTSOUND_RELATIVE}")
    list(APPEND AUDIO_GENERATED_BINARIES
        "${AUDIO_BUILD_DIR}/direct_sound/${DIRECTSOUND_BIN_RELATIVE}")
endforeach()

if(AUDIO_GENERATED_BINARIES)
    add_custom_command(
        OUTPUT ${AUDIO_GENERATED_BINARIES}
        COMMAND "${CMAKE_COMMAND}" -E make_directory
            "${AUDIO_BUILD_DIR}/direct_sound"
        COMMAND "${Python3_EXECUTABLE}" "${DIRECTSOUND_CODEC}"
            encode-all
            --repo "${CMAKE_SOURCE_DIR}"
            --manifest "${DIRECTSOUND_MANIFEST}"
            --output-root "${AUDIO_BUILD_DIR}/direct_sound"
        DEPENDS
            ${DIRECTSOUND_WAV_SOURCES}
            "${DIRECTSOUND_MANIFEST}"
            "${DIRECTSOUND_CODEC}"
        WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
        VERBATIM)
endif()

# DirectSoundの生成.binも画像生成物と同様、通常cleanでは保持する。
# END DIRECTSOUND WAV PIPELINE

file(GLOB_RECURSE TEXT_SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/data/text/*.inc")

set(ASM_OBJECTS)

foreach(ASM_SOURCE IN LISTS ASM_SOURCES)
    # NAME_WEはfoo.bar.sをfooまで縮めるため使わない。
    # 元Makefileの「末尾の.sだけ.oへ置換」と同じ名前を作る。
    get_filename_component(ASM_FILENAME "${ASM_SOURCE}" NAME)
    string(REGEX REPLACE "\\.s$" "" ASM_NAME "${ASM_FILENAME}")
    set(ASM_OBJECT "${ASM_BUILD_DIR}/${ASM_NAME}.o")
    set(ACTUAL_ASM_SOURCE "${ASM_SOURCE}")
    set(EXTRA_DEPENDENCIES)

    if(ASM_NAME STREQUAL "crt0")
        set(ACTUAL_ASM_SOURCE "${GENERATED_CRT0}")
        list(APPEND EXTRA_DEPENDENCIES "${NINTENDO_LOGO_BIN}")
    endif()

    add_custom_command(
        OUTPUT "${ASM_OBJECT}"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${ASM_BUILD_DIR}"
        COMMAND "${AS}" ${ASFLAGS}
            -o "${ASM_OBJECT}" "${ACTUAL_ASM_SOURCE}"
        DEPENDS
            "${ACTUAL_ASM_SOURCE}"
            ${COMMON_ASM_DEPENDENCIES}
            ${EXTRA_DEPENDENCIES}
        WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
        VERBATIM)

    list(APPEND ASM_OBJECTS "${ASM_OBJECT}")
endforeach()

set(DATA_OBJECTS)

foreach(DATA_SOURCE IN LISTS DATA_SOURCES)
    get_filename_component(DATA_FILENAME "${DATA_SOURCE}" NAME)
    string(REGEX REPLACE "\\.s$" "" DATA_NAME "${DATA_FILENAME}")
    set(DATA_OBJECT "${DATA_BUILD_DIR}/${DATA_NAME}.o")

    set(DATA_OBJECT_DEPENDENCIES
        "${DATA_SOURCE}"
        "${CHARMAP_STAMP}"
        ${COMMON_ASM_DEPENDENCIES}
        ${DATA_INCLUDE_DEPENDENCIES}
        ${AUDIO_SOURCE_BINARIES}
        ${AUDIO_GENERATED_BINARIES})

    if(DATA_NAME STREQUAL "data" OR
       DATA_NAME STREQUAL "event_scripts")
        list(APPEND DATA_OBJECT_DEPENDENCIES ${TEXT_SOURCES})
    endif()

    if(DATA_NAME STREQUAL "data")
        list(APPEND DATA_OBJECT_DEPENDENCIES ${GRAPHICS_OUTPUTS})
    endif()

    set(PREPROCESS_AND_ASSEMBLE
        "\"${PREPROC}\" \"${DATA_SOURCE}\" \"${CHARMAP_FILE}\""
        " | "
        "\"${AS}\" -mcpu=arm7tdmi -o \"${DATA_OBJECT}\" -")
    string(JOIN "" PREPROCESS_AND_ASSEMBLE
        ${PREPROCESS_AND_ASSEMBLE})

    add_custom_command(
        OUTPUT "${DATA_OBJECT}"
        COMMAND "${CMAKE_COMMAND}" -E make_directory "${DATA_BUILD_DIR}"
        COMMAND /bin/sh -c "${PREPROCESS_AND_ASSEMBLE}"
        DEPENDS ${DATA_OBJECT_DEPENDENCIES}
        WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
        VERBATIM)

    list(APPEND DATA_OBJECTS "${DATA_OBJECT}")
endforeach()

set(ALL_OBJECTS ${ASM_OBJECTS} ${DATA_OBJECTS})

# ---------------------------------------------------------------------------
# リンカスクリプト
# ---------------------------------------------------------------------------

set(LINKER_SCRIPT_SOURCE
    "${CMAKE_SOURCE_DIR}/ld_script_jp.txt")
set(LINKER_SCRIPT
    "${CMAKE_BINARY_DIR}/ld_script_jp.ld")

file(READ "${LINKER_SCRIPT_SOURCE}" LINKER_SCRIPT_CONTENT)

# リンカスクリプト内の配置順は変更せず、入力.oの場所だけ変更する。
string(REPLACE
    "asm/"
    "${ASM_BUILD_DIR}/"
    LINKER_SCRIPT_CONTENT
    "${LINKER_SCRIPT_CONTENT}")
string(REPLACE
    "data/event_scripts.o"
    "${DATA_BUILD_DIR}/event_scripts.o"
    LINKER_SCRIPT_CONTENT
    "${LINKER_SCRIPT_CONTENT}")
string(REPLACE
    "data/data.o"
    "${DATA_BUILD_DIR}/data.o"
    LINKER_SCRIPT_CONTENT
    "${LINKER_SCRIPT_CONTENT}")

file(WRITE "${LINKER_SCRIPT}" "${LINKER_SCRIPT_CONTENT}")

# ---------------------------------------------------------------------------
# ELF・ROM
# ---------------------------------------------------------------------------

add_custom_command(
    OUTPUT "${ELF_FILE}"
    BYPRODUCTS "${MAP_FILE}"
    COMMAND "${LD}"
        -T "${LINKER_SCRIPT}"
        -Map "${MAP_FILE}"
        -o "${ELF_FILE}"
        ${ALL_OBJECTS}
        -L "${CMAKE_SOURCE_DIR}/tools/agbcc/lib"
        -lgcc
        -lc
    COMMAND "${GBAFIX}"
        "-tPOKEMON EMER"
        -cBPEJ
        -m01
        --silent
        "${ELF_FILE}"
    DEPENDS
        ${ALL_OBJECTS}
        "${LINKER_SCRIPT}"
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
    VERBATIM)

add_custom_command(
    OUTPUT "${ROM_FILE}"
    COMMAND "${OBJCOPY}" -O binary "${ELF_FILE}" "${ROM_FILE}"
    DEPENDS "${ELF_FILE}"
    VERBATIM)

add_custom_target(pokeemerald_jp ALL
    DEPENDS "${ROM_FILE}")

add_custom_target(compare
    COMMAND "${CMAKE_COMMAND}" -E chdir
        "${CMAKE_BINARY_DIR}"
        "${SHA1SUM_EXECUTABLE}"
        -c
        "${CMAKE_SOURCE_DIR}/rom_jp.sha1"
    DEPENDS "${ROM_FILE}"
    VERBATIM)

# 通常cleanの対象に加えて、変換済みの画像・音声生成物も削除する。
# CMake構成時のgenerated/とld_script_jp.ldは保持するため、
# distclean後も再構成せずにビルドできる。
add_custom_target(distclean
    COMMAND "${CMAKE_COMMAND}" -E remove_directory "${ASM_BUILD_DIR}"
    COMMAND "${CMAKE_COMMAND}" -E remove_directory "${DATA_BUILD_DIR}"
    COMMAND "${CMAKE_COMMAND}" -E remove_directory "${CHARMAP_BUILD_DIR}"
    COMMAND "${CMAKE_COMMAND}" -E remove_directory "${GRAPHICS_BUILD_DIR}"
    COMMAND "${CMAKE_COMMAND}" -E remove_directory "${AUDIO_BUILD_DIR}"
    COMMAND "${CMAKE_COMMAND}" -E remove -f
        "${ROM_FILE}"
        "${ELF_FILE}"
        "${MAP_FILE}"
    COMMENT "Removing build outputs, including converted graphics and audio"
    VERBATIM)
