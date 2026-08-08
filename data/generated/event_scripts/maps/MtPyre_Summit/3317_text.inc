	@ data/maps/MtPyre_Summit/scripts.inc:429 MtPyre_Summit_Text_Grunt1Defeat (+1 aliases)
	.globl gText_Rom_21700C
gText_Rom_21700C: @ 0x0821700C
	.string "おまえ…… にげていった マグマだんが\nもどって きたのかと おもったんだよ$"
	.if (. - gText_Rom_21700C) > 0x27
	.error "gText_Rom_21700C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21700C) < 0x27
	.space 0x27 - (. - gText_Rom_21700C)
	.endif
