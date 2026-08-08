	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:84 SootopolisCity_Gym_B1F_Text_ConnieDefeat (+1 aliases)
	.globl gText_Rom_20ED1B
gText_Rom_20ED1B: @ 0x0820ED1B
	.string "なんだ\nつよいんだ$"
	.if (. - gText_Rom_20ED1B) > 0xa
	.error "gText_Rom_20ED1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20ED1B) < 0xa
	.space 0xa - (. - gText_Rom_20ED1B)
	.endif
