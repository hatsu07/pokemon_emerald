	@ src/strings.c:856 gText_3rd
	.globl gText_Rom_5CCEBF
gText_Rom_5CCEBF: @ 0x085CCEBF
	.string "3い$"
	.if (. - gText_Rom_5CCEBF) > 0x3
	.error "gText_Rom_5CCEBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEBF) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEBF)
	.endif
