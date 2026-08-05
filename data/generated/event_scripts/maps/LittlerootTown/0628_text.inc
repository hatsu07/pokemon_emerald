	@ data/maps/LittlerootTown/scripts.inc:1004 LittlerootTown_Text_PlayersHouse
	.globl gText_Rom_1E46D6
gText_Rom_1E46D6: @ 0x081E46D6
	.string "「{PLAYER}の いえ」$"
	.if (. - gText_Rom_1E46D6) > 0x9
	.error "gText_Rom_1E46D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E46D6) < 0x9
	.space 0x9 - (. - gText_Rom_1E46D6)
	.endif
