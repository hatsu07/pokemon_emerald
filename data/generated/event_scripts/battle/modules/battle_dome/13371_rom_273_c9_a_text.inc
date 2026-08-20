	@ src/battle_dome.c:902 battle_dome_line_902
	.globl gText_Rom_273C9A
gText_Rom_273C9A: @ 0x08273C9A
	.string "にんきの ある わざを たくさん つかう。{EOS}"
	.if (. - gText_Rom_273C9A) > 0x16
	.error "gText_Rom_273C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C9A) < 0x16
	.space 0x16 - (. - gText_Rom_273C9A)
	.endif
