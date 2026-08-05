	@ data/text/trainers.inc:3038 Route128_Text_WayneDefeat (+1 aliases)
	.globl gText_Rom_261435
gText_Rom_261435: @ 0x08261435
	.string "その いきおい\nまさに たきのぼり!$"
	.if (. - gText_Rom_261435) > 0x13
	.error "gText_Rom_261435 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261435) < 0x13
	.space 0x13 - (. - gText_Rom_261435)
	.endif
