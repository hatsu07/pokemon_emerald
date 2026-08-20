	@ data/maps/MossdeepCity_SpaceCenter_2F/scripts.inc:363 MossdeepCity_SpaceCenter_2F_Text_GoodAnswer
	.globl gText_Rom_20DC12
gText_Rom_20DC12: @ 0x0820DC12
	.string "だよな！\nそのほうが おりこうさん だぜ！{EOS}"
	.if (. - gText_Rom_20DC12) > 0x16
	.error "gText_Rom_20DC12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20DC12) < 0x16
	.space 0x16 - (. - gText_Rom_20DC12)
	.endif
