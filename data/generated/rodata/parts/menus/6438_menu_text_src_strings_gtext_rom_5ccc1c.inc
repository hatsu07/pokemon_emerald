	@ src/strings.c:815 gText_BattlePalaceDesc
	.globl gText_Rom_5CCC1C
gText_Rom_5CCC1C: @ 0x085CCC1C
	.string "しょうぶを みまもる。\nポケモンとの きずなを ためされる。$"
	.if (. - gText_Rom_5CCC1C) > 0x1f
	.error "gText_Rom_5CCC1C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCC1C) < 0x1f
	.space 0x1f - (. - gText_Rom_5CCC1C)
	.endif
