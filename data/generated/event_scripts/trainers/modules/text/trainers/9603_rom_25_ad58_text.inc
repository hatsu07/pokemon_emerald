	@ data/text/trainers.inc:557 Route108_Text_CoryRematchDefeated (+1 aliases)
	.globl gText_Rom_25AD58
gText_Rom_25AD58: @ 0x0825AD58
	.string "わーっ また まけた!\nわー わー!$"
	.if (. - gText_Rom_25AD58) > 0x13
	.error "gText_Rom_25AD58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25AD58) < 0x13
	.space 0x13 - (. - gText_Rom_25AD58)
	.endif
