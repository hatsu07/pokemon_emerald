	@ data/maps/MtPyre_Summit/scripts.inc:484 MtPyre_Summit_Text_ArchieWeGotTheOrbLetsGo
	.globl gText_Rom_21720D
gText_Rom_21720D: @ 0x0821720D
	.string "アオギリ『マグマだんの マツブサに\nさきを こされて しまったが\lわれわれも ようじは すませたぜ!\pおくりびやまに まつられて いた\nべにいろのたま……\lたしかに アオギリが いただいた!\pふふふ……\nこれで われわれの もくてきも\lはたせると いうものだ……\pさあ!\nここは ひきあげるぞ!$"
	.if (. - gText_Rom_21720D) > 0x94
	.error "gText_Rom_21720D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21720D) < 0x94
	.space 0x94 - (. - gText_Rom_21720D)
	.endif
