	@ src/item_use.c:90 sText_ItemFinderOnTop
	.globl gText_Rom_5C95B6
gText_Rom_5C95B6: @ 0x085C95B6
	.string "マシンが あしもとで\nすごく はんのう しているぞ!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C95B6) > 0x1d
	.error "gText_Rom_5C95B6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C95B6) < 0x1d
	.space 0x1d - (. - gText_Rom_5C95B6)
	.endif
