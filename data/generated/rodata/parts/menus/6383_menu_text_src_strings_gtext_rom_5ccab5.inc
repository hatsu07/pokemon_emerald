	@ src/strings.c:792 gText_CheckFrontierMap
	.globl gText_Rom_5CCAB5
gText_Rom_5CCAB5: @ 0x085CCAB5
	.string "バトルフロンティアの マップを みます$"
	.if (. - gText_Rom_5CCAB5) > 0x14
	.error "gText_Rom_5CCAB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCAB5) < 0x14
	.space 0x14 - (. - gText_Rom_5CCAB5)
	.endif
