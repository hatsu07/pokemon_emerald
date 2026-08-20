	@ data/maps/SootopolisCity_Gym_B1F/scripts.inc:54 SootopolisCity_Gym_B1F_Text_AndreaIntro (+1 aliases)
	.globl gText_Rom_20EBAD
gText_Rom_20EBAD: @ 0x0820EBAD
	.string "ジムリーダー アダンさまに おしえてもらった\nかれいな テクニックを みせたげる!{EOS}"
	.if (. - gText_Rom_20EBAD) > 0x2a
	.error "gText_Rom_20EBAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20EBAD) < 0x2a
	.space 0x2a - (. - gText_Rom_20EBAD)
	.endif
