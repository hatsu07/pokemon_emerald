	@ data/text/trainers.inc:2939 Route127_Text_AidanDefeat (+1 aliases)
	.globl gText_Rom_261021
gText_Rom_261021: @ 0x08261021
	.string "ふぅ…… まいったぜ$"
	.if (. - gText_Rom_261021) > 0xb
	.error "gText_Rom_261021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261021) < 0xb
	.space 0xb - (. - gText_Rom_261021)
	.endif
