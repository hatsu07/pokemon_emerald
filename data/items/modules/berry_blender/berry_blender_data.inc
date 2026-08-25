.if .L__inc_fragment_select_692f753bcdb8 == 1
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
.elseif .L__inc_fragment_select_692f753bcdb8 == 2

	@ src/berry_blender.c:264 sText_BerryBlenderStart
	.globl sText_BerryBlenderStart
sText_BerryBlenderStart: @ 0x0830F6AE
	.string "きのみブレンダーを きどうします\pバッグから きのみブレンダーに いれる\nきのみを えらんでください\p{EOS}"
	.if (. - sText_BerryBlenderStart) > 0x34
	.error "sText_BerryBlenderStart may not grow beyond its original slot"
	.endif
	.if (. - sText_BerryBlenderStart) < 0x34
	.space 0x34 - (. - sText_BerryBlenderStart)
	.endif
	@ Decoded text from ROM range: offset=0x30F6E2, size=0x19
	.string "カッコイ{EOS}"
	.string "カワイイ{EOS}"
	.string "ウツクシ{EOS}"
	.string "カシコイ{EOS}"
	.string "タクマシ{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x0830F6FB: berry_blender.s: Blender_PrintMadePokeblockString
	.globl gBerryBlenderData_0830F6FB
gBerryBlenderData_0830F6FB: @ 0x0830F6FB
	@ analyzed canonical ROM range 0x0830F6FB-0x0830F6FC
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xFB, 0xFF

	@ src/berry_blender.c:266 sText_WasMade
	.globl sText_WasMade
sText_WasMade: @ 0x0830F6FD
	.string " ができた！{EOS}"
	.if (. - sText_WasMade) > 0x7
	.error "sText_WasMade may not grow beyond its original slot"
	.endif
	.if (. - sText_WasMade) < 0x7
	.space 0x7 - (. - sText_WasMade)
	.endif
	@ analyzed canonical ROM range 0x0830F704-0x0830F721
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x13, 0x12, 0x3D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x14, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x00, 0x00, 0x5C, 0x8A, 0x79, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
.elseif .L__inc_fragment_select_692f753bcdb8 == 3
	@ src/data/trainers.h:33929 trainers_line_33929
	.globl gText_Rom_30F722
gText_Rom_30F722: @ 0x0830F722
	.string "ヨシノリ{EOS}"
	.if (. - gText_Rom_30F722) > 0x5
	.error "gText_Rom_30F722 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F722) < 0x5
	.space 0x5 - (. - gText_Rom_30F722)
	.endif
	@ analyzed canonical ROM range 0x0830F727-0x0830F74C
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x00, 0x00, 0x00, 0x00, 0x00, 0xA3, 0xCA, 0xE3, 0xDF, 0xFF, 0x00, 0xA4, 0xCA, 0xE3, 0xDF, 0xFF
	.byte 0x00, 0xA5, 0xCA, 0xE3, 0xDF, 0xFF, 0x00, 0xA2, 0xCA, 0xFF, 0x00, 0xA3, 0xCA, 0xFF, 0x00, 0xA4
	.byte 0xCA, 0xFF, 0x00, 0xA5, 0xCA, 0xFF

	@ src/berry_blender.c:270 berry_blender_line_270
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F74D
gText_Rom_30F74D: @ 0x0830F74D
	.string " おじさん{EOS}"
	.if (. - gText_Rom_30F74D) != 0x6
	.error "gText_Rom_30F74D must retain its original byte length"
	.endif
	@ src/berry_blender.c:271 berry_blender_line_271
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_30F753
gText_Rom_30F753: @ 0x0830F753
	.string " おとこのこ{EOS}"
	.if (. - gText_Rom_30F753) != 0x7
	.error "gText_Rom_30F753 must retain its original byte length"
	.endif

	@ src/berry_blender.c:272 berry_blender_line_272 (+1 aliases)
	.globl gText_Rom_30F75A
gText_Rom_30F75A: @ 0x0830F75A
	.string "おんなのこ{EOS}"
	.if (. - gText_Rom_30F75A) > 0x6
	.error "gText_Rom_30F75A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F75A) < 0x6
	.space 0x6 - (. - gText_Rom_30F75A)
	.endif

	@ src/berry_blender.c:273 berry_blender_line_273
	.globl gText_Rom_30F760
gText_Rom_30F760: @ 0x0830F760
	.string "めいじん{EOS}"
	.if (. - gText_Rom_30F760) > 0x5
	.error "gText_Rom_30F760 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F760) < 0x5
	.space 0x5 - (. - gText_Rom_30F760)
	.endif

	@ src/berry_blender.c:274 berry_blender_line_274
	@ Preserve exact byte length: internal label, semantic suffix text pointer.
	.globl gText_Rom_30F765
