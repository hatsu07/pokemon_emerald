	@ src/battle_dome.c:988 battle_dome_line_988
	.globl gText_Rom_27422E
gText_Rom_27422E: @ 0x0827422E
	.string " 1かいせん だい7しあい{EOS}"
	.if (. - gText_Rom_27422E) > 0xe
	.error "gText_Rom_27422E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27422E) < 0xe
	.space 0xe - (. - gText_Rom_27422E)
	.endif
