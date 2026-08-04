	@ asm/trainer_card.s:3231 PrintPokeblocksNumOnCard
	.globl gText_Rom_5CC3CF
gText_Rom_5CC3CF: @ 0x085CC3CF
	.string "{0xFD}{0x02}{COLOR}{0x02}{SHADOW}{0x03}こ$"
	.if (. - gText_Rom_5CC3CF) > 0xa
	.error "gText_Rom_5CC3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3CF) < 0xa
	.space 0xa - (. - gText_Rom_5CC3CF)
	.endif
	.globl gUnknown_85CC3D9
gUnknown_85CC3D9: @ 0x085CC3D9

	@ src/strings.c:689 gText_WonContestsWFriends
	.globl gText_Rom_5CC3D9
gText_Rom_5CC3D9: @ 0x085CC3D9
	.string "ともだちとコンテスト ゆうしょう$"
	.if (. - gText_Rom_5CC3D9) > 0x11
	.error "gText_Rom_5CC3D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3D9) < 0x11
	.space 0x11 - (. - gText_Rom_5CC3D9)
	.endif
	.globl gUnknown_85CC3EA
gUnknown_85CC3EA: @ 0x085CC3EA

	@ src/strings.c:690 gText_BattlePtsWon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC3EA
gText_Rom_5CC3EA: @ 0x085CC3EA
	.string "かちとった バトルポイント$"
	.if (. - gText_Rom_5CC3EA) != 0xe
	.error "gText_Rom_5CC3EA must retain its original byte length"
	.endif
	.globl gText_Rom_5CC3F0
	.set gText_Rom_5CC3F0, gText_Rom_5CC3EA + 0x6
	.globl gText_Rom_5CC3F3
	.set gText_Rom_5CC3F3, gText_Rom_5CC3EA + 0x9
	.globl gUnknown_85CC3F8
gUnknown_85CC3F8: @ 0x085CC3F8

	@ src/strings.c:691 gText_NumBP
	.globl gText_Rom_5CC3F8
gText_Rom_5CC3F8: @ 0x085CC3F8
	.string "{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}BP$"
	.if (. - gText_Rom_5CC3F8) > 0xb
	.error "gText_Rom_5CC3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3F8) < 0xb
	.space 0xb - (. - gText_Rom_5CC3F8)
	.endif
	.globl gUnknown_85CC403
gUnknown_85CC403: @ 0x085CC403
	.incbin "baserom.gba", 0x5cc403, 0x15
	.globl gUnknown_85CC418
gUnknown_85CC418: @ 0x085CC418

	@ asm/trainer_card.s:3446 PrintBattleFacilityNumsOnCard
	.globl gText_Rom_5CC418
gText_Rom_5CC418: @ 0x085CC418
	.string "{0xFD}{0x02}　　　　　　{0xFD}{0x03}$"
	.if (. - gText_Rom_5CC418) > 0xb
	.error "gText_Rom_5CC418 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC418) < 0xb
	.space 0xb - (. - gText_Rom_5CC418)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+5 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC423
gText_Rom_5CC423: @ 0x085CC423
	.string "バトルタワー$"
	.if (. - gText_Rom_5CC423) != 0x7
	.error "gText_Rom_5CC423 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC426
	.set gText_Rom_5CC426, gText_Rom_5CC423 + 0x3

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC42A
gText_Rom_5CC42A: @ 0x085CC42A
	.string "バトルドーム$"
	.if (. - gText_Rom_5CC42A) > 0x7
	.error "gText_Rom_5CC42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC42A) < 0x7
	.space 0x7 - (. - gText_Rom_5CC42A)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC431
gText_Rom_5CC431: @ 0x085CC431
	.string "バトルパレス$"
	.if (. - gText_Rom_5CC431) > 0x7
	.error "gText_Rom_5CC431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC431) < 0x7
	.space 0x7 - (. - gText_Rom_5CC431)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC438
