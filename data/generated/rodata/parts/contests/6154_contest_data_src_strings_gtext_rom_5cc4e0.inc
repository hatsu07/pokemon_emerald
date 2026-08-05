	@ src/strings.c:715 gText_ColorDarkGray
	.globl gText_Rom_5CC4E0
gText_Rom_5CC4E0: @ 0x085CC4E0
	.string "{COLOR DARK_GRAY}$"
	.if (. - gText_Rom_5CC4E0) > 0x4
	.error "gText_Rom_5CC4E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4E0) < 0x4
	.space 0x4 - (. - gText_Rom_5CC4E0)
	.endif
