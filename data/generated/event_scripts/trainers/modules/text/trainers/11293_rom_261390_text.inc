	@ data/text/trainers.inc:3020 Route128_Text_AlexaDefeat (+1 aliases)
	.globl gText_Rom_261390
gText_Rom_261390: @ 0x08261390
	.string "ああっ!\nなんてこと$"
	.if (. - gText_Rom_261390) > 0xb
	.error "gText_Rom_261390 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_261390) < 0xb
	.space 0xb - (. - gText_Rom_261390)
	.endif
