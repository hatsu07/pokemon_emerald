	@ src/battle_dome.c:909 battle_dome_line_909
	.globl gText_Rom_273D38
gText_Rom_273D38: @ 0x08273D38
	.string "ついかこうかが ある わざを よく つかう。{EOS}"
	.if (. - gText_Rom_273D38) > 0x17
	.error "gText_Rom_273D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D38) < 0x17
	.space 0x17 - (. - gText_Rom_273D38)
	.endif
