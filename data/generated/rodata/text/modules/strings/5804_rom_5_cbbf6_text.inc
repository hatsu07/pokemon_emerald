	@ src/strings.c:604 gText_Interview
	.globl gText_Rom_5CBBF6
gText_Rom_5CBBF6: @ 0x085CBBF6
	.string "インタビュー$"
	.if (. - gText_Rom_5CBBF6) > 0x7
	.error "gText_Rom_5CBBF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBBF6) < 0x7
	.space 0x7 - (. - gText_Rom_5CBBF6)
	.endif
