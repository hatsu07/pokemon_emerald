	@ src/item_use.c:91 sText_ItemFinderNothing
	.globl gText_Rom_5C95D3
gText_Rom_5C95D3: @ 0x085C95D3
	.string "…… …… ふう!\n…… なんにも はんのう しない{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95D3) > 0x1d
	.error "gText_Rom_5C95D3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95D3) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95D3)
	.endif
