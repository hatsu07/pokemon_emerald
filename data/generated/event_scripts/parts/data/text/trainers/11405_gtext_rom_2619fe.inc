	@ data/text/trainers.inc:3185 Route131_Text_IanDefeat (+1 aliases)
	.globl gText_Rom_2619FE
gText_Rom_2619FE: @ 0x082619FE
	.string "カツ『あねきと がんばったのに\nかてなかったよ……$"
	.if (. - gText_Rom_2619FE) > 0x1a
	.error "gText_Rom_2619FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2619FE) < 0x1a
	.space 0x1a - (. - gText_Rom_2619FE)
	.endif
