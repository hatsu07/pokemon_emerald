	@ src/strings.c:871 gJPText_ConnectionErrorTryAgain
	.globl gText_Rom_5CCFD5
gText_Rom_5CCFD5: @ 0x085CCFD5
	.string "つうしん エラーです\nはじめから やりなおして ください$"
	.if (. - gText_Rom_5CCFD5) > 0x1d
	.error "gText_Rom_5CCFD5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCFD5) < 0x1d
	.space 0x1d - (. - gText_Rom_5CCFD5)
	.endif
