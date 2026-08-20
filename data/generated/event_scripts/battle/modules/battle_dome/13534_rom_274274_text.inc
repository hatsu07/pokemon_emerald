	@ src/battle_dome.c:993 battle_dome_line_993
	.globl gText_Rom_274274
gText_Rom_274274: @ 0x08274274
	.string " 2かいせん だい4しあい{EOS}"
	.if (. - gText_Rom_274274) > 0xe
	.error "gText_Rom_274274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274274) < 0xe
	.space 0xe - (. - gText_Rom_274274)
	.endif
