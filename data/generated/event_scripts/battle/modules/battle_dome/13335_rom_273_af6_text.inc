	@ src/battle_dome.c:884 battle_dome_line_884
	.globl gText_Rom_273AF6
gText_Rom_273AF6: @ 0x08273AF6
	.string "ちょうきせんでの ねばりが とても とくい。{EOS}"
	.if (. - gText_Rom_273AF6) > 0x17
	.error "gText_Rom_273AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AF6) < 0x17
	.space 0x17 - (. - gText_Rom_273AF6)
	.endif
