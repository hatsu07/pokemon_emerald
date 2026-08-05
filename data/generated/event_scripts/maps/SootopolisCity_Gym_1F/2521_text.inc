	@ data/maps/SootopolisCity_Gym_1F/scripts.inc:221 SootopolisCity_Gym_1F_Text_JuanRematchDefeat (+1 aliases)
	.globl gText_Rom_20E97B
gText_Rom_20E97B: @ 0x0820E97B
	.string "たははは! ユー アー ウィナー!\nまたしても わたくしの まけです$"
	.if (. - gText_Rom_20E97B) > 0x23
	.error "gText_Rom_20E97B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20E97B) < 0x23
	.space 0x23 - (. - gText_Rom_20E97B)
	.endif
