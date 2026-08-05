	@ data/maps/MauvilleCity/scripts.inc:637 MauvilleCity_Text_CitySign
	.globl gText_Rom_1DE59B
gText_Rom_1DE59B: @ 0x081DE59B
	.string "ここは キンセツ シティ\nあかるく かがやく たのしい まち$"
	.if (. - gText_Rom_1DE59B) > 0x1f
	.error "gText_Rom_1DE59B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE59B) < 0x1f
	.space 0x1f - (. - gText_Rom_1DE59B)
	.endif
