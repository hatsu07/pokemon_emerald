	@ src/strings.c:638 gText_Ferry
	.globl gText_Rom_5CBEBA
gText_Rom_5CBEBA: @ 0x085CBEBA
	.string "れんらくせん$"
	.if (. - gText_Rom_5CBEBA) > 0x7
	.error "gText_Rom_5CBEBA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBEBA) < 0x7
	.space 0x7 - (. - gText_Rom_5CBEBA)
	.endif