gText_Rom_30F765: @ 0x0830F765
	.string " おにいさん{EOS}"
	.if (. - gText_Rom_30F765) != 0x7
	.error "gText_Rom_30F765 must retain its original byte length"
	.endif
.elseif .L__inc_fragment_select_692f753bcdb8 == 4

	@ src/berry_blender.c:278 sText_CommunicationStandby
	.globl sText_CommunicationStandby
sText_CommunicationStandby: @ 0x0830F78E
	.string "つうしんたいきちゅうです{EOS}"
	.if (. - sText_CommunicationStandby) > 0xd
	.error "sText_CommunicationStandby may not grow beyond its original slot"
	.endif
	.if (. - sText_CommunicationStandby) < 0xd
	.space 0xd - (. - sText_CommunicationStandby)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830F79B: berry_blender.s: CB2_HandleBlenderEndGame
	.globl gBerryBlenderData_0830F79B
gBerryBlenderData_0830F79B: @ 0x0830F79B
	@ analyzed canonical ROM range 0x0830F79B-0x0830F7B1
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x17 bytes=23
	.byte 0x23, 0x03, 0x02, 0x11, 0x45, 0x00, 0x07, 0x19, 0x20, 0x2D, 0x00, 0x1F, 0x3F, 0x1F, 0x0D, 0x06
	.byte 0xAC, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFF

	@ src/berry_blender.c:280 sText_RunOutOfBerriesForBlending
	.globl sText_RunOutOfBerriesForBlending
sText_RunOutOfBerriesForBlending: @ 0x0830F7B2
	.string "きのみブレンダーに いれる きのみが\nないので これいじょう できません\p{EOS}"
	.if (. - sText_RunOutOfBerriesForBlending) > 0x26
	.error "sText_RunOutOfBerriesForBlending may not grow beyond its original slot"
	.endif
	.if (. - sText_RunOutOfBerriesForBlending) < 0x26
	.space 0x26 - (. - sText_RunOutOfBerriesForBlending)
	.endif

	@ src/berry_blender.c:281 sText_YourPokeblockCaseIsFull
	.globl sText_YourPokeblockCaseIsFull
sText_YourPokeblockCaseIsFull: @ 0x0830F7D8
	.string "ポロックケースが いっぱいの ようです\p{EOS}"
	.if (. - sText_YourPokeblockCaseIsFull) > 0x15
	.error "sText_YourPokeblockCaseIsFull may not grow beyond its original slot"
	.endif
	.if (. - sText_YourPokeblockCaseIsFull) < 0x15
	.space 0x15 - (. - sText_YourPokeblockCaseIsFull)
	.endif

	@ src/berry_blender.c:282 sText_HasNoBerriesToPut
	.globl sText_HasNoBerriesToPut
sText_HasNoBerriesToPut: @ 0x0830F7ED
	.string "は きのみブレンダーに\nいれる きのみがないようです{EOS}"
	.if (. - sText_HasNoBerriesToPut) > 0x1b
	.error "sText_HasNoBerriesToPut may not grow beyond its original slot"
	.endif
	.if (. - sText_HasNoBerriesToPut) < 0x1b
	.space 0x1b - (. - sText_HasNoBerriesToPut)
	.endif

	@ src/berry_blender.c:283 sText_ApostropheSPokeblockCaseIsFull
	.globl sText_ApostropheSPokeblockCaseIsFull
sText_ApostropheSPokeblockCaseIsFull: @ 0x0830F808
	.string "は ポロックケースが\nいっぱいの ようです\p{EOS}"
	.if (. - sText_ApostropheSPokeblockCaseIsFull) > 0x17
	.error "sText_ApostropheSPokeblockCaseIsFull may not grow beyond its original slot"
	.endif
	.if (. - sText_ApostropheSPokeblockCaseIsFull) < 0x17
	.space 0x17 - (. - sText_ApostropheSPokeblockCaseIsFull)
	.endif

	@ src/berry_blender.c:284 sText_BlendingResults
	.globl sText_BlendingResults
sText_BlendingResults: @ 0x0830F81F
	.string "まぜたけっか{EOS}"
	.if (. - sText_BlendingResults) > 0x7
	.error "sText_BlendingResults may not grow beyond its original slot"
	.endif
	.if (. - sText_BlendingResults) < 0x7
	.space 0x7 - (. - sText_BlendingResults)
	.endif
	@ Decoded text from ROM range: offset=0x30F826, size=0x7
	.string "いれた　たね{EOS}"

	@ asm/berry_blender.s:7852 Blender_PrintBlendingResults
	.globl gText_Rom_30F82D
