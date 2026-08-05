	@ data/maps/Route104/scripts.inc:1063 Route104_Text_PrettyPetalFlowShop
	.globl gText_Rom_1E7D98
gText_Rom_1E7D98: @ 0x081E7D98
	.string "「フラワーショップ　サン・トウカ」$"
	.if (. - gText_Rom_1E7D98) > 0x12
	.error "gText_Rom_1E7D98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7D98) < 0x12
	.space 0x12 - (. - gText_Rom_1E7D98)
	.endif
