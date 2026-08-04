	@ src/data/trainers.h:43075 trainers_line_43075 (+4 aliases)
	.globl gText_Rom_5F7393
gText_Rom_5F7393: @ 0x085F7393
	.string "ダイゴ$"
	.if (. - gText_Rom_5F7393) > 0x4
	.error "gText_Rom_5F7393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7393) < 0x4
	.space 0x4 - (. - gText_Rom_5F7393)
	.endif

	@ src/pokenav_match_call_data.c:274 gText_MayBrendanMatchCallDesc
	.globl gText_Rom_5F7397
gText_Rom_5F7397: @ 0x085F7397
	.string "おとなりさん$"
	.if (. - gText_Rom_5F7397) > 0x7
	.error "gText_Rom_5F7397 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7397) < 0x7
	.space 0x7 - (. - gText_Rom_5F7397)
	.endif

	@ src/pokenav_match_call_data.c:208 pokenav_match_call_data_line_208
	.globl gText_Rom_5F739E
gText_Rom_5F739E: @ 0x085F739E
	.string "つよくてたのもしい$"
	.if (. - gText_Rom_5F739E) > 0xa
	.error "gText_Rom_5F739E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F739E) < 0xa
	.space 0xa - (. - gText_Rom_5F739E)
	.endif

	@ src/pokenav_match_call_data.c:245 pokenav_match_call_data_line_245
	.globl gText_Rom_5F73A8
gText_Rom_5F73A8: @ 0x085F73A8
	.string "やさしくてきれい$"
	.if (. - gText_Rom_5F73A8) > 0x9
	.error "gText_Rom_5F73A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73A8) < 0x9
	.space 0x9 - (. - gText_Rom_5F73A8)
	.endif

	@ src/pokenav_match_call_data.c:336 pokenav_match_call_data_line_336
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73B1
gText_Rom_5F73B1: @ 0x085F73B1
	.string "ポケモンがだいすき$"
	.if (. - gText_Rom_5F73B1) != 0xa
	.error "gText_Rom_5F73B1 must retain its original byte length"
	.endif
	.globl gText_Rom_5F73B6
	.set gText_Rom_5F73B6, gText_Rom_5F73B1 + 0x5
	.incbin "baserom.gba", 0x5f73bb, 0x6

	@ src/pokenav_match_call_data.c:360 pokenav_match_call_data_line_360
	.globl gText_Rom_5F73C1
gText_Rom_5F73C1: @ 0x085F73C1
	.string "しんしゅつきぼつ$"
	.if (. - gText_Rom_5F73C1) > 0x9
	.error "gText_Rom_5F73C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73C1) < 0x9
	.space 0x9 - (. - gText_Rom_5F73C1)
	.endif

	@ src/fame_checker.c:517 sText_FameCheckerName_Scott (+1 aliases)
	.globl gText_Rom_5F73CA
gText_Rom_5F73CA: @ 0x085F73CA
	.string "エニシダ$"
	.if (. - gText_Rom_5F73CA) > 0x5
	.error "gText_Rom_5F73CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CA) < 0x5
	.space 0x5 - (. - gText_Rom_5F73CA)
	.endif

	@ src/pokenav_match_call_data.c:380 pokenav_match_call_data_line_380
	.globl gText_Rom_5F73CF
gText_Rom_5F73CF: @ 0x085F73CF
	.string "いわのゆうとうせい$"
	.if (. - gText_Rom_5F73CF) > 0xa
	.error "gText_Rom_5F73CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73CF) < 0xa
	.space 0xa - (. - gText_Rom_5F73CF)
	.endif

	@ src/pokenav_match_call_data.c:397 pokenav_match_call_data_line_397
	.globl gText_Rom_5F73D9
gText_Rom_5F73D9: @ 0x085F73D9
	.string "ビッグなウェーブ$"
	.if (. - gText_Rom_5F73D9) > 0x9
	.error "gText_Rom_5F73D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73D9) < 0x9
	.space 0x9 - (. - gText_Rom_5F73D9)
	.endif

	@ src/pokenav_match_call_data.c:414 pokenav_match_call_data_line_414
	.globl gText_Rom_5F73E2
