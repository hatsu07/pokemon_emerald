	@ data/text/obtain_item.inc:15 gText_TooBadBagIsFull
	.globl gText_Rom_243977
gText_Rom_243977: @ 0x08243977
	.string "ざんねん!\nバッグが いっぱいだ……$"
	.if (. - gText_Rom_243977) > 0x13
	.error "gText_Rom_243977 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243977) < 0x13
	.space 0x13 - (. - gText_Rom_243977)
	.endif
