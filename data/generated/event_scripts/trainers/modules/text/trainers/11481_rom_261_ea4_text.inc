	@ data/text/trainers.inc:3296 Route133_Text_DebraDefeat (+1 aliases)
	.globl gText_Rom_261EA4
gText_Rom_261EA4: @ 0x08261EA4
	.string "まけたぁ……$"
	.if (. - gText_Rom_261EA4) > 0x7
	.error "gText_Rom_261EA4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261EA4) < 0x7
	.space 0x7 - (. - gText_Rom_261EA4)
	.endif
