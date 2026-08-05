	@ src/strings.c:73 gText_ListByType
	.globl gText_Rom_5C90D5
gText_Rom_5C90D5: @ 0x085C90D5
	.string "タイプを してい します\n /つかまえたポケモンのみ$"
	.if (. - gText_Rom_5C90D5) > 0x1b
	.error "gText_Rom_5C90D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90D5) < 0x1b
	.space 0x1b - (. - gText_Rom_5C90D5)
	.endif
