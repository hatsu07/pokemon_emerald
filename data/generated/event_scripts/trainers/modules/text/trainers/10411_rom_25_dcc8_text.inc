	@ data/text/trainers.inc:1715 Route117_Text_LydiaRematchDefeat (+1 aliases)
	.globl gText_Rom_25DCC8
gText_Rom_25DCC8: @ 0x0825DCC8
	.string "みごとに そだってますね$"
	.if (. - gText_Rom_25DCC8) > 0xd
	.error "gText_Rom_25DCC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25DCC8) < 0xd
	.space 0xd - (. - gText_Rom_25DCC8)
	.endif
