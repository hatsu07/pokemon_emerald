	@ pret/pokeemerald-jp direct xref for 0x085CC403: trainer_card.s: sub_080C395C
	.globl gTrainerCardData_085CC403
gTrainerCardData_085CC403: @ 0x085CC403
	@ analyzed canonical ROM range 0x085CC403-0x085CC417
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x15 bytes=21
	.byte 0x96, 0x64, 0x79, 0x60, 0x7C, 0xAE, 0x00, 0x00, 0x06, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x06, 0x11, 0x17, 0x07, 0xFF
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
	.globl gStdString_BattleTower
gStdString_BattleTower: @ 0x085CC423
	.string "バトルタワー{EOS}"
	.if (. - gStdString_BattleTower) != 0x7
	.error "gStdString_BattleTower must retain its original byte length"
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattleDome
gStdString_BattleDome: @ 0x085CC42A
	.string "バトルドーム{EOS}"
	.if (. - gStdString_BattleDome) > 0x7
	.error "gStdString_BattleDome may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattleDome) < 0x7
	.space 0x7 - (. - gStdString_BattleDome)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattlePalace
gStdString_BattlePalace: @ 0x085CC431
	.string "バトルパレス{EOS}"
	.if (. - gStdString_BattlePalace) > 0x7
	.error "gStdString_BattlePalace may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattlePalace) < 0x7
	.space 0x7 - (. - gStdString_BattlePalace)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattleFactory
gStdString_BattleFactory: @ 0x085CC438
	.string "バトルファクトリー{EOS}"
	.if (. - gStdString_BattleFactory) > 0xa
	.error "gStdString_BattleFactory may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattleFactory) < 0xa
	.space 0xa - (. - gStdString_BattleFactory)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattleArena
gStdString_BattleArena: @ 0x085CC442
	.string "バトルアリーナ{EOS}"
	.if (. - gStdString_BattleArena) > 0x8
	.error "gStdString_BattleArena may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattleArena) < 0x8
	.space 0x8 - (. - gStdString_BattleArena)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattlePike
gStdString_BattlePike: @ 0x085CC44A
	.string "バトルチューブ{EOS}"
	.if (. - gStdString_BattlePike) > 0x8
	.error "gStdString_BattlePike may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattlePike) < 0x8
	.space 0x8 - (. - gStdString_BattlePike)
	.endif

	@ asm/match_call.s:2001 PopulateBattleFrontierFacilityName (+2 aliases)
	.globl gStdString_BattlePyramid
gStdString_BattlePyramid: @ 0x085CC452
	.string "バトルピラミッド{EOS}"
	.if (. - gStdString_BattlePyramid) > 0x9
	.error "gStdString_BattlePyramid may not grow beyond its original slot"
	.endif
	.if (. - gStdString_BattlePyramid) < 0x9
	.space 0x9 - (. - gStdString_BattlePyramid)
	.endif
	.space 0x1, 0x00
