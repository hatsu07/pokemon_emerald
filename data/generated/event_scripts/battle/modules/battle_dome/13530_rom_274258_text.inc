	@ src/battle_dome.c:991 battle_dome_line_991
	.globl gText_Rom_274258
gText_Rom_274258: @ 0x08274258
	.string " 2かいせん だい2しあい{EOS}"
	.if (. - gText_Rom_274258) > 0xe
	.error "gText_Rom_274258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274258) < 0xe
	.space 0xe - (. - gText_Rom_274258)
	.endif
