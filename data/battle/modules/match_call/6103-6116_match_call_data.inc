	@ pret/pokeemerald-jp direct xref for 0x085CC403: trainer_card.s: sub_080C395C
	.globl gTrainerCardData_085CC403
gTrainerCardData_085CC403: @ 0x085CC403
	@ analyzed canonical ROM range 0x085CC403-0x085CC417
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x15 bytes=21
	.byte 0x96, 0x64, 0x79, 0x60, 0x7C, 0xAE, 0x00, 0x00, 0x06, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x06, 0x11, 0x17, 0x07, 0xFF
	.globl gText_Rom_5CC418
	@ asm/trainer_card.s:3446 PrintBattleFacilityNumsOnCard
	.globl gText_Rom_5CC418
gText_Rom_5CC418: @ 0x085CC418
	.string "{0xFD}{0x02}　　　　　　{0xFD}{0x03}{EOS}"
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
	.string "バトルタワー{EOS}"
	.if (. - gText_Rom_5CC423) != 0x7
	.error "gText_Rom_5CC423 must retain its original byte length"
	.endif
	.globl gText_Rom_5CC426
	.set gText_Rom_5CC426, gText_Rom_5CC423 + 0x3

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC42A
gText_Rom_5CC42A: @ 0x085CC42A
	.string "バトルドーム{EOS}"
	.if (. - gText_Rom_5CC42A) > 0x7
	.error "gText_Rom_5CC42A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC42A) < 0x7
	.space 0x7 - (. - gText_Rom_5CC42A)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC431
gText_Rom_5CC431: @ 0x085CC431
	.string "バトルパレス{EOS}"
	.if (. - gText_Rom_5CC431) > 0x7
	.error "gText_Rom_5CC431 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC431) < 0x7
	.space 0x7 - (. - gText_Rom_5CC431)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC438
gText_Rom_5CC438: @ 0x085CC438
	.string "バトルファクトリー{EOS}"
	.if (. - gText_Rom_5CC438) > 0xa
	.error "gText_Rom_5CC438 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC438) < 0xa
	.space 0xa - (. - gText_Rom_5CC438)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC442
gText_Rom_5CC442: @ 0x085CC442
	.string "バトルアリーナ{EOS}"
	.if (. - gText_Rom_5CC442) > 0x8
	.error "gText_Rom_5CC442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC442) < 0x8
	.space 0x8 - (. - gText_Rom_5CC442)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC44A
gText_Rom_5CC44A: @ 0x085CC44A
	.string "バトルチューブ{EOS}"
	.if (. - gText_Rom_5CC44A) > 0x8
	.error "gText_Rom_5CC44A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC44A) < 0x8
	.space 0x8 - (. - gText_Rom_5CC44A)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gText_Rom_5CC452
gText_Rom_5CC452: @ 0x085CC452
	.string "バトルピラミッド{EOS}"
	.if (. - gText_Rom_5CC452) > 0x9
	.error "gText_Rom_5CC452 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC452) < 0x9
	.space 0x9 - (. - gText_Rom_5CC452)
	.endif
	.space 0x1, 0x00
