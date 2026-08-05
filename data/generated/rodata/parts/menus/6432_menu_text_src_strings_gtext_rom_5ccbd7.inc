	@ src/strings.c:700 gText_BattlePyramid (+1 aliases)
	.globl gText_Rom_5CCBD7
gText_Rom_5CCBD7: @ 0x085CCBD7
	.string "バトルピラミッド$"
	.if (. - gText_Rom_5CCBD7) > 0x9
	.error "gText_Rom_5CCBD7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBD7) < 0x9
	.space 0x9 - (. - gText_Rom_5CCBD7)
	.endif