gText_Rom_30F82D: @ 0x0830F82D
	.string "のみ{EOS}"
	.if (. - gText_Rom_30F82D) > 0x3
	.error "gText_Rom_30F82D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F82D) < 0x3
	.space 0x3 - (. - gText_Rom_30F82D)
	.endif
.elseif .L__inc_fragment_select_692f753bcdb8 == 5

	@ src/data/easy_chat/easy_chat_group_time.h:118 easy_chat_group_time_line_118 (+1 aliases)
	.globl gText_Rom_30F830
gText_Rom_30F830: @ 0x0830F830
	.string "じかん{EOS}"
	.if (. - gText_Rom_30F830) > 0x4
	.error "gText_Rom_30F830 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F830) < 0x4
	.space 0x4 - (. - gText_Rom_30F830)
	.endif

	@ asm/berry_blender.s:7981 Blender_PrintBlendingResults
	.globl gText_Rom_30F834
gText_Rom_30F834: @ 0x0830F834
	.string "ふん{EOS}"
	.if (. - gText_Rom_30F834) > 0x3
	.error "gText_Rom_30F834 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F834) < 0x3
	.space 0x3 - (. - gText_Rom_30F834)
	.endif

	@ src/berry_blender.c:288 sText_Sec (+1 aliases)
	.globl sText_Sec
sText_Sec: @ 0x0830F837
	.string "びょう{EOS}"
	.if (. - sText_Sec) > 0x4
	.error "sText_Sec may not grow beyond its original slot"
	.endif
	.if (. - sText_Sec) < 0x4
	.space 0x4 - (. - sText_Sec)
	.endif

	@ src/berry_blender.c:289 sText_MaximumSpeed
	.globl sText_MaximumSpeed
sText_MaximumSpeed: @ 0x0830F83B
	.string "さいこうそくど{EOS}"
	.if (. - sText_MaximumSpeed) > 0x8
	.error "sText_MaximumSpeed may not grow beyond its original slot"
	.endif
	.if (. - sText_MaximumSpeed) < 0x8
	.space 0x8 - (. - sText_MaximumSpeed)
	.endif

	@ src/berry_blender.c:290 sText_RPM
	.globl sText_RPM
sText_RPM: @ 0x0830F843
	.string "rpm{EOS}"
	.if (. - sText_RPM) > 0x4
	.error "sText_RPM may not grow beyond its original slot"
	.endif
	.if (. - sText_RPM) < 0x4
	.space 0x4 - (. - sText_RPM)
	.endif

	@ asm/berry_blender.s:7807 Blender_PrintBlendingResults
	.globl gText_Rom_30F847
gText_Rom_30F847: @ 0x0830F847
	.string ",{EOS}"
	.if (. - gText_Rom_30F847) > 0x2
	.error "gText_Rom_30F847 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F847) < 0x2
	.space 0x2 - (. - gText_Rom_30F847)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830F849: berry_blender.s: Blender_PrintMadePokeblockString
	.globl gBerryBlenderData_0830F849
gBerryBlenderData_0830F849: @ 0x0830F849
	@ analyzed canonical ROM range 0x0830F849-0x0830F84C
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x4 bytes=4
	.byte 0xFE, 0xFF, 0x00, 0xFF

	@ src/berry_blender.c:309 sText_Ranking
	.globl sText_Ranking
sText_Ranking: @ 0x0830F84D
	.string "ランキング{EOS}"
	.if (. - sText_Ranking) > 0x6
	.error "sText_Ranking may not grow beyond its original slot"
	.endif
	.if (. - sText_Ranking) < 0x6
	.space 0x6 - (. - sText_Ranking)
	.endif

	@ src/berry_blender.c:310 sText_TheLevelIs (+1 aliases)
	.globl sText_BerryBlenderTheLevelIs
sText_BerryBlenderTheLevelIs: @ 0x0830F853
	.string "レベル{EOS}"
	.if (. - sText_BerryBlenderTheLevelIs) > 0x4
	.error "sText_BerryBlenderTheLevelIs may not grow beyond its original slot"
	.endif
	.if (. - sText_BerryBlenderTheLevelIs) < 0x4
	.space 0x4 - (. - sText_BerryBlenderTheLevelIs)
	.endif

	@ src/berry_blender.c:311 sText_TheFeelIs
	.globl sText_TheFeelIs
sText_TheFeelIs: @ 0x0830F857
	.string "で なめらかさは{EOS}"
	.if (. - sText_TheFeelIs) > 0x9
	.error "sText_TheFeelIs may not grow beyond its original slot"
	.endif
	.if (. - sText_TheFeelIs) < 0x9
	.space 0x9 - (. - sText_TheFeelIs)
	.endif

	@ asm/berry_blender.s:8215 Blender_PrintMadePokeblockString
	.globl gText_Rom_30F860
