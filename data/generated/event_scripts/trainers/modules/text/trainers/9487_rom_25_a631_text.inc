	@ data/text/trainers.inc:386 Route106_Text_ElliotRegister
	.globl gText_Rom_25A631
gText_Rom_25A631: @ 0x0825A631
	.string "つりも いいけど しょうぶも いいな!\nキミ よかったら また たのむよ!$"
	.if (. - gText_Rom_25A631) > 0x26
	.error "gText_Rom_25A631 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A631) < 0x26
	.space 0x26 - (. - gText_Rom_25A631)
	.endif
