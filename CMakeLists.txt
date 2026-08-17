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
    "build/graphics/fonts/font_tiles.4bpp.lz"
    "build/graphics/slot_machine/menu.tilemap.inc"
    "build/graphics/slot_machine/info_box.tilemap.inc"
    "build/graphics/slot_machine/reel_time_window.tilemap.inc")

list(REMOVE_DUPLICATES GRAPHICS_RELATIVE_OUTPUTS)
list(SORT GRAPHICS_RELATIVE_OUTPUTS)

set(GRAPHICS_OUTPUTS)

# BEGIN REMAINING B16 EXACT OUTPUT LIST
set(REMAINING_B16_EXACT_OUTPUTS
    "build/graphics/battle_anims/unused/spinning_ball_2_palette.gbapal.lz"
    "build/graphics/unused/old_battle_interface_pal_1_2_3.gbapal.lz"
    "build/graphics/unused/old_battle_interface_pal_5_6_7.gbapal.lz"
    "build/graphics/unused/old_battle_interface.bin.lz"
    "build/graphics/battle_anims/unused/unknown_1.bin.lz"
    "build/graphics/battle_anims/unused/unknown_2.bin.lz"
    "build/graphics/battle_anims/unused/unknown_3.bin.lz"
    "build/graphics/battle_anims/unused/line_sketch_2.8bpp.lz"
    "build/graphics/battle_anims/unused/line_sketch_2.bin.lz"
    "build/graphics/battle_anims/unused/unknown_4.bin.lz"
    "build/graphics/unused/blue_frame.bin.lz"
    "build/graphics/unused/red_yellow_green_frame.bin.lz"
    "build/graphics/battle_anims/unused/water_splash.8bpp.lz"
    "build/graphics/battle_anims/unused/water_splash.bin.lz"
    "build/graphics/battle_anims/unused/water_splash_palette.gbapal.lz"
    "build/graphics/unused/basic_frame.bin.lz"
    "build/graphics/unused/old_charmap.bin.lz"
    "build/graphics/unused/old_charmap_palette.gbapal.lz"
)
set(REMAINING_B16_EXACT_SOURCES
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/spinning_ball_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_battle_interface_pal_1_2_3.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_battle_interface_pal_5_6_7.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_battle_interface.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/unknown_1.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/unknown_2.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/unknown_3.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/line_sketch_2.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/line_sketch_2.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/unknown_4_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/blue_frame.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/unused/red_yellow_green_frame.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/water_splash.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/water_splash.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/water_splash_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/basic_frame.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_charmap.tilemap.u16"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_charmap_palette.png"
)
# END REMAINING B16 EXACT OUTPUT LIST

# BEGIN REMAINING A52 EXACT OUTPUT LIST
set(REMAINING_A52_EXACT_OUTPUTS
    "build/graphics/balls/open.4bpp.lz"
    "build/graphics/battle_anims/sprites/rain_drops_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/bone_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/air_wave_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/explosion_6_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/ice_cube_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/gust_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/spark_2_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/spikes_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/tied_bag_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/black_ball_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/blue_shards_palette.gbapal.lz"
    "build/graphics/battle_anims/unused/music_notes_palette.gbapal.lz"
    "build/graphics/battle_anims/unused/music_notes.4bpp.lz"
    "build/graphics/battle_anims/sprites/hit_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/hit.4bpp.lz"
    "build/graphics/battle_anims/sprites/hit_2_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/hit_duplicate.4bpp.lz"
    "build/graphics/battle_anims/sprites/hit_duplicate_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/leer_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/small_ember_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/gray_smoke_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/lightning_2_palette.gbapal.lz"
    "build/graphics/battle_anims/unused/spinning_ball.4bpp.lz"
    "build/graphics/battle_anims/unused/spinning_ball_palette.gbapal.lz"
    "build/graphics/unused/obi1.4bpp.lz"
    "build/graphics/unused/old_pal4_palette.gbapal.lz"
    "build/graphics/unused/obi2.4bpp.lz"
    "build/graphics/battle_interface/hpbar_unused.4bpp.lz"
    "build/graphics/battle_anims/sprites/ice_chunk_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/glass_2_palette.gbapal.lz"
    "build/graphics/battle_interface/unused_window.4bpp.lz"
    "build/graphics/battle_interface/unused_window_palette.gbapal.lz"
    "build/graphics/battle_interface/battle_bar.4bpp.lz"
    "build/graphics/battle_interface/unused_window2.4bpp.lz"
    "build/graphics/battle_interface/unused_window2bar.4bpp.lz"
    "build/graphics/battle_anims/unused/line_sketch.4bpp.lz"
    "build/graphics/battle_anims/unused/line_sketch_palette.gbapal.lz"
    "build/graphics/battle_anims/unused/metronome_hand_small.4bpp.lz"
    "build/graphics/battle_anims/sprites/clapping_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/shock_4_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/pink_glove_palette.gbapal.lz"
    "build/graphics/battle_anims/unused/line_sketch_2_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/fangs_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/explosion_2_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/water_droplet_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/purple_green_unk_palette.gbapal.lz"
    "build/graphics/battle_anims/sprites/water_column_palette.gbapal.lz"
    "build/graphics/unused/color_frames.4bpp.lz"
    "build/graphics/unused/color_frames_palette.gbapal.lz"
    "build/graphics/unused/basic_frame.4bpp.lz"
    "build/graphics/unused/basic_frame_palette.gbapal.lz"
)
set(REMAINING_A52_EXACT_SOURCES
    "${CMAKE_SOURCE_DIR}/graphics/balls/open.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/rain_drops_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/bone_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/air_wave_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/explosion_6_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/ice_cube_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/gust_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/spark_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/spikes_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/tied_bag_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/black_ball_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/blue_shards_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/music_notes_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/music_notes.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/hit_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/hit.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/hit_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/hit_duplicate.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/hit_duplicate_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/leer_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/small_ember_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/gray_smoke_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/lightning_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/spinning_ball.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/spinning_ball_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/obi1.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/old_pal4_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/obi2.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/hpbar_unused.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/ice_chunk_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/glass_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/unused_window.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/unused_window_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/battle_bar.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/unused_window2.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/unused_window2bar.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/line_sketch.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/line_sketch_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/metronome_hand_small.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/clapping_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/shock_4_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/pink_glove_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/unused/line_sketch_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/fangs_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/explosion_2_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/water_droplet_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/purple_green_unk_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/water_column_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/color_frames.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/color_frames_palette.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/basic_frame.png"
    "${CMAKE_SOURCE_DIR}/graphics/unused/basic_frame_palette.png"
)
# END REMAINING A52 EXACT OUTPUT LIST

