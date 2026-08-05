	@ data/text/obtain_item.inc:4 gText_TheBagIsFull
	.globl gText_Rom_243947
gText_Rom_243947: @ 0x08243947
	.string "バッグが いっぱいだ!$"
	.if (. - gText_Rom_243947) > 0xc
	.error "gText_Rom_243947 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243947) < 0xc
	.space 0xc - (. - gText_Rom_243947)
	.endif
