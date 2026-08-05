	@ src/strings.c:929 gText_SilverCard
	.globl gText_Rom_52B24E
gText_Rom_52B24E: @ 0x0852B24E
	.string "シルバー$"
	.if (. - gText_Rom_52B24E) > 0x5
	.error "gText_Rom_52B24E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_52B24E) < 0x5
	.space 0x5 - (. - gText_Rom_52B24E)
	.endif
