	@ src/strings.c:71 gText_ListByFirstLetter
	.globl gText_Rom_5C9093
gText_Rom_5C9093: @ 0x085C9093
	.string "なまえの さいしょの もじを してい します\n /みつけたポケモンのみ$"
	.if (. - gText_Rom_5C9093) > 0x24
	.error "gText_Rom_5C9093 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9093) < 0x24
	.space 0x24 - (. - gText_Rom_5C9093)
	.endif
