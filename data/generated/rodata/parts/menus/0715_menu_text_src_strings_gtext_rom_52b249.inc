	@ src/strings.c:928 gText_CopperCard
	.globl gText_Rom_52B249
gText_Rom_52B249: @ 0x0852B249
	.string "カッパー$"
	.if (. - gText_Rom_52B249) > 0x5
	.error "gText_Rom_52B249 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B249) < 0x5
	.space 0x5 - (. - gText_Rom_52B249)
	.endif
