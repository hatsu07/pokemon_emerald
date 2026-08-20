	@ src/battle_dome.c:901 battle_dome_line_901
	.globl gText_Rom_273C85
gText_Rom_273C85: @ 0x08273C85
	.string "あいてが いやがる たたかいが とくい。{EOS}"
	.if (. - gText_Rom_273C85) > 0x15
	.error "gText_Rom_273C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C85) < 0x15
	.space 0x15 - (. - gText_Rom_273C85)
	.endif