gText_Rom_30F860: @ 0x0830F860
	.string "だ{EOS}"
	.if (. - gText_Rom_30F860) > 0x2
	.error "gText_Rom_30F860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30F860) < 0x2
	.space 0x2 - (. - gText_Rom_30F860)
	.endif
	.space 0x2, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F864: berry_blender.s: sub_0807F500, sub_0807FF90
	.globl gBerryBlenderData_0830F864
gBerryBlenderData_0830F864: @ 0x0830F864
	@ analyzed canonical ROM range 0x0830F864-0x0830F86F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x01FC, 0x0000, 0x10C9, 0x0000, 0x0A82, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830F870: berry_blender.s: InitBerryBlenderWindows
	.globl gBerryBlenderData_0830F870
gBerryBlenderData_0830F870: @ 0x0830F870
	@ analyzed canonical ROM range 0x0830F870-0x0830F8A7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x38 entries=28
	.2byte 0x0100, 0x0706, 0x0E02, 0x0028, 0x1600, 0x0706, 0x0E02, 0x0036
	.2byte 0x0100, 0x070C, 0x0E02, 0x0044, 0x1600, 0x070C, 0x0E02, 0x0052
	.2byte 0x0400, 0x160F, 0x0E04, 0x0060, 0x0500, 0x1503, 0x0E0E, 0x0060
	.2byte 0x00FF, 0x0000, 0x0000, 0x0000
	@ pret/pokeemerald-jp direct xref for 0x0830F8A8: berry_blender.s: CB2_HandleBlenderEndGame
	.globl gBerryBlenderData_0830F8A8
gBerryBlenderData_0830F8A8: @ 0x0830F8A8
	@ analyzed canonical ROM range 0x0830F8A8-0x0830F8AF
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x8 entries=4
	.2byte 0x1500, 0x0509, 0x0E04, 0x00B8
	@ pret/pokeemerald-jp direct xref for 0x0830F8B0: berry_blender.s: sub_08080CA4
	.globl gBerryBlenderData_0830F8B0
gBerryBlenderData_0830F8B0: @ 0x0830F8B0
	@ analyzed canonical ROM range 0x0830F8B0-0x0830F8B7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x01, 0x01, 0x01
	@ pret/pokeemerald-jp direct xref for 0x0830F8B8: berry_blender.s: sub_0807F500, sub_0807FA20, sub_080802F0, sub_08080CA4
	.globl gBerryBlenderData_0830F8B8
gBerryBlenderData_0830F8B8: @ 0x0830F8B8
	@ analyzed canonical ROM range 0x0830F8B8-0x0830F8BF
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0x48, 0x20, 0xA8, 0x20, 0x48, 0x80, 0xA8, 0x80
	@ pret/pokeemerald-jp direct xref for 0x0830F8C0: berry_blender.s: sub_0807FA20, sub_08080154, sub_080802F0
	.globl gBerryBlenderData_0830F8C0
gBerryBlenderData_0830F8C0: @ 0x0830F8C0
	@ analyzed canonical ROM range 0x0830F8C0-0x0830F8CB
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0xC entries=6
	.2byte 0x00FF, 0xFF01, 0x00FF, 0x0201, 0x0100, 0x0302
	@ pret/pokeemerald-jp direct xref for 0x0830F8CC: berry_blender.s: sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830F8CC
gBerryBlenderData_0830F8CC: @ 0x0830F8CC
	@ analyzed canonical ROM range 0x0830F8CC-0x0830F8D3
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x8 bytes=8
	.byte 0x00, 0x00, 0x00, 0xC0, 0x00, 0x40, 0x00, 0x80
	@ pret/pokeemerald-jp direct xref for 0x0830F8D4: berry_blender.s: sub_0807FA20, sub_080802F0
	.globl gBerryBlenderData_0830F8D4
gBerryBlenderData_0830F8D4: @ 0x0830F8D4
	@ analyzed canonical ROM range 0x0830F8D4-0x0830F8D6
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x3 bytes=3
	.byte 0x01, 0x01, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F8D7: berry_blender.s: sub_0808002C, sub_080809EC, sub_08080B14
	.globl gBerryBlenderData_0830F8D7
gBerryBlenderData_0830F8D7: @ 0x0830F8D7
	@ analyzed canonical ROM range 0x0830F8D7-0x0830F8DB
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x20, 0xE0, 0x60, 0xA0, 0x00
	@ pret/pokeemerald-jp direct xref for 0x0830F8DC: berry_blender.s: sub_080802F0
	.globl gBerryBlenderData_0830F8DC
