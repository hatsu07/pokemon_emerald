	@ src/naming_screen.c:1428 sText_PageSwapSymbols (+1 aliases)
	.globl gText_Rom_5CC61E
gText_Rom_5CC61E: @ 0x085CC61E
	.string "きごう$"
	.if (. - gText_Rom_5CC61E) > 0x4
	.error "gText_Rom_5CC61E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC61E) < 0x4
	.space 0x4 - (. - gText_Rom_5CC61E)
	.endif

