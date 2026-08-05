	@ src/strings.c:927 gText_BronzeCard
	.globl gText_Rom_52B244
gText_Rom_52B244: @ 0x0852B244
	.string "ブロンズ$"
	.if (. - gText_Rom_52B244) > 0x5
	.error "gText_Rom_52B244 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B244) < 0x5
	.space 0x5 - (. - gText_Rom_52B244)
	.endif
