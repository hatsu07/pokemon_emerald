	@ src/pokedex_plus_hgss.c:6790 pokedex_plus_hgss_line_6790
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CAFCC
gText_Rom_5CAFCC: @ 0x085CAFCC
	.string " バッグ$"
	.if (. - gText_Rom_5CAFCC) != 0x5
	.error "gText_Rom_5CAFCC must retain its original byte length"
	.endif
