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
        "build/graphics/[A-Za-z0-9_./-]+\\.(1bpp|4bpp\\.(lz|rl)|4bpp|8bpp\\.lz|8bpp|gbapal\\.lz|gbapal|hwjpnfont|latfont|bin\\.(lz|rl))"
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

    # BEGIN RAYQUAZA SCENE 5 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_5/(groudon|groudon_tail|kyogre|rayquaza|rayquaza_tail|kyogre_splash|light)[.]4bpp[.]lz$")
        set(RAY_SCENE5_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/${RAY_SCENE5_STEM}.png")
        set(RAY_SCENE5_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/rayquaza_scene5_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                4bpp
                --manifest "${RAY_SCENE5_PLAN}"
                --key "${RAY_SCENE5_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE5_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_5/ring[.]8bpp[.]lz$")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/ring.png")
        set(RAY_SCENE5_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/rayquaza_scene5_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                8bpp
                --manifest "${RAY_SCENE5_PLAN}"
                --key "ring"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE5_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_5/(groudon|kyogre|rayquaza|kyogre_splash)[.]gbapal[.]lz$")
        set(RAY_SCENE5_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/${RAY_SCENE5_STEM}.png")
        set(RAY_SCENE5_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/rayquaza_scene5_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                pal
                --manifest "${RAY_SCENE5_PLAN}"
                --key "${RAY_SCENE5_STEM}_pal"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RAY_SCENE5_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_5/bg[.]gbapal[.]lz$")
        set(INPUT_PAL
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/bg.pal.inc")
        set(RAY_SCENE5_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/rayquaza_scene5_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                u16
                --manifest "${RAY_SCENE5_PLAN}"
                --key "bg_pal"
                "${INPUT_PAL}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PAL}"
                "${RAY_SCENE5_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rayquaza_scene/scene_5/(light|bg|ring)[.]bin[.]lz$")
        set(RAY_SCENE5_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/${RAY_SCENE5_STEM}.tilemap.inc")
        set(RAY_SCENE5_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/rayquaza_scene/scene_5/rayquaza_scene5_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                u16
                --manifest "${RAY_SCENE5_PLAN}"
                --key "${RAY_SCENE5_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_TILEMAP}"
                "${RAY_SCENE5_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/rayquaza_scene5_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END RAYQUAZA SCENE 5 EXACT PIPELINE

    # BEGIN ITEM ICON ALL EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/items/itemicon_exact/(gItemIcon[^/]+)[.](4bpp|gbapal)[.]lz$")
        set(ITEM_ICON_EXACT_KEY "${CMAKE_MATCH_1}")
        set(ITEM_ICON_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/items/item_icons_all_lz77_plan.json")

        file(GLOB_RECURSE ITEM_ICON_EXACT_EDITABLE_SOURCES
            CONFIGURE_DEPENDS
            "${CMAKE_SOURCE_DIR}/graphics/items/icons/*.png"
            "${CMAKE_SOURCE_DIR}/graphics/items/icon_palettes/*.png")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/item_icon_exact_assets.py"
                --manifest "${ITEM_ICON_EXACT_MANIFEST}"
                --key "${ITEM_ICON_EXACT_KEY}"
                --repo-root "${CMAKE_SOURCE_DIR}"
                --output "${OUTPUT_ABS}"
            DEPENDS
                ${ITEM_ICON_EXACT_EDITABLE_SOURCES}
                "${ITEM_ICON_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/item_icon_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END ITEM ICON ALL EXACT PIPELINE

    # BEGIN DECORATION ICON ALL EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/decorations/decor_exact/(gDecorIcon[^/]+)[.](4bpp|gbapal)[.]lz$")
        set(DECOR_ICON_EXACT_KEY "${CMAKE_MATCH_1}")
        set(DECOR_ICON_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/decorations/decorations_lz77_plan.json")

        file(GLOB DECOR_ICON_EXACT_EDITABLE_SOURCES
            CONFIGURE_DEPENDS
            "${CMAKE_SOURCE_DIR}/graphics/decorations/*.png")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/decoration_exact_assets.py"
                --manifest "${DECOR_ICON_EXACT_MANIFEST}"
                --key "${DECOR_ICON_EXACT_KEY}"
                --repo-root "${CMAKE_SOURCE_DIR}"
                --output "${OUTPUT_ABS}"
            DEPENDS
                ${DECOR_ICON_EXACT_EDITABLE_SOURCES}
                "${DECOR_ICON_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/decoration_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END DECORATION ICON ALL EXACT PIPELINE


    # BEGIN ROULETTE EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/roulette/wheel[.]8bpp[.]lz$")
        set(ROULETTE_EXACT_KEY "wheel")
        set(ROULETTE_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/roulette/wheel.png")
        set(ROULETTE_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/roulette/roulette_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/indexed_lz77_exact_assets.py"
                --manifest "${ROULETTE_EXACT_MANIFEST}"
                --key "${ROULETTE_EXACT_KEY}"
                --bpp 8
                "${ROULETTE_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${ROULETTE_EXACT_PNG}"
                "${ROULETTE_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/indexed_lz77_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/roulette/(center|headers|credit|numbers|multiplier)[.]4bpp[.]lz$")
        set(ROULETTE_EXACT_KEY "${CMAKE_MATCH_1}")
        set(ROULETTE_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/roulette/${ROULETTE_EXACT_KEY}.png")
        set(ROULETTE_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/roulette/roulette_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/indexed_lz77_exact_assets.py"
                --manifest "${ROULETTE_EXACT_MANIFEST}"
                --key "${ROULETTE_EXACT_KEY}"
                --bpp 4
                "${ROULETTE_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${ROULETTE_EXACT_PNG}"
                "${ROULETTE_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/indexed_lz77_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END ROULETTE EXACT PIPELINE

    # BEGIN MAIL EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mail/(orange|harbor|glitter|mech|wood|wave|bead|shadow|tropic|dream|fab|retro)/tiles[.]4bpp[.]lz$")
        set(MAIL_EXACT_TYPE "${CMAKE_MATCH_1}")
        set(MAIL_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/mail/${MAIL_EXACT_TYPE}/tiles.png")
        set(MAIL_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/mail/mail_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
                tiles
                --manifest "${MAIL_EXACT_MANIFEST}"
                --key "${MAIL_EXACT_TYPE}_tiles"
                "${MAIL_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${MAIL_EXACT_PNG}"
                "${MAIL_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mail/(orange|harbor|glitter|mech|wood|wave|bead|shadow|tropic|dream|fab|retro)/palette[.]gbapal$")
        set(MAIL_EXACT_TYPE "${CMAKE_MATCH_1}")
        set(MAIL_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/mail/${MAIL_EXACT_TYPE}/tiles.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
                pal
                "${MAIL_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${MAIL_EXACT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mail/(orange|harbor|glitter|mech|wood|wave|bead|shadow|tropic|dream|fab|retro)/map[.]bin[.]lz$")
        set(MAIL_EXACT_TYPE "${CMAKE_MATCH_1}")
        set(MAIL_EXACT_MAP
            "${CMAKE_SOURCE_DIR}/graphics/mail/${MAIL_EXACT_TYPE}/map.tilemap.inc")
        set(MAIL_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/mail/mail_lz77_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
                tilemap
                --manifest "${MAIL_EXACT_MANIFEST}"
                --key "${MAIL_EXACT_TYPE}_map"
                "${MAIL_EXACT_MAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${MAIL_EXACT_MAP}"
                "${MAIL_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/mail_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END MAIL EXACT PIPELINE

    # BEGIN BERRY EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/bag/berry_tag_tilemap.bin.lz")
        set(BERRY_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/berries/berry_lz77_plan.json")
        set(BERRY_TAG_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/bag/berry_tag.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                tilemap
                --manifest "${BERRY_EXACT_MANIFEST}"
                --key berry_tag_tilemap
                "${BERRY_TAG_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_TAG_TILEMAP}"
                "${BERRY_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/bag/check_berry_circle.4bpp.lz")
        set(BERRY_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/berries/berry_lz77_plan.json")
        set(BERRY_CHECK_CIRCLE
            "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_circle.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                pic
                --manifest "${BERRY_EXACT_MANIFEST}"
                --key berry_check_circle
                "${BERRY_CHECK_CIRCLE}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_CHECK_CIRCLE}"
                "${BERRY_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/berries/([^/]+)[.]4bpp[.]lz$")
        set(BERRY_EXACT_NAME "${CMAKE_MATCH_1}")
        set(BERRY_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/berries/berry_lz77_plan.json")
        set(BERRY_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/berries/${BERRY_EXACT_NAME}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                pic
                --manifest "${BERRY_EXACT_MANIFEST}"
                --key "${BERRY_EXACT_NAME}_pic"
                "${BERRY_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_EXACT_PNG}"
                "${BERRY_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/berries/([^/]+)[.]gbapal[.]lz$")
        set(BERRY_EXACT_NAME "${CMAKE_MATCH_1}")
        set(BERRY_EXACT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/berries/berry_lz77_plan.json")
        set(BERRY_EXACT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/berries/${BERRY_EXACT_NAME}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                pal
                --manifest "${BERRY_EXACT_MANIFEST}"
                --key "${BERRY_EXACT_NAME}_pal"
                "${BERRY_EXACT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_EXACT_PNG}"
                "${BERRY_EXACT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/berry_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END BERRY EXACT PIPELINE

    # BEGIN GENERIC RAW LZ77 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/assets/lz77_raw/([0-9A-Fa-f]{8})[.]bin[.]lz$")
        set(LZ77_RAW_KEY "${CMAKE_MATCH_1}")
        set(LZ77_RAW_MANIFEST
            "${CMAKE_SOURCE_DIR}/assets/lz77_raw/lz77_exact_plan.json")
        set(LZ77_RAW_INPUT
            "${CMAKE_SOURCE_DIR}/assets/lz77_raw/${LZ77_RAW_KEY}.bin")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_raw_exact_assets.py"
                --manifest "${LZ77_RAW_MANIFEST}"
                --key "${LZ77_RAW_KEY}"
                "${LZ77_RAW_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${LZ77_RAW_INPUT}"
                "${LZ77_RAW_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_raw_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END GENERIC RAW LZ77 EXACT PIPELINE

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

    # BEGIN UI RAW 4BPP PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/ui/(.+)[.]4bpp$")
        set(UI_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/ui/${UI_RAW_4BPP_STEM}.png")
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
    # END UI RAW 4BPP PIPELINE

    # BEGIN BATTLE TRANSITION RAW 4BPP PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_transitions/(.+)[.]4bpp$")
        set(BATTLE_TRANSITION_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_transitions/${BATTLE_TRANSITION_RAW_4BPP_STEM}.png")
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
    # END BATTLE TRANSITION RAW 4BPP PIPELINE


    # BEGIN ROTATING GATE RAW 4BPP PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/rotating_gates/(.+)[.]4bpp$")
        set(ROTATING_GATE_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/rotating_gates/${ROTATING_GATE_RAW_4BPP_STEM}.png")
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
    # END ROTATING GATE RAW 4BPP PIPELINE


    # BEGIN WEATHER RAW 4BPP PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/weather/(.+)[.]4bpp$")
        set(WEATHER_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/weather/${WEATHER_RAW_4BPP_STEM}.png")
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
    # END WEATHER RAW 4BPP PIPELINE


    # BEGIN POKEBLOCK USE SCREEN EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/updown.4bpp")
        set(POKEBLOCK_USE_UPDOWN_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/updown.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}"
                "${POKEBLOCK_USE_UPDOWN_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_USE_UPDOWN_PNG}"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/updown.gbapal")
        set(POKEBLOCK_USE_UPDOWN_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/updown.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}"
                "${POKEBLOCK_USE_UPDOWN_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_USE_UPDOWN_PNG}"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/condition.4bpp.lz")
        set(POKEBLOCK_USE_CONDITION_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/condition.png")
        set(POKEBLOCK_USE_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/use_screen_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${POKEBLOCK_USE_LZ77_PLAN}"
                --stem condition
                "${POKEBLOCK_USE_CONDITION_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_USE_CONDITION_PNG}"
                "${POKEBLOCK_USE_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/condition.gbapal")
        set(POKEBLOCK_USE_CONDITION_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/condition.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}"
                "${POKEBLOCK_USE_CONDITION_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_USE_CONDITION_PNG}"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/mon_frame.4bpp")
        set(POKEBLOCK_MON_FRAME_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/mon_frame.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${POKEBLOCK_MON_FRAME_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${POKEBLOCK_MON_FRAME_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/mon_frame.bin.lz")
        set(POKEBLOCK_MON_FRAME_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/mon_frame.tilemap.txt")
        set(POKEBLOCK_USE_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/use_screen_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${POKEBLOCK_USE_LZ77_PLAN}"
                --stem mon_frame_tilemap
                "${POKEBLOCK_MON_FRAME_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_MON_FRAME_TILEMAP}"
                "${POKEBLOCK_USE_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/graph.4bpp.lz")
        set(POKEBLOCK_GRAPH_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/graph.png")
        set(POKEBLOCK_USE_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/use_screen_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${POKEBLOCK_USE_LZ77_PLAN}"
                --stem graph
                --raw-size 0xFA0
                "${POKEBLOCK_GRAPH_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_GRAPH_PNG}"
                "${POKEBLOCK_USE_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/graph.bin.lz")
        set(POKEBLOCK_GRAPH_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/graph.tilemap.txt")
        set(POKEBLOCK_USE_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/use_screen_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${POKEBLOCK_USE_LZ77_PLAN}"
                --stem graph_tilemap
                "${POKEBLOCK_GRAPH_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_GRAPH_TILEMAP}"
                "${POKEBLOCK_USE_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock/use_screen/graph_data.bin.lz")
        set(POKEBLOCK_GRAPH_DATA_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/graph_data.tilemap.txt")
        set(POKEBLOCK_USE_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokeblock/use_screen/use_screen_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${POKEBLOCK_USE_LZ77_PLAN}"
                --stem graph_data_tilemap
                "${POKEBLOCK_GRAPH_DATA_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${POKEBLOCK_GRAPH_DATA_TILEMAP}"
                "${POKEBLOCK_USE_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END POKEBLOCK USE SCREEN EXACT PIPELINE


    # BEGIN INTRO COPYRIGHT EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/intro/copyright.4bpp.lz")
        set(INTRO_COPYRIGHT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro/copyright.png")
        set(INTRO_COPYRIGHT_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/copyright_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${INTRO_COPYRIGHT_PLAN}"
                --stem copyright_gfx
                --raw-size 0x4E0
                "${INTRO_COPYRIGHT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO_COPYRIGHT_PNG}"
                "${INTRO_COPYRIGHT_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/intro/copyright.bin.lz")
        set(INTRO_COPYRIGHT_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/intro/copyright.tilemap.txt")
        set(INTRO_COPYRIGHT_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/copyright_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${INTRO_COPYRIGHT_PLAN}"
                --stem copyright_tilemap
                "${INTRO_COPYRIGHT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO_COPYRIGHT_TILEMAP}"
                "${INTRO_COPYRIGHT_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/intro/copyright.gbapal")
        set(INTRO_COPYRIGHT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro/copyright.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INTRO_COPYRIGHT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INTRO_COPYRIGHT_PNG}" "${GBAGFX}"
            VERBATIM)
    # END INTRO COPYRIGHT EXACT PIPELINE

    # BEGIN INTRO SCENE ASSET EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/(scene_1|scene_3)/(drops|logo|bg|flygon_silhouette|pokeball|streaks|rayquaza_orb|misc)[.]gbapal$")
        set(INTRO_SCENE_DIR "${CMAKE_MATCH_1}")
        set(INTRO_SCENE_STEM "${CMAKE_MATCH_2}")
        set(INTRO_SCENE_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro/${INTRO_SCENE_DIR}/${INTRO_SCENE_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INTRO_SCENE_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INTRO_SCENE_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/(scene_1|scene_3)/(drops_logo|bg|streaks|misc|lati)[.]4bpp[.]lz$")
        set(INTRO_SCENE_DIR "${CMAKE_MATCH_1}")
        set(INTRO_SCENE_STEM "${CMAKE_MATCH_2}")
        set(INTRO_SCENE_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/intro_scene_lz77_exact_plans.json")
        set(INTRO_SCENE_PNG_STEM "${INTRO_SCENE_STEM}")
        set(INTRO_SCENE_PLAN_KEY "${INTRO_SCENE_STEM}_gfx")
        if("${INTRO_SCENE_STEM}" STREQUAL "bg")
            set(INTRO_SCENE_PNG_STEM "bg_tiles")
            set(INTRO_SCENE_PLAN_KEY "bg_gfx")
        elseif("${INTRO_SCENE_STEM}" STREQUAL "drops_logo")
            set(INTRO_SCENE_PLAN_KEY "drops_logo_gfx")
        endif()
        set(INTRO_SCENE_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro/${INTRO_SCENE_DIR}/${INTRO_SCENE_PNG_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${INTRO_SCENE_PLAN}"
                --stem "${INTRO_SCENE_PLAN_KEY}"
                "${INTRO_SCENE_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO_SCENE_PNG}"
                "${INTRO_SCENE_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/(scene_1|scene_3)/(bg0|bg1|bg2|bg3|pokeball|streaks)[.]bin[.]lz$")
        set(INTRO_SCENE_DIR "${CMAKE_MATCH_1}")
        set(INTRO_SCENE_STEM "${CMAKE_MATCH_2}")
        set(INTRO_SCENE_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/intro_scene_lz77_exact_plans.json")
        set(INTRO_SCENE_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/intro/${INTRO_SCENE_DIR}/${INTRO_SCENE_STEM}.tilemap.txt")
        set(INTRO_SCENE_PLAN_KEY "${INTRO_SCENE_STEM}_tilemap")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${INTRO_SCENE_PLAN}"
                --stem "${INTRO_SCENE_PLAN_KEY}"
                "${INTRO_SCENE_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO_SCENE_TILEMAP}"
                "${INTRO_SCENE_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/intro/scene_3/pokeball.8bpp.lz")
        set(INTRO_POKEBALL_PNG
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/pokeball.png")
        set(INTRO_POKEBALL_RAW "${OUTPUT_ABS}.raw.8bpp")
        set(INTRO_RAW_PLAN
            "${CMAKE_SOURCE_DIR}/assets/lz77_raw/lz77_exact_plan.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INTRO_POKEBALL_PNG}" "${INTRO_POKEBALL_RAW}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_raw_exact_assets.py"
                --manifest "${INTRO_RAW_PLAN}"
                --key 085C4908
                "${INTRO_POKEBALL_RAW}" "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E rm -f "${INTRO_POKEBALL_RAW}"
            DEPENDS
                "${INTRO_POKEBALL_PNG}"
                "${INTRO_RAW_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_raw_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${GBAGFX}"
            VERBATIM)
    # END INTRO SCENE ASSET EXACT PIPELINE


    # BEGIN LEGACY POKENAV HOENN MAP EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/hoenn_map.4bpp.lz")
        set(LEGACY_POKENAV_HOENN_MAP_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map.png")
        set(LEGACY_POKENAV_HOENN_MAP_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${LEGACY_POKENAV_HOENN_MAP_PLAN}"
                --stem hoenn_map_gfx
                --raw-size 0xFE0
                "${LEGACY_POKENAV_HOENN_MAP_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_HOENN_MAP_PNG}"
                "${LEGACY_POKENAV_HOENN_MAP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/hoenn_map.gbapal")
        set(LEGACY_POKENAV_HOENN_MAP_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map.png")
        set(LEGACY_POKENAV_HOENN_MAP_PAL_META
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map_palette_meta.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/pokenav_legacy_map_assets.py"
                palette
                --metadata "${LEGACY_POKENAV_HOENN_MAP_PAL_META}"
                "${LEGACY_POKENAV_HOENN_MAP_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_HOENN_MAP_PNG}"
                "${LEGACY_POKENAV_HOENN_MAP_PAL_META}"
                "${CMAKE_SOURCE_DIR}/tools/pokenav_legacy_map_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/hoenn_map.bin.lz")
        set(LEGACY_POKENAV_HOENN_MAP_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map.tilemap.txt")
        set(LEGACY_POKENAV_HOENN_MAP_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/hoenn_map_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${LEGACY_POKENAV_HOENN_MAP_PLAN}"
                --stem hoenn_map_tilemap
                "${LEGACY_POKENAV_HOENN_MAP_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_HOENN_MAP_TILEMAP}"
                "${LEGACY_POKENAV_HOENN_MAP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END LEGACY POKENAV HOENN MAP EXACT PIPELINE


    # BEGIN LEGACY POKENAV EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokenav/legacy/(screen_a|screen_b)[.](4bpp|gbapal)$")
        set(LEGACY_POKENAV_SCREEN "${CMAKE_MATCH_1}")
        set(LEGACY_POKENAV_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/${LEGACY_POKENAV_SCREEN}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${LEGACY_POKENAV_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${LEGACY_POKENAV_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/screen_a.bin.lz")
        set(LEGACY_POKENAV_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/screen_a.tilemap.txt")
        set(LEGACY_POKENAV_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${LEGACY_POKENAV_PLAN}"
                --stem screen_a_tilemap
                "${LEGACY_POKENAV_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_TILEMAP}"
                "${LEGACY_POKENAV_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/screen_b.bin.lz")
        set(LEGACY_POKENAV_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/screen_b.tilemap.txt")
        set(LEGACY_POKENAV_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${LEGACY_POKENAV_PLAN}"
                --stem screen_b_tilemap
                "${LEGACY_POKENAV_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_TILEMAP}"
                "${LEGACY_POKENAV_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/outline.gbapal")
        set(LEGACY_POKENAV_OUTLINE_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/outline.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${LEGACY_POKENAV_OUTLINE_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${LEGACY_POKENAV_OUTLINE_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/outline.4bpp.lz")
        set(LEGACY_POKENAV_OUTLINE_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/outline.png")
        set(LEGACY_POKENAV_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${LEGACY_POKENAV_PLAN}"
                --stem outline
                --raw-size 0x560
                "${LEGACY_POKENAV_OUTLINE_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_OUTLINE_PNG}"
                "${LEGACY_POKENAV_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokenav/legacy/outline.bin.lz")
        set(LEGACY_POKENAV_TILEMAP
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/outline.tilemap.txt")
        set(LEGACY_POKENAV_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokenav/legacy/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${LEGACY_POKENAV_PLAN}"
                --stem outline_tilemap
                "${LEGACY_POKENAV_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS
                "${LEGACY_POKENAV_TILEMAP}"
                "${LEGACY_POKENAV_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END LEGACY POKENAV EXACT PIPELINE


    # BEGIN TILESET RAW 4BPP FALLBACK PIPELINE
    # Handles editable tileset graphics other than the dedicated tiles.4bpp
    # rule above, including animation frames.
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/tilesets/(.+)[.]4bpp$")
        set(TILESET_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/tilesets/${TILESET_RAW_4BPP_STEM}.png")
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
    # END TILESET RAW 4BPP FALLBACK PIPELINE

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
            "^build/graphics/door_anims/(.+)\\.4bpp$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/door_anims/${STEM}.png")
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
            "^build/graphics/picture_frame/(.+)\\.4bpp\\.rl$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/picture_frame/${STEM}.png")
        set(RLE_PLAN_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/picture_frame/rle_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rle_exact.py"
                repack-png
                --manifest "${RLE_PLAN_MANIFEST}"
                --stem "${STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${RLE_PLAN_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/rle_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/png_to_gba_indexed.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/picture_frame/(.+)\\.bin\\.rl$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_INC "${CMAKE_SOURCE_DIR}/graphics/picture_frame/${STEM}.tilemap.inc")
        set(RLE_PLAN_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/picture_frame/rle_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/rle_exact.py"
                repack-inc
                --manifest "${RLE_PLAN_MANIFEST}"
                --stem "${STEM}"
                "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_INC}"
                "${RLE_PLAN_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/rle_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mystery_gift/(.+)\\.4bpp\\.lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/mystery_gift/${STEM}.png")
        set(LZ77_PLAN_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/mystery_gift/lz77_exact_plans.json")
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

    # BEGIN POKEMON SEMANTIC PNG PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon/(.+)/footprint[.]1bpp$")
        set(POKEMON_SEMANTIC_DIR "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${POKEMON_SEMANTIC_DIR}/footprint.png")
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
            "^build/graphics/pokemon/(.+)/still_front[.]4bpp[.]lz$")
        set(POKEMON_SEMANTIC_DIR "${CMAKE_MATCH_1}")
        set(POKEMON_SEMANTIC_KEY "${POKEMON_SEMANTIC_DIR}/still_front")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/${POKEMON_SEMANTIC_DIR}/still_front.png")
        set(POKEMON_STILL_FRONT_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/pokemon/still_front_lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${POKEMON_STILL_FRONT_PLAN}"
                --stem "${POKEMON_SEMANTIC_KEY}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${POKEMON_STILL_FRONT_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END POKEMON SEMANTIC PNG PIPELINE

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

# BEGIN MOVES 8117 LZ77 CONFIGURE EXACT PIPELINE
# These files are consumed by .incbin directives in
# data/generated/rodata/moves/8117_moves_data.inc.
#
# Generate them during CMake configuration rather than as independent custom
# command outputs. data/data.o contains the nested .inc file and the previous
# per-output rules were not ordered before its assembler invocation.
#
# CMAKE_CONFIGURE_DEPENDS makes edits to PNG sources / exact plan / helpers
# trigger automatic reconfigure before the next build.
if(NOT Python3_EXECUTABLE)
    find_package(Python3 REQUIRED COMPONENTS Interpreter)
endif()

set(MOVES_8117_EXACT_ROOT
    "${CMAKE_SOURCE_DIR}/graphics/unknown/moves_8117_lz77")
set(MOVES_8117_EXACT_MANIFEST
    "${MOVES_8117_EXACT_ROOT}/manifests/moves_8117_lz77_exact_plan.json")
set(MOVES_8117_EXACT_OUTPUT_DIR
    "${CMAKE_BINARY_DIR}/graphics/unknown/moves_8117_lz77/exact")

file(GLOB MOVES_8117_EXACT_EDITABLE_SOURCES
    CONFIGURE_DEPENDS
    "${MOVES_8117_EXACT_ROOT}/png/*.png")

set_property(
    DIRECTORY APPEND PROPERTY CMAKE_CONFIGURE_DEPENDS
    ${MOVES_8117_EXACT_EDITABLE_SOURCES}
    "${MOVES_8117_EXACT_MANIFEST}"
    "${CMAKE_SOURCE_DIR}/tools/moves_8117_exact_assets.py"
    "${CMAKE_SOURCE_DIR}/tools/moves_8117_exact_assets_batch.py"
    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py")

execute_process(
    COMMAND
        "${Python3_EXECUTABLE}"
        "${CMAKE_SOURCE_DIR}/tools/moves_8117_exact_assets_batch.py"
        --manifest "${MOVES_8117_EXACT_MANIFEST}"
        --repo-root "${CMAKE_SOURCE_DIR}"
        --output-dir "${MOVES_8117_EXACT_OUTPUT_DIR}"
        --quiet
    WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}"
    RESULT_VARIABLE MOVES_8117_EXACT_RESULT
    OUTPUT_VARIABLE MOVES_8117_EXACT_STDOUT
    ERROR_VARIABLE MOVES_8117_EXACT_STDERR)

if(NOT MOVES_8117_EXACT_RESULT EQUAL 0)
    message(FATAL_ERROR
        "moves/8117 exact PNG asset generation failed "
        "(exit ${MOVES_8117_EXACT_RESULT})\n"
        "stdout:\n${MOVES_8117_EXACT_STDOUT}\n"
        "stderr:\n${MOVES_8117_EXACT_STDERR}")
endif()
# END MOVES 8117 LZ77 CONFIGURE EXACT PIPELINE
