	@ src/strings.c:72 gText_ListByBodyColor
	.globl gText_Rom_5C90B7
gText_Rom_5C90B7: @ 0x085C90B7
	.string "からだの いろを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C90B7) > 0x1e
	.error "gText_Rom_5C90B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C90B7) < 0x1e
	.space 0x1e - (. - gText_Rom_5C90B7)
	.endif
