	@ src/battle_dome.c:985 battle_dome_line_985
	.globl gText_Rom_274204
gText_Rom_274204: @ 0x08274204
	.string " 1かいせん だい4しあい{EOS}"
	.if (. - gText_Rom_274204) > 0xe
	.error "gText_Rom_274204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274204) < 0xe
	.space 0xe - (. - gText_Rom_274204)
	.endif
