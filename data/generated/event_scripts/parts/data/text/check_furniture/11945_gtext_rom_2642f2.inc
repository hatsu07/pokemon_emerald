	@ data/text/check_furniture.inc:21 Text_ShopShelf
	.globl gText_Rom_2642F2
gText_Rom_2642F2: @ 0x082642F2
	.string "たくさんの ポケモン グッズが\nところせましと ならべられてる!$"
	.if (. - gText_Rom_2642F2) > 0x21
	.error "gText_Rom_2642F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2642F2) < 0x21
	.space 0x21 - (. - gText_Rom_2642F2)
	.endif
