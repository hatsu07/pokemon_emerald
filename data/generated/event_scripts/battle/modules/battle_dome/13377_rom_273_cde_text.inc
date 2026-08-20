	@ src/battle_dome.c:905 battle_dome_line_905
	.globl gText_Rom_273CDE
gText_Rom_273CDE: @ 0x08273CDE
	.string "はでな わざを つかって どんどん せめる。{EOS}"
	.if (. - gText_Rom_273CDE) > 0x17
	.error "gText_Rom_273CDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CDE) < 0x17
	.space 0x17 - (. - gText_Rom_273CDE)
	.endif
