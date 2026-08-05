	@ data/text/check_furniture.inc:4 Text_BookShelf
	.globl gText_Rom_26427B
gText_Rom_26427B: @ 0x0826427B
	.string "いろんな ほんが いっぱいだ!$"
	.if (. - gText_Rom_26427B) > 0x10
	.error "gText_Rom_26427B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26427B) < 0x10
	.space 0x10 - (. - gText_Rom_26427B)
	.endif
