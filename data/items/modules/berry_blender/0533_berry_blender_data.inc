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