gBerryBlenderData_0830F8DC: @ 0x0830F8DC
	@ analyzed canonical ROM range 0x0830F8DC-0x0830F9AF
	@ semantic recovery: rodata; byte-verified against linked ROM

	@ proven function-pointer table
	.4byte sub_080808C0
	.4byte sub_080809EC
	.4byte sub_08080B14
	.byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00, 0x10, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x10, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x10, 0x00, 0x45, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x10, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0xC2, 0x00, 0x20, 0x00, 0xC5, 0x00
	.byte 0x30, 0x00, 0xC3, 0x00, 0x10, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0x82, 0x00
	.byte 0x20, 0x00, 0x85, 0x00, 0x30, 0x00, 0x83, 0x00, 0x10, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x30, 0x00, 0x42, 0x00, 0x20, 0x00, 0x45, 0x00, 0x30, 0x00, 0x43, 0x00, 0x10, 0x00, 0x45, 0x00
	.byte 0xFF, 0xFF, 0x00, 0x00, 0x30, 0x00, 0x02, 0x00, 0x20, 0x00, 0x05, 0x00, 0x30, 0x00, 0x03, 0x00
	.byte 0x10, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xC5, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x85, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x45, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x05, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xF8, 0x30, 0x08, 0xF8, 0xF8, 0x30, 0x08
	.byte 0x00, 0xF9, 0x30, 0x08, 0x08, 0xF9, 0x30, 0x08, 0x10, 0xF9, 0x30, 0x08, 0x24, 0xF9, 0x30, 0x08
	.byte 0x38, 0xF9, 0x30, 0x08, 0x4C, 0xF9, 0x30, 0x08, 0x60, 0xF9, 0x30, 0x08, 0x68, 0xF9, 0x30, 0x08
	.byte 0x70, 0xF9, 0x30, 0x08, 0x78, 0xF9, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830F9B0: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderPlayerArrowSpriteSheet
gBerryBlenderPlayerArrowSpriteSheet: @ 0x0830F9B0
	.4byte gBerryBlenderPlayerArrow_Gfx
	.2byte 0x0800 @ size
	.2byte 0xB5D1 @ tag
	.globl gBerryBlenderMiscSpritePalette
gBerryBlenderMiscSpritePalette: @ 0x0830F9B8
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.4byte gBerryBlenderMiscPalette
	.2byte 0xB5D2 @ tag
	.2byte 0x0000 @ padding
	.globl gBerryBlenderPlayerArrowSpritePalette
gBerryBlenderPlayerArrowSpritePalette: @ 0x0830F9C0
	@ ANALYSIS: SEMANTIC_NUMERIC_PALETTE_ASSET
	.4byte gBerryBlenderArrowPalette
	.2byte 0x3018 @ tag
	.2byte 0x0000 @ padding
	.globl gBerryBlenderData_0830F9C8
gBerryBlenderData_0830F9C8: @ 0x0830F9C8
	@ analyzed canonical ROM range 0x0830F9C8-0x0830FA27
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x60 entries=48
	.2byte 0xB5D1, 0x3018, 0xF8E8, 0x0830, 0xF980, 0x0830, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x2E15, 0x0808, 0x0000, 0x4000, 0x0000, 0x0000
	.2byte 0x0000, 0x0014, 0xFFFF, 0x0000, 0x0004, 0x0054, 0xFFFF, 0x0000
	.2byte 0x0008, 0x0004, 0x000C, 0x0004, 0x0008, 0x0004, 0x000C, 0x0004
	.2byte 0x0008, 0x0004, 0xFFFF, 0x0000, 0x0008, 0x0004, 0xFFFF, 0x0000
	.2byte 0xF9E8, 0x0830, 0xF9F0, 0x0830, 0xF9F8, 0x0830, 0xFA10, 0x0830
	@ pret/pokeemerald-jp direct xref for 0x0830FA28: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderScoreSymbolsSpriteSheet
gBerryBlenderScoreSymbolsSpriteSheet: @ 0x0830FA28
	.4byte gBerryBlenderScoreSymbols_Gfx
	.2byte 0x0200 @ size
	.2byte 0xBEF8 @ tag
	.globl gBerryBlenderData_0830FA30
