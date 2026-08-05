	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:111 SootopolisCity_Gym_B1F_Text_TiffanyDefeat (+1 aliases)
	.globl gText_Rom_20EE74
gText_Rom_20EE74: @ 0x0820EE74
	.string "ちょっとー!?$"
	.if (. - gText_Rom_20EE74) > 0x8
	.error "gText_Rom_20EE74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EE74) < 0x8
	.space 0x8 - (. - gText_Rom_20EE74)
	.endif
