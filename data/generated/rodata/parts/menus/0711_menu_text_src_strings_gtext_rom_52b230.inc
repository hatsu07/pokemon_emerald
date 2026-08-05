	@ src/strings.c:926 gText_NumPlayerLink
	.globl gText_Rom_52B230
gText_Rom_52B230: @ 0x0852B230
	.string "{STR_VAR_1}にん せつぞく$"
	.if (. - gText_Rom_52B230) > 0xa
	.error "gText_Rom_52B230 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B230) < 0xa
	.space 0xa - (. - gText_Rom_52B230)
	.endif
	.space 0x2, 0x00