gBerryBlenderData_0830FA30: @ 0x0830FA30
	@ analyzed canonical ROM range 0x0830FA30-0x0830FAC7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x98 entries=76
	.2byte 0xBEF8, 0xB5D2, 0xF9E0, 0x0830, 0xFA18, 0x0830, 0x0000, 0x0000
	.2byte 0xF310, 0x082B, 0x2985, 0x0808, 0x0000, 0x0000, 0x0400, 0x0000
	.2byte 0x0000, 0x0003, 0x0001, 0x0004, 0x0003, 0x0005, 0x0001, 0x0004
	.2byte 0x0000, 0x0003, 0xFFFF, 0x0000, 0x0000, 0x0003, 0x0002, 0x0004
	.2byte 0x0004, 0x0005, 0x0002, 0x0004, 0x0000, 0x0003, 0xFFFF, 0x0000
	.2byte 0x0000, 0x0002, 0x0001, 0x0002, 0x0002, 0x0002, 0x0004, 0x0004
	.2byte 0x0003, 0x0003, 0x0002, 0x0002, 0x0001, 0x0002, 0x0000, 0x0002
	.2byte 0xFFFF, 0x0000, 0x0005, 0x00C5, 0xFFFF, 0x0000, 0x0006, 0x00C5
	.2byte 0xFFFF, 0x0000, 0xFA50, 0x0830, 0xFA68, 0x0830, 0xFA80, 0x0830
	.2byte 0xFAA4, 0x0830, 0xFAAC, 0x0830
	@ pret/pokeemerald-jp direct xref for 0x0830FAC8: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderParticlesSpriteSheet
gBerryBlenderParticlesSpriteSheet: @ 0x0830FAC8
	.4byte gBerryBlenderParticles_Gfx
	.2byte 0x00E0 @ size
	.2byte 0x5BA0 @ tag
	.globl gBerryBlenderData_0830FAD0
gBerryBlenderData_0830FAD0: @ 0x0830FAD0
	@ analyzed canonical ROM range 0x0830FAD0-0x0830FB13
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x44 bytes=68
	.byte 0xA0, 0x5B, 0xD2, 0xB5, 0x48, 0xFA, 0x30, 0x08, 0xB4, 0xFA, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x41, 0x71, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x04, 0x00, 0x00
	.byte 0x20, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x10, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00
	.byte 0x00, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0xF0, 0xFA, 0x30, 0x08, 0xF8, 0xFA, 0x30, 0x08
	.byte 0x00, 0xFB, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830FB14: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderCountdownNumbersSpriteSheet
gBerryBlenderCountdownNumbersSpriteSheet: @ 0x0830FB14
	.4byte gBerryBlenderCountdownNumbers_Gfx
	.2byte 0x0600 @ size
	.2byte 0x3039 @ tag
	.globl gBerryBlenderData_0830FB1C
gBerryBlenderData_0830FB1C: @ 0x0830FB1C
	@ analyzed canonical ROM range 0x0830FB1C-0x0830FB47
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2C bytes=44
	.byte 0x39, 0x30, 0xD2, 0xB5, 0xE8, 0xFA, 0x30, 0x08, 0x08, 0xFB, 0x30, 0x08, 0x00, 0x00, 0x00, 0x00
	.byte 0x10, 0xF3, 0x2B, 0x08, 0x2D, 0x2A, 0x08, 0x08, 0x00, 0x40, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x00
	.byte 0x00, 0x00, 0x1E, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x3C, 0xFB, 0x30, 0x08
	@ pret/pokeemerald-jp direct xref for 0x0830FB48: berry_blender.s: LoadBerryBlenderGfx
	.globl gBerryBlenderStartSpriteSheet
gBerryBlenderStartSpriteSheet: @ 0x0830FB48
	.4byte gBerryBlenderStart_Gfx
	.2byte 0x0400 @ size
	.2byte 0x303A @ tag
	.globl gBerryBlenderData_0830FB50
gBerryBlenderData_0830FB50: @ 0x0830FB50
	@ analyzed canonical ROM range 0x0830FB50-0x0830FB67
sSpriteTemplate_0830FB50: @ 0x0830FB50
	rodata_sprite_template 0x303A, 0xB5D2, 0x0830FB34, 0x0830FB44, 0, gDummySpriteAffineAnimTable, sub_08082ADC
	@ pret/pokeemerald-jp direct xref for 0x0830FB68: berry_blender.s: sub_0807F7C8
	.globl gBerryBlenderData_0830FB68
gBerryBlenderData_0830FB68: @ 0x0830FB68
	@ analyzed canonical ROM range 0x0830FB68-0x0830FB8F
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x28 entries=20
	.2byte 0xFFF6, 0x0014, 0x000A, 0x0002, 0x0001, 0x00FA, 0x0014, 0x000A
	.2byte 0xFFFE, 0x0001, 0xFFF6, 0x008C, 0x000A, 0x0002, 0xFFFF, 0x00FA
	.2byte 0x008C, 0x000A, 0xFFFE, 0xFFFF
	@ pret/pokeemerald-jp direct xref for 0x0830FB90: berry_blender.s: Blender_SetOpponentsBerryData
	.globl gBerryBlenderData_0830FB90
