	@ src/strings.c:795 gText_PutAwayFrontierPass
	.globl gText_Rom_5CCAE7
gText_Rom_5CCAE7: @ 0x085CCAE7
	.string "フロンティアパスを とじます$"
	.if (. - gText_Rom_5CCAE7) > 0xf
	.error "gText_Rom_5CCAE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAE7) < 0xf
	.space 0xf - (. - gText_Rom_5CCAE7)
	.endif
