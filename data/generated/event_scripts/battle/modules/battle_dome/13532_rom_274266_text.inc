	@ src/battle_dome.c:992 battle_dome_line_992
	.globl gText_Rom_274266
gText_Rom_274266: @ 0x08274266
	.string " 2かいせん だい3しあい{EOS}"
	.if (. - gText_Rom_274266) > 0xe
	.error "gText_Rom_274266 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274266) < 0xe
	.space 0xe - (. - gText_Rom_274266)
	.endif
