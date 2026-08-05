	@ src/strings.c:823 gText_BestScore (+1 aliases)
	.globl gText_Rom_5CCD13
gText_Rom_5CCD13: @ 0x085CCD13
	.string "さいこう とくてん$"
	.if (. - gText_Rom_5CCD13) > 0xa
	.error "gText_Rom_5CCD13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD13) < 0xa
	.space 0xa - (. - gText_Rom_5CCD13)
	.endif