gText_Rom_5F73E2: @ 0x085F73E2
	.string "でんげきおやじ$"
	.if (. - gText_Rom_5F73E2) > 0x8
	.error "gText_Rom_5F73E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73E2) < 0x8
	.space 0x8 - (. - gText_Rom_5F73E2)
	.endif

	@ src/pokenav_match_call_data.c:431 pokenav_match_call_data_line_431
	.globl gText_Rom_5F73EA
gText_Rom_5F73EA: @ 0x085F73EA
	.string "じょうねつのひと$"
	.if (. - gText_Rom_5F73EA) > 0x9
	.error "gText_Rom_5F73EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73EA) < 0x9
	.space 0x9 - (. - gText_Rom_5F73EA)
	.endif

	@ src/pokenav_match_call_data.c:448 pokenav_match_call_data_line_448
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F73F3
gText_Rom_5F73F3: @ 0x085F73F3
	.string "せかいのとりつかい$"
	.if (. - gText_Rom_5F73F3) != 0xa
	.error "gText_Rom_5F73F3 must retain its original byte length"
	.endif
	.globl gText_Rom_5F73F7
	.set gText_Rom_5F73F7, gText_Rom_5F73F3 + 0x4

	@ src/pokenav_match_call_data.c:465 pokenav_match_call_data_line_465
	.globl gText_Rom_5F73FD
gText_Rom_5F73FD: @ 0x085F73FD
	.string "しんぴてきなコンビ$"
	.if (. - gText_Rom_5F73FD) > 0xa
	.error "gText_Rom_5F73FD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F73FD) < 0xa
	.space 0xa - (. - gText_Rom_5F73FD)
	.endif

	@ src/pokenav_match_call_data.c:482 pokenav_match_call_data_line_482
	.globl gText_Rom_5F7407
gText_Rom_5F7407: @ 0x085F7407
	.string "みわくのダンディ$"
	.if (. - gText_Rom_5F7407) > 0x9
	.error "gText_Rom_5F7407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7407) < 0x9
	.space 0x9 - (. - gText_Rom_5F7407)
	.endif

	@ src/battle_main.c:333 battle_main_line_333 (+2 aliases)
	.globl gText_Rom_5F7410
gText_Rom_5F7410: @ 0x085F7410
	.string "してんのう$"
	.if (. - gText_Rom_5F7410) > 0x6
	.error "gText_Rom_5F7410 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7410) < 0x6
	.space 0x6 - (. - gText_Rom_5F7410)
	.endif

	@ src/battle_main.c:340 battle_main_line_340 (+2 aliases)
	.globl gText_Rom_5F7416
gText_Rom_5F7416: @ 0x085F7416
	.string "チャンピオン$"
	.if (. - gText_Rom_5F7416) > 0x7
	.error "gText_Rom_5F7416 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7416) < 0x7
	.space 0x7 - (. - gText_Rom_5F7416)
	.endif

	@ src/battle_main.c:409 battle_main_line_409 (+1 aliases)
	.globl gText_Rom_5F741D
gText_Rom_5F741D: @ 0x085F741D
	.string "ポケモンはかせ$"
	.if (. - gText_Rom_5F741D) > 0x8
	.error "gText_Rom_5F741D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F741D) < 0x8
	.space 0x8 - (. - gText_Rom_5F741D)
	.endif
	.incbin "baserom.gba", 0x5f7425, 0x58f
	.globl gUnknown_85F79B4
gUnknown_85F79B4: @ 0x085F79B4
	.incbin "baserom.gba", 0x5f79b4, 0x54
	.globl gUnknown_85F7A08
gUnknown_85F7A08: @ 0x085F7A08
	.4byte MatchCallGetFlag_Type0
	.4byte MatchCallGetFlag_Type1
	.4byte MatchCallGetFlag_Type2
	.4byte MatchCallGetFlag_Type4
	.4byte MatchCallGetFlag_Type3
	.globl gUnknown_85F7A1C
