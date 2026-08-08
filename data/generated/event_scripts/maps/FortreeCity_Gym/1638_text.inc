	@ data/maps/FortreeCity_Gym/scripts.inc:172 FortreeCity_Gym_Text_EdwardoDefeat (+1 aliases)
	.globl gText_Rom_2046D8
gText_Rom_2046D8: @ 0x082046D8
	.string "オレには にが おもすぎたか……!$"
	.if (. - gText_Rom_2046D8) > 0x12
	.error "gText_Rom_2046D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2046D8) < 0x12
	.space 0x12 - (. - gText_Rom_2046D8)
	.endif
