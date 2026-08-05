	@ data/text/trainers.inc:296 Route104_Text_DarianDefeat (+1 aliases)
	.globl gText_Rom_25A296
gText_Rom_25A296: @ 0x0825A296
	.string "なっにい$"
	.if (. - gText_Rom_25A296) > 0x5
	.error "gText_Rom_25A296 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A296) < 0x5
	.space 0x5 - (. - gText_Rom_25A296)
	.endif
