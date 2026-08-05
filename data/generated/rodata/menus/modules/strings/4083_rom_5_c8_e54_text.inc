	@ src/strings.c:39 gText_Next
	.globl gText_Rom_5C8E54
gText_Rom_5C8E54: @ 0x085C8E54
	.string "{A_BUTTON}つぎ$"
	.if (. - gText_Rom_5C8E54) > 0x5
	.error "gText_Rom_5C8E54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8E54) < 0x5
	.space 0x5 - (. - gText_Rom_5C8E54)
	.endif
	.space 0x3, 0x00