macro(add_graphics_rule RELATIVE_OUTPUT)
    set(OUTPUT_ABS "${CMAKE_SOURCE_DIR}/${RELATIVE_OUTPUT}")
    get_filename_component(OUTPUT_DIR "${OUTPUT_ABS}" DIRECTORY)

    # BEGIN SLOT MACHINE SEMANTIC TILEMAP PIPELINE
    if("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/slot_machine/(menu|info_box|reel_time_window)[.]tilemap[.]inc$")
        set(SLOT_TILEMAP_STEM "${CMAKE_MATCH_1}")
        set(SLOT_TILEMAP_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/slot_machine/${SLOT_TILEMAP_STEM}.tilemap.csv")
        if("${SLOT_TILEMAP_STEM}" STREQUAL "reel_time_window")
            set(SLOT_TILEMAP_ENTRIES 220)
        else()
            set(SLOT_TILEMAP_ENTRIES 600)
        endif()
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/tilemap_csv_to_asm.py"
                "${SLOT_TILEMAP_INPUT}" "${OUTPUT_ABS}"
                --expected-entries "${SLOT_TILEMAP_ENTRIES}"
            DEPENDS
                "${SLOT_TILEMAP_INPUT}"
                "${CMAKE_SOURCE_DIR}/tools/tilemap_csv_to_asm.py"
            VERBATIM)
    # END SLOT MACHINE SEMANTIC TILEMAP PIPELINE

    # BEGIN BATTLE TRANSITION EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_transitions/(team_aqua|team_magma|frontier_logo|frontier_square_filled|frontier_square_empty|frontier_square_shrink_1|frontier_square_shrink_2)[.]4bpp[.]lz$")
        set(BTRANS_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG "${CMAKE_SOURCE_DIR}/graphics/battle_transitions/${BTRANS_STEM}.png")
        set(BTRANS_PLAN "${CMAKE_SOURCE_DIR}/graphics/battle_transitions/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/battle_transition_exact.py"
                gfx --manifest "${BTRANS_PLAN}" --key "${BTRANS_STEM}"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${BTRANS_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/battle_transition_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)


    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_transitions/(team_aqua|team_magma|frontier_logo)[.]bin[.]lz$")
        set(BTRANS_STEM "${CMAKE_MATCH_1}")
        set(INPUT_TILEMAP "${CMAKE_SOURCE_DIR}/graphics/battle_transitions/${BTRANS_STEM}.tilemap.u16")
        set(BTRANS_PLAN "${CMAKE_SOURCE_DIR}/graphics/battle_transitions/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/battle_transition_exact.py"
                u16 --manifest "${BTRANS_PLAN}" --key "${BTRANS_STEM}_tilemap"
                "${INPUT_TILEMAP}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_TILEMAP}" "${BTRANS_PLAN}"
                    "${CMAKE_SOURCE_DIR}/tools/battle_transition_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END BATTLE TRANSITION EXACT PIPELINE

    # BEGIN REMAINING B16 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" IN_LIST REMAINING_B16_EXACT_OUTPUTS)
        set(REMAINING_B16_MANIFEST "${CMAKE_SOURCE_DIR}/graphics/remaining_b16_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/remaining_b16_exact_assets.py"
                --manifest "${REMAINING_B16_MANIFEST}"
                --key "${RELATIVE_OUTPUT}"
                --repo-root "${CMAKE_SOURCE_DIR}"
                --output "${OUTPUT_ABS}"
            DEPENDS
                ${REMAINING_B16_EXACT_SOURCES}
                "${REMAINING_B16_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/remaining_b16_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)
    # END REMAINING B16 EXACT PIPELINE

    # BEGIN REMAINING A52 EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" IN_LIST REMAINING_A52_EXACT_OUTPUTS)
        set(REMAINING_A52_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/remaining_a52_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/remaining_a52_exact_assets.py"
                --manifest "${REMAINING_A52_MANIFEST}"
                --key "${RELATIVE_OUTPUT}"
                --repo-root "${CMAKE_SOURCE_DIR}"
                --output "${OUTPUT_ABS}"
            DEPENDS
                ${REMAINING_A52_EXACT_SOURCES}
                "${REMAINING_A52_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/remaining_a52_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
            VERBATIM)
    # END REMAINING A52 EXACT PIPELINE

    # BEGIN SEMANTIC BATTLE ANIM / MISC EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_anims/sprites/(.+)[.]4bpp[.]lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/${STEM}.png")
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
            "^build/graphics/battle_anims/sprites/(.+)[.]gbapal[.]lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/sprites/${STEM}.png")
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

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/interface/blank_compressed.4bpp.lz")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/interface/blank_compressed.png")
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

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/link/wireless_icon.4bpp.lz")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/link/wireless_icon.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                repack-png --key "link/wireless_icon.4bpp.lz"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/main_menu/birch_speech_bg.bin.lz")
        set(INPUT_INC
            "${CMAKE_SOURCE_DIR}/graphics/main_menu/birch_speech_bg.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                repack-inc --key "main_menu/birch_speech_bg.bin.lz"
                "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_INC}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/main_menu/(birch_speech_bg_gradient|main_menu_bg|main_menu_text)[.]gbapal$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/main_menu/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                encode-palette "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mystery_gift/(wireless_status_bg_tiles|wonder_card_bg_[12378]|wonder_news_[12378]|stamp_shadow)[.]4bpp[.]lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/mystery_gift/${STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                repack-png --key "mystery_gift/${STEM}.4bpp.lz"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/mystery_gift/(wireless_status_bg_tiles|wonder_card_bg_[12378]|wonder_news_[12378])[.]bin[.]lz$")
        set(STEM "${CMAKE_MATCH_1}")
        set(INPUT_INC
            "${CMAKE_SOURCE_DIR}/graphics/mystery_gift/${STEM}.tilemap.inc")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                repack-inc --key "mystery_gift/${STEM}.bin.lz"
                "${INPUT_INC}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_INC}"
                "${CMAKE_SOURCE_DIR}/tools/misc_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END SEMANTIC BATTLE ANIM / MISC EXACT ASSET PIPELINE

    # BEGIN BATTLE BG EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/battle_interface/link_vs_frame.4bpp.lz")
        set(BATTLE_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/link_vs_frame.png")
        set(BATTLE_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/battle_bg_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                gfx --manifest "${BATTLE_BG_PLAN}" --key "link_vs_frame_gfx"
                "${BATTLE_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_BG_INPUT}"
                "${BATTLE_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/battle_interface/link_vs_frame.gbapal.lz")
        set(BATTLE_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/link_vs_frame_palette.png")
        set(BATTLE_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/battle_bg_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                pal --manifest "${BATTLE_BG_PLAN}" --key "link_vs_frame_palette"
                "${BATTLE_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_BG_INPUT}"
                "${BATTLE_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_interface/(link_vs_frame|multi_battle_intro_opponent|multi_battle_intro_player)[.]bin[.]lz$")
        set(BATTLE_BG_STEM "${CMAKE_MATCH_1}")
        set(BATTLE_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/${BATTLE_BG_STEM}.tilemap.u16")
        set(BATTLE_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_interface/battle_bg_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                u16 --manifest "${BATTLE_BG_PLAN}" --key "${BATTLE_BG_STEM}_tilemap"
                "${BATTLE_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_BG_INPUT}"
                "${BATTLE_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/battle_bg_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END BATTLE BG EXACT PIPELINE

    # BEGIN EASY CHAT EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/easy_chat/(window|text_input_frame)[.]4bpp[.]lz$")
        set(EASY_CHAT_STEM "${CMAKE_MATCH_1}")
        set(EASY_CHAT_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/easy_chat/${EASY_CHAT_STEM}.png")
        set(EASY_CHAT_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/easy_chat/lz77_exact_plans.json")
        if("${EASY_CHAT_STEM}" STREQUAL "window")
            set(EASY_CHAT_KEY "window_gfx")
        else()
            set(EASY_CHAT_KEY "text_input_frame_gfx")
        endif()
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/easy_chat_exact.py"
                gfx --manifest "${EASY_CHAT_PLAN}" --key "${EASY_CHAT_KEY}"
                "${EASY_CHAT_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${EASY_CHAT_INPUT}"
                "${EASY_CHAT_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/easy_chat_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/easy_chat/window.bin.lz")
        set(EASY_CHAT_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/easy_chat/window.tilemap.u16")
        set(EASY_CHAT_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/easy_chat/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/easy_chat_exact.py"
                u16 --manifest "${EASY_CHAT_PLAN}" --key "window_tilemap"
                "${EASY_CHAT_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${EASY_CHAT_INPUT}"
                "${EASY_CHAT_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/easy_chat_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END EASY CHAT EXACT PIPELINE

    # BEGIN BERRY TAG EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/bag/check_berry.4bpp.lz")
        set(BERRY_TAG_INPUT "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry.png")
        set(BERRY_TAG_PLAN "${CMAKE_SOURCE_DIR}/graphics/bag/berry_tag_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                gfx --manifest "${BERRY_TAG_PLAN}" --key "check_berry_gfx"
                "${BERRY_TAG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_TAG_INPUT}"
                "${BERRY_TAG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/bag/check_berry.gbapal.lz")
        set(BERRY_TAG_PAL_PREFIX
            "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette")
        set(BERRY_TAG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/bag/berry_tag_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                pal6 --manifest "${BERRY_TAG_PLAN}" --key "check_berry_pal"
                "${BERRY_TAG_PAL_PREFIX}" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_0.png"
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_1.png"
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_2.png"
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_3.png"
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_4.png"
                "${CMAKE_SOURCE_DIR}/graphics/bag/check_berry_palette_5.png"
                "${BERRY_TAG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/bag/berry_tag.bin.lz")
        set(BERRY_TAG_INPUT "${CMAKE_SOURCE_DIR}/graphics/bag/berry_tag.tilemap.u16")
        set(BERRY_TAG_PLAN "${CMAKE_SOURCE_DIR}/graphics/bag/berry_tag_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                u16 --manifest "${BERRY_TAG_PLAN}" --key "berry_tag_gfx"
                "${BERRY_TAG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BERRY_TAG_INPUT}"
                "${BERRY_TAG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/berry_tag_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END BERRY TAG EXACT PIPELINE

    # BEGIN CAVE TRANSITION EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/cave_transition/tiles.4bpp.lz")
        set(CAVE_TRANSITION_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/cave_transition/tiles.png")
        set(CAVE_TRANSITION_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/cave_transition/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/cave_transition_exact.py"
                gfx --manifest "${CAVE_TRANSITION_PLAN}" --key "tiles"
                "${CAVE_TRANSITION_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${CAVE_TRANSITION_INPUT}"
                "${CAVE_TRANSITION_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/cave_transition_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/cave_transition/tilemap.bin.lz")
        set(CAVE_TRANSITION_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/cave_transition/tilemap.tilemap.u16")
        set(CAVE_TRANSITION_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/cave_transition/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/cave_transition_exact.py"
                u16 --manifest "${CAVE_TRANSITION_PLAN}" --key "tilemap"
                "${CAVE_TRANSITION_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${CAVE_TRANSITION_INPUT}"
                "${CAVE_TRANSITION_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/cave_transition_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END CAVE TRANSITION EXACT PIPELINE

    # BEGIN ROULETTE JP REMAINING EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/roulette_jp_remaining/window.4bpp.lz")
        set(ROULETTE_JP_INPUT "${CMAKE_SOURCE_DIR}/graphics/roulette/window.png")
        set(ROULETTE_JP_PLAN "${CMAKE_SOURCE_DIR}/graphics/roulette/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                gfx --manifest "${ROULETTE_JP_PLAN}" --key "menu_gfx"
                "${ROULETTE_JP_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${ROULETTE_JP_INPUT}" "${ROULETTE_JP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/roulette_jp_remaining/grid.bin.lz")
        set(ROULETTE_JP_INPUT "${CMAKE_SOURCE_DIR}/graphics/roulette/grid.tilemap.u16")
        set(ROULETTE_JP_PLAN "${CMAKE_SOURCE_DIR}/graphics/roulette/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                u16 --manifest "${ROULETTE_JP_PLAN}" --key "grid_tilemap"
                "${ROULETTE_JP_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${ROULETTE_JP_INPUT}" "${ROULETTE_JP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/roulette_jp_remaining/wheel.bin.lz")
        set(ROULETTE_JP_INPUT "${CMAKE_SOURCE_DIR}/graphics/roulette/wheel.tilemap.u16")
        set(ROULETTE_JP_PLAN "${CMAKE_SOURCE_DIR}/graphics/roulette/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                u16 --manifest "${ROULETTE_JP_PLAN}" --key "wheel_tilemap"
                "${ROULETTE_JP_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${ROULETTE_JP_INPUT}" "${ROULETTE_JP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/roulette_jp_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END ROULETTE JP REMAINING EXACT PIPELINE

    # BEGIN TRADE WIRELESS EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/trade_jp_wireless/crossing_highlight_wireless.bin.lz")
        set(TRADE_WIRELESS_INPUT "${CMAKE_SOURCE_DIR}/graphics/trade/crossing_highlight_wireless.tilemap.u16")
        set(TRADE_WIRELESS_PLAN "${CMAKE_SOURCE_DIR}/graphics/trade/jp_wireless_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/trade_wireless_exact.py"
                u16 --manifest "${TRADE_WIRELESS_PLAN}" --key "wireless_closeup_map"
                "${TRADE_WIRELESS_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${TRADE_WIRELESS_INPUT}" "${TRADE_WIRELESS_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/trade_wireless_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/trade_jp_wireless/wireless_signal.4bpp.lz")
        set(TRADE_WIRELESS_INPUT "${CMAKE_SOURCE_DIR}/graphics/trade/wireless_signal.png")
        set(TRADE_WIRELESS_PLAN "${CMAKE_SOURCE_DIR}/graphics/trade/jp_wireless_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/trade_wireless_exact.py"
                gfx --manifest "${TRADE_WIRELESS_PLAN}" --key "wireless_signal_gfx"
                "${TRADE_WIRELESS_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${TRADE_WIRELESS_INPUT}" "${TRADE_WIRELESS_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/trade_wireless_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END TRADE WIRELESS EXACT PIPELINE

    # BEGIN POKEBLOCK REMAINING EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock_jp_remaining/menu.4bpp.lz")
        set(POKEBLOCK_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokeblock/menu.png")
        set(POKEBLOCK_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/pokeblock/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                gfx --manifest "${POKEBLOCK_REMAINING_PLAN}" --key "menu_gfx"
                "${POKEBLOCK_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${POKEBLOCK_REMAINING_INPUT}" "${POKEBLOCK_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock_jp_remaining/menu.bin.lz")
        set(POKEBLOCK_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokeblock/menu.tilemap.u16")
        set(POKEBLOCK_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/pokeblock/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                u16 --manifest "${POKEBLOCK_REMAINING_PLAN}" --key "menu_tilemap"
                "${POKEBLOCK_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${POKEBLOCK_REMAINING_INPUT}" "${POKEBLOCK_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/pokeblock_jp_remaining/feeding_bg.bin.lz")
        set(POKEBLOCK_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokeblock/feeding_bg.tilemap.u16")
        set(POKEBLOCK_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/pokeblock/jp_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                u16 --manifest "${POKEBLOCK_REMAINING_PLAN}" --key "feeding_bg_tilemap"
                "${POKEBLOCK_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${POKEBLOCK_REMAINING_INPUT}" "${POKEBLOCK_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/pokeblock_remaining_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END POKEBLOCK REMAINING EXACT PIPELINE

    # BEGIN SHOP MENU PALETTE EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/shop_jp/menu.gbapal.lz")
        set(SHOP_MENU_PAL_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/shop/menu_palette.png")
        set(SHOP_MENU_PAL_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/shop/jp_menu_palette_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/shop_menu_palette_exact.py"
                --manifest "${SHOP_MENU_PAL_PLAN}"
                --key "menu_palette"
                "${SHOP_MENU_PAL_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${SHOP_MENU_PAL_INPUT}"
                "${SHOP_MENU_PAL_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/shop_menu_palette_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END SHOP MENU PALETTE EXACT PIPELINE

    # BEGIN FINAL REMAINING GRAPHICS EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/birch_speech_shadow.4bpp.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/birch_speech/shadow.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx4 --manifest "${FINAL_REMAINING_PLAN}"
                --key "birch_speech_shadow"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/pokedex_cry_meter.4bpp.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokedex/cry_meter.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx4 --manifest "${FINAL_REMAINING_PLAN}"
                --key "cry_meter"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/cable_car_trees.bin.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/cable_car/trees.tilemap.u16")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                u16 --manifest "${FINAL_REMAINING_PLAN}"
                --key "cable_car_trees"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/hall_of_fame.4bpp.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/misc/japanese_hof.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx4 --manifest "${FINAL_REMAINING_PLAN}"
                --key "hall_of_fame"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/credits_end.4bpp.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/credits/the_end_copyright.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx4 --manifest "${FINAL_REMAINING_PLAN}"
                --key "credits_end"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/pokenav_icon.4bpp.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokenav/match_call/nav_icon.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx4 --manifest "${FINAL_REMAINING_PLAN}"
                --key "pokenav_icon"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/final_remaining/berry_blender_center.bin.lz")
        set(FINAL_REMAINING_INPUT "${CMAKE_SOURCE_DIR}/graphics/berry_blender/center.png")
        set(FINAL_REMAINING_PLAN "${CMAKE_SOURCE_DIR}/graphics/final_remaining_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                gfx8 --manifest "${FINAL_REMAINING_PLAN}"
                --key "berry_blender_center"
                "${FINAL_REMAINING_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${FINAL_REMAINING_INPUT}"
                "${FINAL_REMAINING_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/final_remaining_graphics_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END FINAL REMAINING GRAPHICS EXACT PIPELINE

    # BEGIN MAP TILESET PNG PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
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

    # BEGIN BATTLE ENVIRONMENT EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentTiles_Building"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/battle_frontier.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_Frontier" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/battle_frontier_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/battle_frontier_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/battle_frontier_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/battle_frontier_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentTilemap_Building"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentTiles_Stadium"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentTilemap_Stadium"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/sky/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentTiles_Rayquaza"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/water/kyogre.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_Kyogre" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/water/kyogre_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/water/kyogre_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/water/kyogre_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/water/kyogre_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/cave/groudon.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_Groudon" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/groudon_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/groudon_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/groudon_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/groudon_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/gym.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_BuildingGym" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/gym_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/gym_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/gym_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/gym_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/leader.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_BuildingLeader" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/leader_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/leader_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/leader_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/leader_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/aqua.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumAqua" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/aqua_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/aqua_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/aqua_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/aqua_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/magma.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumMagma" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/magma_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/magma_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/magma_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/magma_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/sidney.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumSidney" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/sidney_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/sidney_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/sidney_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/sidney_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/phoebe.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumPhoebe" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/phoebe_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/phoebe_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/phoebe_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/phoebe_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/glacia.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumGlacia" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/glacia_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/glacia_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/glacia_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/glacia_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/drake.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumDrake" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/drake_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/drake_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/drake_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/drake_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/stadium/wallace.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentPalette_StadiumWallace" --banks 3
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/wallace_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/wallace_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/wallace_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_environment/stadium/wallace_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/underwater/anim_tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTiles_Underwater"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/underwater/anim_tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/underwater/anim_tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/cave/anim_tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTiles_Cave"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/anim_tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/anim_tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/cave/anim_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTilemap_Cave"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/anim_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/cave/anim_map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/anim_tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTiles_Building"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/anim_tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/anim_tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/building/anim_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTilemap_Building"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/anim_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/building/anim_map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/sky/anim_tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTiles_Rayquaza"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/anim_tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/anim_tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_environment/sky/anim_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                --stem "gBattleEnvironmentAnimTilemap_Rayquaza"
                "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/anim_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_environment/sky/anim_map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_environment/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # BEGIN POKEDEX SEARCH MENU EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/search_menu.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --key "gPokedexSearchMenu_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/search_menu_national.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --key "gPokedexSearchMenuNational_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu_national.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu_national.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END POKEDEX SEARCH MENU EXACT ASSET PIPELINE

    # BEGIN POKEDEX AREA / POKENAV EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/region_map.8bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                8bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                --key "sPokedexAreaMap_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/region_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                --key "sPokedexAreaMap_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/region_map_affine.8bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                8bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                --key "sPokedexAreaMapAffine_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_affine.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_affine.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/region_map_affine.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u8 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                --key "sPokedexAreaMapAffine_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_affine.tilemap.u8" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_affine.tilemap.u8"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/region_map_lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/header.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavHeader_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/header.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/header.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/bg_dots.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sPokenavBgDotsTiles"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/bg_dots.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/bg_dots.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/bg_dots.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sPokenavBgDotsTilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/bg_dots.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/bg_dots.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/message.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavMessageBox_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/message.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/message.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/message.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavMessageBox_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/message.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/message.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/device_outline.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sPokenavDeviceBgTiles"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/device_outline.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/device_outline.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # BEGIN REMAINING POKENAV EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/match_call/ui.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sMatchCallUI_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/match_call/ui.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/match_call/ui.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/match_call/options_cursor.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sOptionsCursor_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/match_call/options_cursor.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/match_call/options_cursor.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/graph.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavCondition_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/graph.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavCondition_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/graph_data.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sConditionGraphData_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph_data.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph_data.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/graph_data.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sConditionGraphData_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph_data.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/graph_data.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/search_results.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sConditionSearchResultTiles"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/search_results.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/search_results.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/condition/search_results.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sConditionSearchResultTilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/search_results.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/condition/search_results.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/ribbons/list_bg.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sMonRibbonListFrameTiles"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/list_bg.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/list_bg.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/ribbons/list_bg.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "sMonRibbonListFrameTilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/list_bg.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/list_bg.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/ribbons/summary_bg.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavRibbonsSummaryBg_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/summary_bg.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/summary_bg.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/ribbons/summary_bg.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                --key "gPokenavRibbonsSummaryBg_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/summary_bg.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/ribbons/summary_bg.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END REMAINING POKENAV EXACT ASSET PIPELINE
    # BEGIN POKEDEX SEARCH / TRAINER CARD / STORAGE EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/search_menu_hoenn.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --key "gPokedexSearchMenuHoenn_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu_hoenn.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/search_menu_hoenn.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/trainer_card/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                --key "gHoennTrainerCard_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/tiles.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/tiles.png"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/trainer_card/frlg/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                --key "gKantoTrainerCard_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/tiles.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/tiles.png"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/trainer_card/frlg/stickers.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                --key "sTrainerCardStickers_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/stickers.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/stickers.png"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/trainer_card/badges.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                --key "sHoennTrainerCardBadges_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/badges.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/badges.png"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/trainer_card/frlg/badges.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                --key "sKantoTrainerCardBadges_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/badges.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/frlg/badges.png"
                "${CMAKE_SOURCE_DIR}/graphics/trainer_card/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokemon_storage/scrolling_bg.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                --key "sScrollingBg_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/scrolling_bg.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/scrolling_bg.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokemon_storage/display_menu.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                --key "sDisplayMenu_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/display_menu.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/display_menu.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokemon_storage/menu.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                --key "gStorageSystemMenu_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/menu.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/menu.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokemon_storage/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END POKEDEX SEARCH / TRAINER CARD / STORAGE EXACT ASSET PIPELINE
    # BEGIN REGION MAP EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/cursor_small.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sRegionMapCursorSmallGfxLZ"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/cursor_small.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/cursor_small.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/cursor_large.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sRegionMapCursorLargeGfxLZ"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/cursor_large.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/cursor_large.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/map.8bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                8bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sRegionMapBg_GfxLZ" --raw-size 0x3A40
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/map.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/map.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                u8 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sRegionMapBg_TilemapLZ"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/map.tilemap.u8" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/map.tilemap.u8"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/frame.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sRegionMapFrameGfxLZ"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/frame.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/frame.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokenav/region_map/fly_target_icons.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                --key "sFlyTargetIcons_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/fly_target_icons.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/fly_target_icons.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokenav/region_map/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/region_map_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END REGION MAP EXACT ASSET PIPELINE
    # BEGIN POKEDEX AREA GLOW / EVOLUTION SCENE EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/area_glow.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --key "sAreaGlow_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/area_glow.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/area_glow.png"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/evolution_scene/bg.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                --key "sBgAnim_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg.png"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/evolution_scene/bg_inner.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                --key "sBgAnim_Inner_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg_inner.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg_inner.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/evolution_scene/bg_outer.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                --key "sBgAnim_Outer_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg_outer.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/bg_outer.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/evolution_scene/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END POKEDEX AREA GLOW / EVOLUTION SCENE EXACT ASSET PIPELINE
    # BEGIN UNION ROOM CHAT EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/union_room_chat/keyboard.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                --key "gUnionRoomChat_Keyboard_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/keyboard.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/keyboard.png"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/union_room_chat/keyboard.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                --key "gUnionRoomChat_Keyboard_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/keyboard.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/keyboard.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/union_room_chat/background.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                4bpp --manifest "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                --key "gUnionRoomChat_Background_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/background.png" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/background.png"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/union_room_chat/background.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                --key "gUnionRoomChat_Background_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/background.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/background.tilemap.u16"
                "${CMAKE_SOURCE_DIR}/graphics/union_room_chat/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END UNION ROOM CHAT EXACT ASSET PIPELINE
    # BEGIN BERRY CRUSH EXACT TILEMAP PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/berry_crush/crusher_top.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u8 --manifest "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                --key "sCrusherTop_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/crusher_top.tilemap.u8" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/crusher_top.tilemap.u8"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/berry_crush/container_cap.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u8 --manifest "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                --key "sContainerCap_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/container_cap.tilemap.u8" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/container_cap.tilemap.u8"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/berry_crush/bg.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                u8 --manifest "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                --key "sBg_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/bg.tilemap.u8" "${OUTPUT_ABS}"
            DEPENDS
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/bg.tilemap.u8"
                "${CMAKE_SOURCE_DIR}/graphics/berry_crush/lz77_exact_plans.json"
                "${CMAKE_SOURCE_DIR}/tools/pokedex_pokenav_exact_assets.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END BERRY CRUSH EXACT TILEMAP PIPELINE
    # END POKEDEX AREA / POKENAV EXACT ASSET PIPELINE

    # BEGIN POKEDEX EXACT ASSET PIPELINE

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/start_menu_main.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexStartMenuMain_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/start_menu_main.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/start_menu_main.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/start_menu_search_results.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexStartMenuSearchResults_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/start_menu_search_results.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/start_menu_search_results.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/list.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexList_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/list.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/list.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/list_underlay.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexListUnderlay_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/list_underlay.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/list_underlay.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/info_screen.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexInfoScreen_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/info_screen.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/info_screen.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/cry_screen.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexCryScreen_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/cry_screen.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/cry_screen.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/size_screen.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexSizeScreen_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/size_screen.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/size_screen.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/screen_select_bar_main.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexScreenSelectBarMain_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/screen_select_bar_main.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/screen_select_bar_main.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/screen_select_bar_submenu.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexScreenSelectBarSubmenu_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/screen_select_bar_submenu.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/screen_select_bar_submenu.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/noball_unused.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gUnused_PokedexNoBall"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/noball_unused.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/noball_unused.png"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/menu.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexMenu_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/menu.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/menu.png"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/pokedex/interface.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                --stem "gPokedexInterface_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/pokedex/interface.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/pokedex/interface.png"
                    "${CMAKE_SOURCE_DIR}/graphics/pokedex/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END POKEDEX EXACT ASSET PIPELINE

    # BEGIN BATTLE FRONTIER DOME BLOCK EXACT PIPELINE

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_line.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyLine_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_tree.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyTree_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_line_down_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyLineDown_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line_down_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line_down_map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_line_up_map.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyLineUp_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line_up_map.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_line_up_map.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_info_card.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyInfoCard_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_info_card_tilemap.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyInfoCard_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card_tilemap.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card_tilemap.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_info_card_bg.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyInfoCardBg_Tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card_bg.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_info_card_bg.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_buttons.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyTreeButtons_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_tree.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyTree_Pal" --banks 16
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_02.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_03.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_04.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_05.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_06.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_07.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_08.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_09.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_10.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_11.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_12.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_13.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_14.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree_palette_banks/palette_15.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_buttons.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyTreeButtons_Pal" --banks 16
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_00.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_01.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_02.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_03.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_04.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_05.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_06.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_07.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_08.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_09.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_10.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_11.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_12.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_13.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_14.png" "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_buttons_palette_banks/palette_15.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_match_card_bg.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyMatchCardBg_Pal" --banks 1
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_match_card_bg_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_match_card_bg_palette_banks/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/arena_judgment_symbols.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gBattleArenaJudgmentSymbolsGfx"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/arena_judgment_symbols.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/arena_judgment_symbols.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/arena_judgment_symbols.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gBattleArenaJudgmentSymbolsPalette" --banks 1
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/arena_judgment_symbols_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/arena_judgment_symbols_palette_banks/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_interface/text.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_interface/lz77_exact_plans.json"
                --stem "gBattleWindowTextPalette" --banks 1
                "${CMAKE_SOURCE_DIR}/graphics/battle_interface/text_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_interface/text_palette_banks/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_interface/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END BATTLE FRONTIER DOME BLOCK EXACT PIPELINE

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/battle_frontier/tourney_tree.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                --stem "gDomeTourneyTree_Gfx"
                "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/tourney_tree.png"
                    "${CMAKE_SOURCE_DIR}/graphics/battle_frontier/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    # END BATTLE ENVIRONMENT EXACT ASSET PIPELINE

    # BEGIN SEMANTIC JP UI EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/berry_blender/outer.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/berry_blender/lz77_exact_plans.json"
                --stem "berry_blender_outer_gfx"
                "${CMAKE_SOURCE_DIR}/graphics/berry_blender/outer.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/berry_blender/outer.png"
                    "${CMAKE_SOURCE_DIR}/graphics/berry_blender/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/party_menu/bg.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/party_menu/lz77_exact_plans.json"
                --stem "party_menu_bg_gfx"
                "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/party_menu/bg.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/party_menu/lz77_exact_plans.json"
                --stem "party_menu_bg_pal" --banks 11
                "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_01.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_03.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_04.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_05.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_06.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_07.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_08.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_09.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/bg_palette_banks/palette_10.png"
                    "${CMAKE_SOURCE_DIR}/graphics/party_menu/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/summary_screen/tiles.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                --stem "summary_screen_gfx"
                "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/summary_screen/tiles.gbapal.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                --stem "summary_screen_pal" --banks 8
                "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_01.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_02.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_03.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_04.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_05.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_06.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/tiles_palette_banks/palette_07.png"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES "^build/graphics/summary_screen/(page_info|page_skills|page_battle_moves|page_contest_moves)[.]bin[.]lz$")
        set(SUMMARY_PAGE "${CMAKE_MATCH_1}")
        if(SUMMARY_PAGE STREQUAL "page_info")
            set(SUMMARY_PLAN_KEY "summary_page_info_tilemap")
        elseif(SUMMARY_PAGE STREQUAL "page_skills")
            set(SUMMARY_PLAN_KEY "summary_page_skills_tilemap")
        elseif(SUMMARY_PAGE STREQUAL "page_battle_moves")
            set(SUMMARY_PLAN_KEY "summary_page_battle_moves_tilemap")
        else()
            set(SUMMARY_PLAN_KEY "summary_page_contest_moves_tilemap")
        endif()
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                --stem "${SUMMARY_PLAN_KEY}"
                "${CMAKE_SOURCE_DIR}/graphics/summary_screen/${SUMMARY_PAGE}.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/summary_screen/${SUMMARY_PAGE}.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/summary_screen/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/bag/menu.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                --stem "bag_screen_gfx"
                "${CMAKE_SOURCE_DIR}/graphics/bag/menu.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/bag/menu.png"
                    "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES "^build/graphics/bag/(menu_male|menu_female|bag_pyramid)[.]gbapal[.]lz$")
        set(BAG_PAL_NAME "${CMAKE_MATCH_1}")
        if(BAG_PAL_NAME STREQUAL "menu_male")
            set(BAG_PAL_SOURCE "menu_male_palette_banks")
            set(BAG_PAL_KEY "bag_screen_male_pal")
        elseif(BAG_PAL_NAME STREQUAL "menu_female")
            set(BAG_PAL_SOURCE "menu_female_palette_banks")
            set(BAG_PAL_KEY "bag_screen_female_pal")
        else()
            set(BAG_PAL_SOURCE "bag_pyramid_palette_banks")
            set(BAG_PAL_KEY "battle_pyramid_bag_pal")
        endif()
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                repack-pal-banks --manifest "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                --stem "${BAG_PAL_KEY}" --banks 2
                "${CMAKE_SOURCE_DIR}/graphics/bag/${BAG_PAL_SOURCE}" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/bag/${BAG_PAL_SOURCE}/palette_00.png"
                    "${CMAKE_SOURCE_DIR}/graphics/bag/${BAG_PAL_SOURCE}/palette_01.png"
                    "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_palette_exact.py"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/bag/menu_pyramid.bin.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16 --manifest "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                --stem "battle_pyramid_bag_tilemap"
                "${CMAKE_SOURCE_DIR}/graphics/bag/menu_pyramid.tilemap.u16" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/bag/menu_pyramid.tilemap.u16"
                    "${CMAKE_SOURCE_DIR}/graphics/bag/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL "build/graphics/shop/menu.4bpp.lz")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png --manifest "${CMAKE_SOURCE_DIR}/graphics/shop/lz77_exact_plans.json"
                --stem "shop_menu_gfx"
                "${CMAKE_SOURCE_DIR}/graphics/shop/menu.png" "${OUTPUT_ABS}"
            DEPENDS "${CMAKE_SOURCE_DIR}/graphics/shop/menu.png"
                    "${CMAKE_SOURCE_DIR}/graphics/shop/lz77_exact_plans.json"
                    "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END SEMANTIC JP UI EXACT ASSET PIPELINE

    # BEGIN BATTLE ANIM BACKGROUND EXACT ASSET PIPELINE
    # Sandstorm background
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/battle_anims/backgrounds/sandstorm_brew.4bpp.lz")
        set(BATTLE_ANIM_SANDSTORM_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/sandstorm_brew.png")
        set(BATTLE_ANIM_SANDSTORM_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${BATTLE_ANIM_SANDSTORM_PLAN}"
                --stem "sandstorm_gfx"
                "${BATTLE_ANIM_SANDSTORM_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_ANIM_SANDSTORM_INPUT}"
                "${BATTLE_ANIM_SANDSTORM_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/battle_anims/backgrounds/sandstorm_brew.bin.lz")
        set(BATTLE_ANIM_SANDSTORM_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/sandstorm_brew.tilemap.u16")
        set(BATTLE_ANIM_SANDSTORM_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${BATTLE_ANIM_SANDSTORM_PLAN}"
                --stem "sandstorm_tilemap"
                "${BATTLE_ANIM_SANDSTORM_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_ANIM_SANDSTORM_INPUT}"
                "${BATTLE_ANIM_SANDSTORM_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_anims/backgrounds/(water)[.]4bpp[.]lz$")
        set(BATTLE_ANIM_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/water.png")
        set(BATTLE_ANIM_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${BATTLE_ANIM_BG_PLAN}"
                --stem "surf_gfx"
                "${BATTLE_ANIM_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_ANIM_BG_INPUT}"
                "${BATTLE_ANIM_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_anims/backgrounds/(water)[.]gbapal[.]lz$")
        set(BATTLE_ANIM_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/water.png")
        set(BATTLE_ANIM_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/battle_anim_background_exact.py"
                repack-pal
                --manifest "${BATTLE_ANIM_BG_PLAN}"
                --stem "surf_pal"
                "${BATTLE_ANIM_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_ANIM_BG_INPUT}"
                "${BATTLE_ANIM_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/battle_anim_background_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/battle_anims/backgrounds/(scary_face_player|scary_face_opponent|water_opponent|water_player)[.]bin[.]lz$")
        set(BATTLE_ANIM_BG_TILEMAP "${CMAKE_MATCH_1}")
        set(BATTLE_ANIM_BG_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/${BATTLE_ANIM_BG_TILEMAP}.tilemap.u16")
        set(BATTLE_ANIM_BG_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/battle_anims/backgrounds/lz77_exact_plans.json")

        if(BATTLE_ANIM_BG_TILEMAP STREQUAL "scary_face_player")
            set(BATTLE_ANIM_BG_KEY "scary_face_player_tilemap")
        elseif(BATTLE_ANIM_BG_TILEMAP STREQUAL "scary_face_opponent")
            set(BATTLE_ANIM_BG_KEY "scary_face_opponent_tilemap")
        elseif(BATTLE_ANIM_BG_TILEMAP STREQUAL "water_opponent")
            set(BATTLE_ANIM_BG_KEY "water_opponent_tilemap")
        else()
            set(BATTLE_ANIM_BG_KEY "water_player_tilemap")
        endif()

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${BATTLE_ANIM_BG_PLAN}"
                --stem "${BATTLE_ANIM_BG_KEY}"
                "${BATTLE_ANIM_BG_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${BATTLE_ANIM_BG_INPUT}"
                "${BATTLE_ANIM_BG_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END BATTLE ANIM BACKGROUND EXACT ASSET PIPELINE

    # BEGIN DODRIO BERRY PICKING EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/dodrio_berry_picking/(bg|tree_border|status|cloud|dodrio)[.]4bpp[.]lz$")
        set(DODRIO_BERRY_ASSET "${CMAKE_MATCH_1}")
        set(DODRIO_BERRY_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/dodrio_berry_picking/${DODRIO_BERRY_ASSET}.png")
        set(DODRIO_BERRY_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/dodrio_berry_picking/lz77_exact_plans.json")

        if(DODRIO_BERRY_ASSET STREQUAL "tree_border")
            set(DODRIO_BERRY_KEY "tree_border_gfx")
        else()
            set(DODRIO_BERRY_KEY "${DODRIO_BERRY_ASSET}_gfx")
        endif()

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${DODRIO_BERRY_PLAN}"
                --stem "${DODRIO_BERRY_KEY}"
                "${DODRIO_BERRY_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${DODRIO_BERRY_INPUT}"
                "${DODRIO_BERRY_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/dodrio_berry_picking/(bg|tree_border_right|tree_border_left)[.]bin[.]lz$")
        set(DODRIO_BERRY_TILEMAP "${CMAKE_MATCH_1}")
        set(DODRIO_BERRY_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/dodrio_berry_picking/${DODRIO_BERRY_TILEMAP}.tilemap.u16")
        set(DODRIO_BERRY_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/dodrio_berry_picking/lz77_exact_plans.json")
        set(DODRIO_BERRY_KEY "${DODRIO_BERRY_TILEMAP}_tilemap")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${DODRIO_BERRY_PLAN}"
                --stem "${DODRIO_BERRY_KEY}"
                "${DODRIO_BERRY_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${DODRIO_BERRY_INPUT}"
                "${DODRIO_BERRY_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END DODRIO BERRY PICKING EXACT ASSET PIPELINE

    # BEGIN POKEMON JUMP EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon_jump/(bg|venusaur|bonuses)[.]4bpp[.]lz$")
        set(POKEJUMP_ASSET "${CMAKE_MATCH_1}")
        set(POKEJUMP_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokemon_jump/${POKEJUMP_ASSET}.png")
        set(POKEJUMP_PLAN "${CMAKE_SOURCE_DIR}/graphics/pokemon_jump/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokemon_jump_exact.py"
                repack-png --manifest "${POKEJUMP_PLAN}" --stem "${POKEJUMP_ASSET}_gfx"
                --gbagfx "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
                "${POKEJUMP_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${POKEJUMP_INPUT}" "${POKEJUMP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/pokemon_jump_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
            VERBATIM)
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/pokemon_jump/(bg|venusaur|bonuses)[.]bin[.]lz$")
        set(POKEJUMP_TILEMAP "${CMAKE_MATCH_1}")
        set(POKEJUMP_INPUT "${CMAKE_SOURCE_DIR}/graphics/pokemon_jump/${POKEJUMP_TILEMAP}.tilemap.u16")
        set(POKEJUMP_PLAN "${CMAKE_SOURCE_DIR}/graphics/pokemon_jump/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/pokemon_jump_exact.py"
                repack-u16 --manifest "${POKEJUMP_PLAN}" --stem "${POKEJUMP_TILEMAP}_tilemap"
                "${POKEJUMP_INPUT}" "${OUTPUT_ABS}"
            DEPENDS "${POKEJUMP_INPUT}" "${POKEJUMP_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/pokemon_jump_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END POKEMON JUMP EXACT ASSET PIPELINE

    # BEGIN INTRO SCENE 3 EXACT ASSET PIPELINE
    # late-ROM semantic additions: clouds / Rayquaza
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/scene_3/(clouds|rayquaza|rayquaza_clouds)[.]4bpp[.]lz$")
        set(INTRO3_LATE_ASSET "${CMAKE_MATCH_1}")
        set(INTRO3_LATE_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/${INTRO3_LATE_ASSET}.png")
        set(INTRO3_LATE_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                repack-png
                --manifest "${INTRO3_LATE_PLAN}"
                --stem "${INTRO3_LATE_ASSET}_gfx"
                --gbagfx "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
                "${INTRO3_LATE_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO3_LATE_INPUT}"
                "${INTRO3_LATE_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/scene_3/(kyogre_bg|clouds_left|clouds_right)[.]bin[.]lz$")
        set(INTRO3_LATE_TILEMAP "${CMAKE_MATCH_1}")
        set(INTRO3_LATE_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/${INTRO3_LATE_TILEMAP}.tilemap.u16")
        set(INTRO3_LATE_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                repack-u16
                --manifest "${INTRO3_LATE_PLAN}"
                --stem "${INTRO3_LATE_TILEMAP}_tilemap"
                "${INTRO3_LATE_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO3_LATE_INPUT}"
                "${INTRO3_LATE_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/scene_3/(groudon|kyogre)[.]8bpp[.]lz$")
        set(INTRO3_ASSET "${CMAKE_MATCH_1}")
        set(INTRO3_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/${INTRO3_ASSET}.png")
        set(INTRO3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/lz77_exact_plans.json")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                repack-png
                --manifest "${INTRO3_PLAN}"
                --stem "${INTRO3_ASSET}_gfx"
                --gbagfx "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
                "${INTRO3_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO3_INPUT}"
                "${INTRO3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/scene_3/legend_bg[.]4bpp[.]lz$")
        set(INTRO3_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/legend_bg.png")
        set(INTRO3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/lz77_exact_plans.json")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                repack-png
                --manifest "${INTRO3_PLAN}"
                --stem "legend_bg_gfx"
                --gbagfx "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
                "${INTRO3_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO3_INPUT}"
                "${INTRO3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/gbagfx/gbagfx"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/intro/scene_3/(groudon|kyogre|groudon_bg)[.]bin[.]lz$")
        set(INTRO3_TILEMAP "${CMAKE_MATCH_1}")
        set(INTRO3_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/${INTRO3_TILEMAP}.tilemap.u16")
        set(INTRO3_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/intro/scene_3/lz77_exact_plans.json")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                repack-u16
                --manifest "${INTRO3_PLAN}"
                --stem "${INTRO3_TILEMAP}_tilemap"
                "${INTRO3_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${INTRO3_INPUT}"
                "${INTRO3_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/intro_scene3_exact.py"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END INTRO SCENE 3 EXACT ASSET PIPELINE

    # BEGIN DIPLOMA EXACT ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/diploma/tiles[.]4bpp[.]lz$")
        set(DIPLOMA_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/diploma/lz77_exact_plans.json")
        set(DIPLOMA_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/diploma/tiles.png")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${DIPLOMA_PLAN}"
                --stem "tiles"
                "${DIPLOMA_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${DIPLOMA_INPUT}"
                "${DIPLOMA_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/diploma/tilemap[.]bin[.]lz$")
        set(DIPLOMA_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/diploma/lz77_exact_plans.json")
        set(DIPLOMA_INPUT
            "${CMAKE_SOURCE_DIR}/graphics/diploma/tilemap.tilemap.u16")

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${DIPLOMA_PLAN}"
                --stem "tilemap"
                "${DIPLOMA_INPUT}" "${OUTPUT_ABS}"
            DEPENDS
                "${DIPLOMA_INPUT}"
                "${DIPLOMA_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END DIPLOMA EXACT ASSET PIPELINE

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

    # BEGIN NAMING SCREEN TILEMAP EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/naming_screen/(background|keyboard_upper|keyboard_lower|keyboard_symbols)[.]bin[.]lz$")
        set(NAMING_SCREEN_TILEMAP_STEM "${CMAKE_MATCH_1}")
        set(NAMING_SCREEN_TILEMAP_SOURCE
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/${NAMING_SCREEN_TILEMAP_STEM}.tilemap.u16")
        set(NAMING_SCREEN_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-u16
                --manifest "${NAMING_SCREEN_LZ77_PLAN}"
                --stem "${NAMING_SCREEN_TILEMAP_STEM}_tilemap"
                "${NAMING_SCREEN_TILEMAP_SOURCE}" "${OUTPUT_ABS}"
            DEPENDS
                "${NAMING_SCREEN_TILEMAP_SOURCE}"
                "${NAMING_SCREEN_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)
    # END NAMING SCREEN TILEMAP EXACT PIPELINE

    # BEGIN NAMING SCREEN PALETTE AND MENU GFX EXACT PIPELINE
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/naming_screen/menu.4bpp.lz")
        set(NAMING_SCREEN_MENU_PNG
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/menu.png")
        set(NAMING_SCREEN_LZ77_PLAN
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/lz77_exact_plans.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
                repack-png
                --manifest "${NAMING_SCREEN_LZ77_PLAN}"
                --stem menu_gfx
                "${NAMING_SCREEN_MENU_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${NAMING_SCREEN_MENU_PNG}"
                "${NAMING_SCREEN_LZ77_PLAN}"
                "${CMAKE_SOURCE_DIR}/tools/lz77_exact.py"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/naming_screen/(keyboard_palette|rival_palette|menu_palettes)[.]gbapal$")
        set(NAMING_SCREEN_PAL_STEM "${CMAKE_MATCH_1}")
        set(NAMING_SCREEN_PAL_PNG
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/${NAMING_SCREEN_PAL_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${NAMING_SCREEN_PAL_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${NAMING_SCREEN_PAL_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
            VERBATIM)
    # END NAMING SCREEN PALETTE AND MENU GFX EXACT PIPELINE

    # BEGIN NAMING SCREEN RAW 4BPP PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/naming_screen/(.+)[.]4bpp$")
        set(NAMING_SCREEN_RAW_4BPP_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/naming_screen/${NAMING_SCREEN_RAW_4BPP_STEM}.png")
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
    # END NAMING SCREEN RAW 4BPP PIPELINE

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

    # BEGIN FIELD EFFECT BIRCH RAW ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/birch_speech/(birch|unused_beauty)[.]4bpp$")
        set(BIRCH_SPEECH_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/birch_speech/${BIRCH_SPEECH_STEM}.png")
        if(BIRCH_SPEECH_STEM STREQUAL "unused_beauty")
            set(BIRCH_TILE_ARGS --num-tiles 822)
        else()
            set(BIRCH_TILE_ARGS)
        endif()
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                --gbagfx "${GBAGFX}"
                ${BIRCH_TILE_ARGS}
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp_raw.py"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/birch_speech/birch.gbapal")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/birch_speech/birch.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)

    # BEGIN TRAINER GRAPHICS PNG PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/trainers/front_pics/(.+)[.]4bpp[.]lz$")
        set(TRAINER_FRONT_REL "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trainers/front_pics/${TRAINER_FRONT_REL}.png")
        set(TMP_RAW
            "${OUTPUT_DIR}/${TRAINER_FRONT_REL}.4bpp")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${TMP_RAW}"
            COMMAND "${GBAGFX}" "${TMP_RAW}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/trainers/front_pics/(.+)[.]gbapal[.]lz$")
        set(TRAINER_FRONT_PAL_REL "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trainers/front_pics/${TRAINER_FRONT_PAL_REL}.png")
        set(TMP_RAW
            "${OUTPUT_DIR}/${TRAINER_FRONT_PAL_REL}.gbapal")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${TMP_RAW}"
            COMMAND "${GBAGFX}" "${TMP_RAW}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/trainers/back_pics/(.+)[.]4bpp$")
        set(TRAINER_BACK_REL "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trainers/back_pics/${TRAINER_BACK_REL}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)
    # END TRAINER GRAPHICS PNG PIPELINE

    # BEGIN OBJECT EVENT CANONICAL PNG PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/object_events/pics/(.+)[.]4bpp$")
        set(OBJECT_EVENT_PIC_REL "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/object_events/pics/${OBJECT_EVENT_PIC_REL}.png")
        set(OBJECT_EVENT_MANIFEST
            "${CMAKE_SOURCE_DIR}/graphics/object_events/object_event_pic_flags.json")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_object_event_4bpp.py"
                --gbagfx "${GBAGFX}"
                --manifest "${OBJECT_EVENT_MANIFEST}"
                --asset-key "${OBJECT_EVENT_PIC_REL}.png"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${OBJECT_EVENT_MANIFEST}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_object_event_4bpp.py"
                "${GBAGFX}"
            VERBATIM)
    # END OBJECT EVENT CANONICAL PNG PIPELINE

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/field_effects/pics/(.+)[.]4bpp$")
        set(FIELD_EFFECT_GFX_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/field_effects/pics/${FIELD_EFFECT_GFX_STEM}.png")
        set(FIELD_EFFECT_GFX_ARGS)

        # gbagfx metatile dimensions must match the canonical field-effect
        # SpriteFrameImage layout. Assets not listed here use plain tile order.
        if(FIELD_EFFECT_GFX_STEM MATCHES
                "^(sparkle|ripple|ash|arrow|unused_grass_3|jump_long_grass|unused_grass_frames_1_to_8|unused_grass_2|long_grass|tall_grass|short_grass|sand_footprints|deep_sand_footprints|bike_tire_tracks|unused_sand|jump_big_splash|water_surfacing|ash_puff|ash_launch|small_sparkle)$")
            set(FIELD_EFFECT_GFX_ARGS -mwidth 2 -mheight 2)
        elseif(FIELD_EFFECT_GFX_STEM MATCHES
                "^(ground_impact_dust|jump_tall_grass|sand_pile|jump_small_splash)$")
            set(FIELD_EFFECT_GFX_ARGS -mwidth 2 -mheight 1)
        elseif(FIELD_EFFECT_GFX_STEM MATCHES
                "^(tree_disguise|mountain_disguise|sand_disguise_placeholder|bubbles)$")
            set(FIELD_EFFECT_GFX_ARGS -mwidth 2 -mheight 4)
        elseif(FIELD_EFFECT_GFX_STEM STREQUAL "surf_blob")
            set(FIELD_EFFECT_GFX_ARGS -mwidth 4 -mheight 4)
        endif()

        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}"
                "${INPUT_PNG}" "${OUTPUT_ABS}" ${FIELD_EFFECT_GFX_ARGS}
            DEPENDS "${INPUT_PNG}" "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/field_effects/palettes/(.+)[.]gbapal$")
        set(FIELD_EFFECT_PAL_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/field_effects/palettes/${FIELD_EFFECT_PAL_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
            VERBATIM)
    # END FIELD EFFECT BIRCH RAW ASSET PIPELINE

    # BEGIN SLOT MACHINE 4BPP LZ PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/slot_machine/(digital_display|reel_time_gfx|menu)[.]4bpp[.]lz$")
        set(SLOT_MACHINE_GFX_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/slot_machine/${SLOT_MACHINE_GFX_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}" "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                --gbagfx "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_4bpp.py"
                "${CMAKE_SOURCE_DIR}/tools/gba_graphics.py"
                "${GBAGFX}"
            VERBATIM)
    # END SLOT MACHINE 4BPP LZ PIPELINE

    # BEGIN TRADE EDITABLE RAW ASSET PIPELINE
    elseif("${RELATIVE_OUTPUT}" MATCHES
            "^build/graphics/trade/(pokeball|link_mon_glow|link_mon_shadow|gba_screen)[.]4bpp$")
        set(TRADE_EDITABLE_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trade/${TRADE_EDITABLE_STEM}.png")
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
            "^build/graphics/trade/(pokeball_palette|link_mon_palette|gba_palette)[.]gbapal$")
        set(TRADE_EDITABLE_PAL_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trade/${TRADE_EDITABLE_PAL_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
            VERBATIM)
    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/trade/pokeball_symbol.8bpp")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trade/pokeball_symbol.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${GBAGFX}" "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${GBAGFX}"
            VERBATIM)

    elseif("${RELATIVE_OUTPUT}" STREQUAL
            "build/graphics/trade/cable_end.4bpp")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trade/cable_end.png")
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
            "^build/graphics/trade/(unused1_palette|unused2_palette|wireless_signal_none_palette)[.]gbapal$")
        set(TRADE_RESIDUAL_PAL_STEM "${CMAKE_MATCH_1}")
        set(INPUT_PNG
            "${CMAKE_SOURCE_DIR}/graphics/trade/${TRADE_RESIDUAL_PAL_STEM}.png")
        add_custom_command(
            OUTPUT "${OUTPUT_ABS}"
            COMMAND "${CMAKE_COMMAND}" -E make_directory "${OUTPUT_DIR}"
            COMMAND "${Python3_EXECUTABLE}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
                "${INPUT_PNG}" "${OUTPUT_ABS}"
            DEPENDS
                "${INPUT_PNG}"
                "${CMAKE_SOURCE_DIR}/tools/png_to_palette.py"
            VERBATIM)

    # END TRADE EDITABLE RAW ASSET PIPELINE

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

file(GLOB_RECURSE DATA_SOURCE_GBA_BINARIES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/data/*.gba")

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
        ${DATA_SOURCE_GBA_BINARIES}
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

file(GLOB_RECURSE MOVES_8117_EXACT_EDITABLE_SOURCES
    CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/graphics/*.png"
    "${CMAKE_SOURCE_DIR}/graphics/*.u16"
    "${CMAKE_SOURCE_DIR}/graphics/*.csv")

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
