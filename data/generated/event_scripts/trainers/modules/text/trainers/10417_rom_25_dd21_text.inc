	@ data/text/trainers.inc:1724 Route117_Text_DylanDefeat (+1 aliases)
	.globl gText_Rom_25DD21
gText_Rom_25DD21: @ 0x0825DD21
	.string "たいりょく なくなった!$"
	.if (. - gText_Rom_25DD21) > 0xd
	.error "gText_Rom_25DD21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DD21) < 0xd
	.space 0xd - (. - gText_Rom_25DD21)
	.endif
