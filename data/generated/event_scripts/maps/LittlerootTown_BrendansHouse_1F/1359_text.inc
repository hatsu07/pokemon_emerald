	@ data/maps/LittlerootTown_BrendansHouse_1F/scripts.inc:346 PlayersHouse_1F_Text_DontPushYourselfTooHard
	.globl gText_Rom_1EFC59
gText_Rom_1EFC59: @ 0x081EFC59
	.string "あんまり むりは しないでね\nなにか あれば かえって くればいいから\pじゃあ がんばってね!$"
	.if (. - gText_Rom_1EFC59) > 0x30
	.error "gText_Rom_1EFC59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EFC59) < 0x30
	.space 0x30 - (. - gText_Rom_1EFC59)
	.endif
