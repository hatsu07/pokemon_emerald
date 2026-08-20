	@ src/battle_dome.c:899 battle_dome_line_899
	.globl gText_Rom_273C56
gText_Rom_273C56: @ 0x08273C56
	.string "きょうりょくな わざで どんどん おしまくる。{EOS}"
	.if (. - gText_Rom_273C56) > 0x18
	.error "gText_Rom_273C56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C56) < 0x18
	.space 0x18 - (. - gText_Rom_273C56)
	.endif
