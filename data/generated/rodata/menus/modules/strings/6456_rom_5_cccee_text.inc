	@ src/strings.c:820 gText_Powder
	.globl gText_Rom_5CCCEE
gText_Rom_5CCCEE: @ 0x085CCCEE
	.string "きのみのこな$"
	.if (. - gText_Rom_5CCCEE) > 0x7
	.error "gText_Rom_5CCCEE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCCEE) < 0x7
	.space 0x7 - (. - gText_Rom_5CCCEE)
	.endif
