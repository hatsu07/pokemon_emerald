	@ data/maps/FortreeCity_Gym/scripts.inc:156 FortreeCity_Gym_Text_JaredDefeat (+1 aliases)
	.globl gText_Rom_204638
gText_Rom_204638: @ 0x08204638
	.string "きみ…… つよいんだな……$"
	.if (. - gText_Rom_204638) > 0xe
	.error "gText_Rom_204638 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_204638) < 0xe
	.space 0xe - (. - gText_Rom_204638)
	.endif
