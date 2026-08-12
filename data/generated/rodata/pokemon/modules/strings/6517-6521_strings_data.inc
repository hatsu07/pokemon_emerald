	@ src/strings.c:855 gText_2nd
	.globl gText_Rom_5CCEBC
gText_Rom_5CCEBC: @ 0x085CCEBC
	.string "2い$"
	.if (. - gText_Rom_5CCEBC) > 0x3
	.error "gText_Rom_5CCEBC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEBC) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEBC)
	.endif

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

	@ src/strings.c:857 gText_4th
	.globl gText_Rom_5CCEC2
gText_Rom_5CCEC2: @ 0x085CCEC2
	.string "4い$"
	.if (. - gText_Rom_5CCEC2) > 0x3
	.error "gText_Rom_5CCEC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCEC2) < 0x3
	.space 0x3 - (. - gText_Rom_5CCEC2)
	.endif
