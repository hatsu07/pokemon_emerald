	@ data/maps/Route113/scripts.inc:136 Route113_Text_AshCanBeFashionedIntoGlass
	.globl gText_Rom_1EB35B
gText_Rom_1EB35B: @ 0x081EB35B
	.string "ワハハ!!\nいまの かがくりょくは すごいですぞ!\pなんと この かざんばいを\nガラスに かえることが できるのです!$"
	.if (. - gText_Rom_1EB35B) > 0x3c
	.error "gText_Rom_1EB35B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB35B) < 0x3c
	.space 0x3c - (. - gText_Rom_1EB35B)
	.endif
