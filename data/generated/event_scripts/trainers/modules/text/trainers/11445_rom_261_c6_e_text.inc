	@ data/text/trainers.inc:3242 Route132_Text_KiyoDefeat (+1 aliases)
	.globl gText_Rom_261C6E
gText_Rom_261C6E: @ 0x08261C6E
	.string "まけた\nおまえさんには まけたわ$"
	.if (. - gText_Rom_261C6E) > 0x11
	.error "gText_Rom_261C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261C6E) < 0x11
	.space 0x11 - (. - gText_Rom_261C6E)
	.endif
