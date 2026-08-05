	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:93 SootopolisCity_Gym_B1F_Text_BridgetDefeat (+1 aliases)
	.globl gText_Rom_20ED8D
gText_Rom_20ED8D: @ 0x0820ED8D
	.string "なんて レベルの たかい……$"
	.if (. - gText_Rom_20ED8D) > 0xf
	.error "gText_Rom_20ED8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED8D) < 0xf
	.space 0xf - (. - gText_Rom_20ED8D)
	.endif
