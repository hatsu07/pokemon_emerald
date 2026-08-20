	@ src/battle_dome.c:987 battle_dome_line_987
	.globl gText_Rom_274220
gText_Rom_274220: @ 0x08274220
	.string " 1かいせん だい6しあい{EOS}"
	.if (. - gText_Rom_274220) > 0xe
	.error "gText_Rom_274220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274220) < 0xe
	.space 0xe - (. - gText_Rom_274220)
	.endif