gUnknown_85F7A1C: @ 0x085F7A1C
	.4byte MatchCallGetMapSec_Type0
	.4byte MatchCallGetMapSec_Type1
	.4byte MatchCallGetMapSec_Type2
	.4byte MatchCallGetMapSec_Type4
	.4byte MatchCallGetMapSec_Type3
	.globl gUnknown_85F7A30
gUnknown_85F7A30: @ 0x085F7A30
	.4byte MatchCall_IsRematchable_Type3
	.4byte MatchCall_IsRematchable_Type1
	.4byte MatchCall_IsRematchable_Type2
	.4byte MatchCall_IsRematchable_Type4
	.4byte sub_081D0F00
	.globl gUnknown_85F7A44
gUnknown_85F7A44: @ 0x085F7A44
	.4byte sub_081D0F5C
	.4byte sub_081D0F60
	.4byte sub_081D0F64
	.4byte sub_081D0F68
	.4byte MatchCall_IsRematchable_Type0
	.globl gUnknown_85F7A58
gUnknown_85F7A58: @ 0x085F7A58
	.4byte MatchCall_GetRematchTableIdx_Type3
	.4byte MatchCall_GetRematchTableIdx_Type1
	.4byte MatchCall_GetRematchTableIdx_Type2
	.4byte MatchCall_GetRematchTableIdx_Type4
	.4byte MatchCall_GetRematchTableIdx_Type0
	.globl gUnknown_85F7A6C
gUnknown_85F7A6C: @ 0x085F7A6C
	.4byte MatchCall_GetMessage_Type0
	.4byte MatchCall_GetMessage_Type1
	.4byte MatchCall_GetMessage_Type2
	.4byte MatchCall_GetMessage_Type4
	.4byte MatchCall_GetMessage_Type3
	.globl gUnknown_85F7A80
gUnknown_85F7A80: @ 0x085F7A80
	.4byte MatchCall_GetNameAndDesc_Type3
	.4byte MatchCall_GetNameAndDesc_Type1
	.4byte MatchCall_GetNameAndDesc_Type2
	.4byte MatchCall_GetNameAndDesc_Type4
	.4byte MatchCall_GetNameAndDesc_Type0
	.globl gUnknown_85F7A94
gUnknown_85F7A94: @ 0x085F7A94
	.incbin "baserom.gba", 0x5f7a94, 0x60
	.globl gUnknown_85F7AF4
gUnknown_85F7AF4: @ 0x085F7AF4
	.incbin "baserom.gba", 0x5f7af4, 0x18
	.globl gUnknown_85F7B0C
gUnknown_85F7B0C: @ 0x085F7B0C
	.incbin "baserom.gba", 0x5f7b0c, 0xc
	.globl gUnknown_85F7B18
gUnknown_85F7B18: @ 0x085F7B18
	.incbin "baserom.gba", 0x5f7b18, 0x100
	.globl gUnknown_85F7C18
gUnknown_85F7C18: @ 0x085F7C18
	.incbin "baserom.gba", 0x5f7c18, 0x30
	.globl gUnknown_85F7C48
gUnknown_85F7C48: @ 0x085F7C48
	.incbin "baserom.gba", 0x5f7c48, 0x8
	.globl gUnknown_85F7C50
gUnknown_85F7C50: @ 0x085F7C50

	@ src/strings.c:391 gText_BattleMoves
	.globl gText_Rom_5F7C50
gText_Rom_5F7C50: @ 0x085F7C50
	.string "たたかうわざ$"
	.if (. - gText_Rom_5F7C50) > 0x7
	.error "gText_Rom_5F7C50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C50) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C50)
	.endif
	.globl gUnknown_85F7C57
gUnknown_85F7C57: @ 0x085F7C57

	@ src/strings.c:392 gText_ContestMoves (+1 aliases)
	.globl gText_Rom_5F7C57
gText_Rom_5F7C57: @ 0x085F7C57
	.string "コンテストわざ$"
	.if (. - gText_Rom_5F7C57) > 0x8
	.error "gText_Rom_5F7C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C57) < 0x8
	.space 0x8 - (. - gText_Rom_5F7C57)
	.endif
	.globl gUnknown_85F7C5F
gUnknown_85F7C5F: @ 0x085F7C5F

