	@ src/strings.c:63 gText_SearchingPleaseWait
	.globl gText_Rom_5C8FFC
gText_Rom_5C8FFC: @ 0x085C8FFC
	.string "けんさくを しています……$"
	.if (. - gText_Rom_5C8FFC) > 0xe
	.error "gText_Rom_5C8FFC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C8FFC) < 0xe
	.space 0xe - (. - gText_Rom_5C8FFC)
	.endif
