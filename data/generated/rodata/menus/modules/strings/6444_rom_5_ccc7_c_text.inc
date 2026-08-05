	@ src/strings.c:818 gText_BattlePikeDesc
	.globl gText_Rom_5CCC7C
gText_Rom_5CCC7C: @ 0x085CCC7C
	.string "3つの みちから 1つえらび かちすすむ。\nうんを ためされる。$"
	.if (. - gText_Rom_5CCC7C) > 0x21
	.error "gText_Rom_5CCC7C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC7C) < 0x21
	.space 0x21 - (. - gText_Rom_5CCC7C)
	.endif