gText_Rom_5CC438: @ 0x085CC438
	.string "バトルファクトリー$"
	.if (. - gText_Rom_5CC438) > 0xa
	.error "gText_Rom_5CC438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC438) < 0xa
	.space 0xa - (. - gText_Rom_5CC438)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC442
gText_Rom_5CC442: @ 0x085CC442
	.string "バトルアリーナ$"
	.if (. - gText_Rom_5CC442) > 0x8
	.error "gText_Rom_5CC442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC442) < 0x8
	.space 0x8 - (. - gText_Rom_5CC442)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC44A
gText_Rom_5CC44A: @ 0x085CC44A
	.string "バトルチューブ$"
	.if (. - gText_Rom_5CC44A) > 0x8
	.error "gText_Rom_5CC44A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC44A) < 0x8
	.space 0x8 - (. - gText_Rom_5CC44A)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC452
gText_Rom_5CC452: @ 0x085CC452
	.string "バトルピラミッド$"
	.if (. - gText_Rom_5CC452) > 0x9
	.error "gText_Rom_5CC452 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC452) < 0x9
	.space 0x9 - (. - gText_Rom_5CC452)
	.endif
	.space 0x1, 0x00

	@ src/strings.c:702 gText_FacilitySingle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC45C
gText_Rom_5CC45C: @ 0x085CC45C
	.string "{STR_VAR_1} シングル$"
	.if (. - gText_Rom_5CC45C) != 0x8
	.error "gText_Rom_5CC45C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC45F
	.set gText_Rom_5CC45F, gText_Rom_5CC45C + 0x3

	@ src/strings.c:703 gText_FacilityDouble
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC464
gText_Rom_5CC464: @ 0x085CC464
	.string "{STR_VAR_1} ダブル$"
	.if (. - gText_Rom_5CC464) != 0x7
	.error "gText_Rom_5CC464 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC467
	.set gText_Rom_5CC467, gText_Rom_5CC464 + 0x3
	.space 0x1, 0x00

	@ src/strings.c:704 gText_FacilityMulti
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC46C
gText_Rom_5CC46C: @ 0x085CC46C
	.string "{STR_VAR_1} マルチ$"
	.if (. - gText_Rom_5CC46C) != 0x7
	.error "gText_Rom_5CC46C must retain its original byte length"
	.endif
	.globl gText_Rom_5CC46F
	.set gText_Rom_5CC46F, gText_Rom_5CC46C + 0x3
	.space 0x1, 0x00

	@ src/strings.c:705 gText_FacilityLink
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CC474
gText_Rom_5CC474: @ 0x085CC474
	.string "{STR_VAR_1} つうしん$"
	.if (. - gText_Rom_5CC474) != 0x8
	.error "gText_Rom_5CC474 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC477
	.set gText_Rom_5CC477, gText_Rom_5CC474 + 0x3
	.incbin "baserom.gba", 0x5cc47c, 0x3
	.globl gUnknown_85CC47F
gUnknown_85CC47F: @ 0x085CC47F

	@ src/strings.c:708 gText_Give
	.globl gText_Rom_5CC47F
gText_Rom_5CC47F: @ 0x085CC47F
	.string "もたせるべき$"
	.if (. - gText_Rom_5CC47F) > 0x7
	.error "gText_Rom_5CC47F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC47F) < 0x7
	.space 0x7 - (. - gText_Rom_5CC47F)
	.endif
	.globl gUnknown_85CC486
gUnknown_85CC486: @ 0x085CC486

	@ src/strings.c:709 gText_NoNeed
	.globl gText_Rom_5CC486
gText_Rom_5CC486: @ 0x085CC486
	.string "もたせない$"
	.if (. - gText_Rom_5CC486) > 0x6
	.error "gText_Rom_5CC486 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC486) < 0x6
	.space 0x6 - (. - gText_Rom_5CC486)
	.endif
	.globl gUnknown_85CC48C
gUnknown_85CC48C: @ 0x085CC48C

