	@ src/strings.c:870 gJPText_ConnectionErrorCheckLink
	.globl gText_Rom_5CCFB9
gText_Rom_5CCFB9: @ 0x085CCFB9
	.string "つうしん エラーです\nせつぞくを たしかめて ください$"
	.if (. - gText_Rom_5CCFB9) > 0x1c
	.error "gText_Rom_5CCFB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFB9) < 0x1c
	.space 0x1c - (. - gText_Rom_5CCFB9)
	.endif
