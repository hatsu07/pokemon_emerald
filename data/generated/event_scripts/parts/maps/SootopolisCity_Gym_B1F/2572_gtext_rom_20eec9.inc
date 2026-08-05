	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:120 SootopolisCity_Gym_B1F_Text_BethanyDefeat (+1 aliases)
	.globl gText_Rom_20EEC9
gText_Rom_20EEC9: @ 0x0820EEC9
	.string "あっ!$"
	.if (. - gText_Rom_20EEC9) > 0x4
	.error "gText_Rom_20EEC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EEC9) < 0x4
	.space 0x4 - (. - gText_Rom_20EEC9)
	.endif
