	@ src/strings.c:893 gText_Current
	.globl gText_Rom_5DD425
gText_Rom_5DD425: @ 0x085DD425
	.string "げんざい$"
	.if (. - gText_Rom_5DD425) > 0x5
	.error "gText_Rom_5DD425 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5DD425) < 0x5
	.space 0x5 - (. - gText_Rom_5DD425)
	.endif