gBerryBlenderData_0830FB90: @ 0x0830FB90
	@ analyzed canonical ROM range 0x0830FB90-0x0830FBAD
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x1E entries=15
	.2byte 0x0304, 0x0002, 0x0304, 0x0001, 0x0204, 0x0001, 0x0203, 0x0001
	.2byte 0x0302, 0x0301, 0x0204, 0x0004, 0x0003, 0x0401, 0x0201
	@ pret/pokeemerald-jp direct xref for 0x0830FBAE: berry_blender.s: Blender_SetOpponentsBerryData
	.globl gBerryBlenderData_0830FBAE
gBerryBlenderData_0830FBAE: @ 0x0830FBAE
	@ analyzed canonical ROM range 0x0830FBAE-0x0830FBB2
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x1E, 0x1F, 0x20, 0x21, 0x22
	@ pret/pokeemerald-jp direct xref for 0x0830FBB3: berry_blender.s: sub_08080D8C
	.globl gBerryBlenderData_0830FBB3
gBerryBlenderData_0830FBB3: @ 0x0830FBB3
	@ analyzed canonical ROM range 0x0830FBB3-0x0830FBB7
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x01, 0x01, 0x02, 0x03, 0x04
	@ pret/pokeemerald-jp direct xref for 0x0830FBB8: berry_blender.s: Blender_CalculatePokeblock
	.globl gBerryBlenderData_0830FBB8
gBerryBlenderData_0830FBB8: @ 0x0830FBB8
	@ analyzed canonical ROM range 0x0830FBB8-0x0830FBC7
	@ structured u16 table (semantic role inferred only to scalar width)
	@ ANALYSIS: U16_TABLE size=0x10 entries=8
	.2byte 0x161C, 0x1A13, 0x0E19, 0x0B0D, 0x1507, 0x0A0B, 0x0F03, 0xFF08

	@ src/berry_blender.c:314 sText_SavingDontTurnOff2
	.globl sText_SavingDontTurnOff2
sText_SavingDontTurnOff2: @ 0x0830FBC8
	.string "ポケモンレポートに かきこんでいます    \nでんげんを きらないで ください      {EOS}"
	.if (. - sText_SavingDontTurnOff2) > 0x2e
	.error "sText_SavingDontTurnOff2 may not grow beyond its original slot"
	.endif
	.if (. - sText_SavingDontTurnOff2) < 0x2e
	.space 0x2e - (. - sText_SavingDontTurnOff2)
	.endif

	@ src/berry_blender.c:917 sJPText_GoodTvReady
	.globl sJPText_GoodTvReady
sJPText_GoodTvReady: @ 0x0830FBF6
	.string "\nいいTVができました {EOS}"
	.if (. - sJPText_GoodTvReady) > 0xd
	.error "sJPText_GoodTvReady may not grow beyond its original slot"
	.endif
	.if (. - sJPText_GoodTvReady) < 0xd
	.space 0xd - (. - sJPText_GoodTvReady)
	.endif

	@ src/berry_blender.c:918 sJPText_BadTvReady
	.globl sJPText_BadTvReady
sJPText_BadTvReady: @ 0x0830FC03
	.string "\nダメTVができました {EOS}"
	.if (. - sJPText_BadTvReady) > 0xd
	.error "sJPText_BadTvReady may not grow beyond its original slot"
	.endif
	.if (. - sJPText_BadTvReady) < 0xd
	.space 0xd - (. - sJPText_BadTvReady)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC10
gText_Rom_30FC10: @ 0x0830FC10
	.string "からい{EOS}"
	.if (. - gText_Rom_30FC10) > 0x4
	.error "gText_Rom_30FC10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC10) < 0x4
	.space 0x4 - (. - gText_Rom_30FC10)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC15
gText_Rom_30FC15: @ 0x0830FC15
	.string "しぶい{EOS}"
	.if (. - gText_Rom_30FC15) > 0x4
	.error "gText_Rom_30FC15 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC15) < 0x4
	.space 0x4 - (. - gText_Rom_30FC15)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_30FC1A
gText_Rom_30FC1A: @ 0x0830FC1A
	.string "あまい{EOS}"
	.if (. - gText_Rom_30FC1A) > 0x4
	.error "gText_Rom_30FC1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1A) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1A)
	.endif
	.space 0x1, 0x00

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC1F
gText_Rom_30FC1F: @ 0x0830FC1F
	.string "にがい{EOS}"
	.if (. - gText_Rom_30FC1F) > 0x4
	.error "gText_Rom_30FC1F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC1F) < 0x4
	.space 0x4 - (. - gText_Rom_30FC1F)
	.endif
	.space 0x1, 0x00
