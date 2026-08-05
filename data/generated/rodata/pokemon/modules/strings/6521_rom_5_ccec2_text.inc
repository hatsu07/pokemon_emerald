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
