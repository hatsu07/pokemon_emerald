	@ src/strings.c:699 gText_BattlePike (+1 aliases)
	.globl gText_Rom_5CCBCF
gText_Rom_5CCBCF: @ 0x085CCBCF
	.string "バトルチューブ$"
	.if (. - gText_Rom_5CCBCF) > 0x8
	.error "gText_Rom_5CCBCF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCBCF) < 0x8
	.space 0x8 - (. - gText_Rom_5CCBCF)
	.endif
