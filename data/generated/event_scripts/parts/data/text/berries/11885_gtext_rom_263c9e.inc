	@ data/text/berries.inc:134 Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop
	.globl gText_Rom_263C9E
gText_Rom_263C9E: @ 0x08263C9E
	.string "こんにちは!\pはなを せかいに ひろめる\nフラワーショップ サン・トウカです!$"
	.if (. - gText_Rom_263C9E) > 0x28
	.error "gText_Rom_263C9E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263C9E) < 0x28
	.space 0x28 - (. - gText_Rom_263C9E)
	.endif
