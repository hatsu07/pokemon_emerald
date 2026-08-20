	@ data/maps/Route118/scripts.inc:269 Route118_Text_IdenticalMindsTakeThis
	.globl gText_Rom_1ECBFE
gText_Rom_1ECBFE: @ 0x081ECBFE
	.string "うむ！\nきみとは きが あうよ！\pうむ！\nいいつりざおを あげよう！{EOS}"
	.if (. - gText_Rom_1ECBFE) > 0x23
	.error "gText_Rom_1ECBFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1ECBFE) < 0x23
	.space 0x23 - (. - gText_Rom_1ECBFE)
	.endif
