@ Semanticized trade/evolution/Berry Blender rodata.
@ ROM addresses are verification comments only.

	.globl gTradeWindowTemplates
gTradeWindowTemplates: @ 0x0830D27C
	@ struct WindowTemplate[2]: trade message window + dummy terminator.
	.byte 0, 2, 15, 26, 4, 0
	.2byte 0x0040 @ entry 0
	.byte 255, 0, 0, 0, 0, 0
	.2byte 0x0000 @ entry 1

	.globl gEvolutionSceneWindowTemplate
gEvolutionSceneWindowTemplate: @ 0x0830D28C
	@ struct WindowTemplate used by Task_TradeEvolutionScene.
	.byte 0, 21, 9, 5, 4, 15
	.2byte 0x00BC

	.globl gTradeBgTemplates
gTradeBgTemplates: @ 0x0830D294
	@ struct BgTemplate[4], consumed by InitBgsFromTemplates(..., 4).
	.4byte 0x000001FC @ BG template 0
	.4byte 0x00002051 @ BG template 1
	.4byte 0x00002326 @ BG template 2
	.4byte 0x00003063 @ BG template 3

	.globl gTradeSpriteMotionYDeltaTable
gTradeSpriteMotionYDeltaTable: @ 0x0830D2A4
	@ Signed per-frame Y deltas used by trade-animation phases.
	.byte 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3
	.byte 4, 4, 4, 4, -4, -4, -4, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1
	.byte -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1
	.byte 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, -4, -3, -3, -2, -2, -1
	.byte -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 2, 2, 3
	.byte 3, 4, -4, -3, -2, -1, -1, -1, 0, 0, 0, 0, 1, 0, 1, 1, 2, 3

	.globl gTradeWirelessSignalAnimSteps
gTradeWirelessSignalAnimSteps: @ 0x0830D310
	@ Pairs: palette index, frame duration/end marker.
	.byte 0, 0x01 @ step 0
	.byte 1, 0x01 @ step 1
	.byte 2, 0x01 @ step 2
	.byte 3, 0x01 @ step 3
	.byte 4, 0x01 @ step 4
	.byte 5, 0x02 @ step 5
	.byte 6, 0x02 @ step 6
	.byte 7, 0x02 @ step 7
	.byte 8, 0x02 @ step 8
	.byte 9, 0x02 @ step 9
	.byte 10, 0x03 @ step 10
	.byte 11, 0x03 @ step 11
	.byte 12, 0x03 @ step 12
	.byte 13, 0x04 @ step 13
	.byte 14, 0x05 @ step 14
	.byte 15, 0x02 @ step 15
	.byte 0, 0x01 @ step 16
	.byte 1, 0x01 @ step 17
	.byte 2, 0x01 @ step 18
	.byte 3, 0x01 @ step 19
	.byte 4, 0x01 @ step 20
	.byte 5, 0x02 @ step 21
	.byte 6, 0x02 @ step 22
	.byte 7, 0x02 @ step 23
	.byte 8, 0x02 @ step 24
	.byte 9, 0x02 @ step 25
	.byte 10, 0x03 @ step 26
	.byte 11, 0x03 @ step 27
	.byte 12, 0x03 @ step 28
	.byte 13, 0x04 @ step 29
	.byte 14, 0x05 @ step 30
	.byte 16, 0x01 @ step 31
	.byte 16, 0xFF @ step 32
	.byte 0, 0x00 @ step 33

	.globl gBerryBlenderCenterPalette
gBerryBlenderCenterPalette: @ 0x0830D354
	.incbin "build/graphics/berry_blender/center_palette.gbapal"

	.globl gBerryBlenderCenterTilemap
gBerryBlenderCenterTilemap: @ 0x0830D374
	@ 512 semantic GBA text-BG entries generated from center_map.tilemap.csv.
	.include "build/graphics/berry_blender/center_map.tilemap.inc"

	.globl gBerryBlenderOuterPalette
gBerryBlenderOuterPalette: @ 0x0830D774
	.incbin "build/graphics/berry_blender/outer_palette.gbapal"

	.globl gBerryBlenderUnusedPalette
gBerryBlenderUnusedPalette: @ 0x0830D794
	.incbin "build/graphics/berry_blender/unused_palette.gbapal"

sBerryBlenderEmptyPalettes: @ 0x0830D7B4
	@ Canonical sEmpty_Pal[16 * 14].
	.space 0x1C0

	.globl gBerryBlenderMiscPalette
gBerryBlenderMiscPalette: @ 0x0830D974
	.incbin "build/graphics/berry_blender/misc_palette.gbapal"

	.globl gBerryBlenderArrowPalette
gBerryBlenderArrowPalette: @ 0x0830D994
	.incbin "build/graphics/berry_blender/arrow_palette.gbapal"

	.globl gBerryBlenderBetaArrow_Gfx
gBerryBlenderBetaArrow_Gfx: @ 0x0830D9B4
	@ Unused early player-arrow graphics.
	.incbin "build/graphics/berry_blender/arrow_old.4bpp"

	.globl gBerryBlenderScoreSymbols_Gfx
gBerryBlenderScoreSymbols_Gfx: @ 0x0830DBB4
	.incbin "build/graphics/berry_blender/score_symbols.4bpp"

	.globl gBerryBlenderParticles_Gfx
gBerryBlenderParticles_Gfx: @ 0x0830DDB4
	.incbin "build/graphics/berry_blender/particles.4bpp"

sBerryBlenderEmpty0: @ 0x0830DE94
	.space 0x120

	.globl gBerryBlenderCountdownNumbers_Gfx
gBerryBlenderCountdownNumbers_Gfx: @ 0x0830DFB4
	.incbin "build/graphics/berry_blender/countdown_numbers.4bpp"

	.globl gBerryBlenderStart_Gfx
gBerryBlenderStart_Gfx: @ 0x0830E5B4
	@ Japanese-version START graphic.
	.incbin "build/graphics/berry_blender/start.4bpp"

sBerryBlenderUnusedGap1_JP: @ 0x0830E9B4
	@ JP-only unreferenced residue: 9 significant bytes + zero tail.
	.byte 0xDD, 0xCD, 0x0F, 0x00, 0xFF, 0xFF, 0x0F, 0x00, 0xEF
	.space 0x1F7

	.globl gBerryBlenderPlayerArrow_Gfx
gBerryBlenderPlayerArrow_Gfx: @ 0x0830EBB4
	.incbin "build/graphics/berry_blender/arrow.4bpp"

sBerryBlenderEmpty2: @ 0x0830F3B4
	.space 0x2C0

sUnusedText_YesNo: @ 0x0830F674
	@ "はい　\nいいえ$"; the suffix at F678 is also a standalone substring.
	.byte 0x1A, 0x02, 0x00, 0xFE @ はい　\n
	.globl gBerryBlenderUnusedText_No
gBerryBlenderUnusedText_No: @ 0x0830F678
	.string "いいえ{EOS}"

sUnusedText_2: @ 0x0830F67C
	.string "▶{EOS}"

sUnusedText_Space: @ 0x0830F67E
	.string "　{EOS}"

sUnusedText_Terminating: @ 0x0830F680
	.string "しゅうりょうまちです　　　{EOS}"

sUnusedText_LinkPartnerNotFound: @ 0x0830F68E
	.string "あいてがみつからないようです\nもういちどやりなおしてください\p{EOS}"
