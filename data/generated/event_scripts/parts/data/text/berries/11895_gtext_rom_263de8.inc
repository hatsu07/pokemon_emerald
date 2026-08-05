	@ data/text/berries.inc:166 Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis
	.globl gText_Rom_263DE8
gText_Rom_263DE8: @ 0x08263DE8
	.string "こんにちは!\pおはなは せわを すれば するほど\nたくさん きれいに さいて くれるの\pあなたも せわを したく なった でしょ?\nこれ あげるわ$"
	.if (. - gText_Rom_263DE8) > 0x4a
	.error "gText_Rom_263DE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263DE8) < 0x4a
	.space 0x4a - (. - gText_Rom_263DE8)
	.endif
