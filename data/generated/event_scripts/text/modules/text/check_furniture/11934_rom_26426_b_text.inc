	@ data/text/check_furniture.inc:1 Text_PictureBookShelf
	.globl gText_Rom_26426B
gText_Rom_26426B: @ 0x0826426B
	.string "ポケモンえほんが そろってる!$"
	.if (. - gText_Rom_26426B) > 0x10
	.error "gText_Rom_26426B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26426B) < 0x10
	.space 0x10 - (. - gText_Rom_26426B)
	.endif
