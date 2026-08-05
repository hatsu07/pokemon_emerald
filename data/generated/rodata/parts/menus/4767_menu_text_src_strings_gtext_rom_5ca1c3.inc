	@ src/strings.c:341 gText_Able2
	.globl gText_Rom_5CA1C3
gText_Rom_5CA1C3: @ 0x085CA1C3
	.string "でられます$"
	.if (. - gText_Rom_5CA1C3) > 0x6
	.error "gText_Rom_5CA1C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1C3) < 0x6
	.space 0x6 - (. - gText_Rom_5CA1C3)
	.endif