.elseif .L__inc_fragment_select_692f753bcdb8 == 6
	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_30FC24
gText_Rom_30FC24: @ 0x0830FC24
	.string "すっぱい{EOS}"
	.if (. - gText_Rom_30FC24) > 0x5
	.error "gText_Rom_30FC24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_30FC24) < 0x5
	.space 0x5 - (. - gText_Rom_30FC24)
	.endif
	@ pret/pokeemerald-jp direct xref for 0x0830FC29: berry_blender.s: Blender_PrintBlendingResults
	.globl gBerryBlenderData_0830FC29
gBerryBlenderData_0830FC29: @ 0x0830FC29
	@ analyzed canonical ROM range 0x0830FC29-0x0830FC2D
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x06, 0x06, 0x06, 0x06, 0x05
	@ pret/pokeemerald-jp direct xref for 0x0830FC2E: berry_blender.s: Blender_PrintBlendingResults
	.globl gBerryBlenderData_0830FC2E
gBerryBlenderData_0830FC2E: @ 0x0830FC2E
	@ analyzed canonical ROM range 0x0830FC2E-0x0830FC32
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x03, 0x03, 0x03, 0x02, 0x02
	@ pret/pokeemerald-jp direct xref for 0x0830FC33: berry_blender.s: Blender_PrintBlendingRanking
	.globl gBerryBlenderData_0830FC33
gBerryBlenderData_0830FC33: @ 0x0830FC33
	@ analyzed canonical ROM range 0x0830FC33-0x0830FC37
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0x03, 0x03, 0x03, 0x03, 0x02

	@ src/berry_blender.c:315 sText_BlenderMaxSpeedRecord
	.globl sText_BlenderMaxSpeedRecord
sText_BlenderMaxSpeedRecord: @ 0x0830FC38
	.string "きのみブレンダー\nさいこうそくど ランキング！{EOS}"
	.if (. - sText_BlenderMaxSpeedRecord) > 0x18
	.error "sText_BlenderMaxSpeedRecord may not grow beyond its original slot"
	.endif
	.if (. - sText_BlenderMaxSpeedRecord) < 0x18
	.space 0x18 - (. - sText_BlenderMaxSpeedRecord)
	.endif

	@ src/berry_blender.c:316 sText_234Players
	.globl sText_234Players
sText_234Players: @ 0x0830FC50
	.string "ふたり\nさんにん\nよにん{EOS}"
	.if (. - sText_234Players) > 0xd
	.error "sText_234Players may not grow beyond its original slot"
	.endif
	.if (. - sText_234Players) < 0xd
	.space 0xd - (. - sText_234Players)
	.endif
	.space 0x3, 0x00
.elseif .L__inc_fragment_select_692f753bcdb8 == 7

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C983E
gText_Rom_5C983E: @ 0x085C983E
	.string "からい{EOS}"
	.if (. - gText_Rom_5C983E) > 0x4
	.error "gText_Rom_5C983E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C983E) < 0x4
	.space 0x4 - (. - gText_Rom_5C983E)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C9842
gText_Rom_5C9842: @ 0x085C9842
	.string "しぶい{EOS}"
	.if (. - gText_Rom_5C9842) > 0x4
	.error "gText_Rom_5C9842 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9842) < 0x4
	.space 0x4 - (. - gText_Rom_5C9842)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+3 aliases)
	.globl gText_Rom_5C9846
gText_Rom_5C9846: @ 0x085C9846
	.string "あまい{EOS}"
	.if (. - gText_Rom_5C9846) > 0x4
	.error "gText_Rom_5C9846 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9846) < 0x4
	.space 0x4 - (. - gText_Rom_5C9846)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984A
gText_Rom_5C984A: @ 0x085C984A
	.string "にがい{EOS}"
	.if (. - gText_Rom_5C984A) > 0x4
	.error "gText_Rom_5C984A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984A) < 0x4
	.space 0x4 - (. - gText_Rom_5C984A)
	.endif

	@ src/berry_blender.c:919 berry_blender_line_919 (+2 aliases)
	.globl gText_Rom_5C984E
gText_Rom_5C984E: @ 0x085C984E
	.string "すっぱい{EOS}"
	.if (. - gText_Rom_5C984E) > 0x5
	.error "gText_Rom_5C984E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C984E) < 0x5
	.space 0x5 - (. - gText_Rom_5C984E)
	.endif
.endif
