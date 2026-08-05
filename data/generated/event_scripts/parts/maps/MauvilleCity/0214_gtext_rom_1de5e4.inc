	@ data/maps/MauvilleCity/scripts.inc:646 MauvilleCity_Text_BikeShopSign
	.globl gText_Rom_1DE5E4
gText_Rom_1DE5E4: @ 0x081DE5E4
	.string "じゃりみち はしれば こころも はずむ!\n「サイクルショップ カゼノ」$"
	.if (. - gText_Rom_1DE5E4) > 0x24
	.error "gText_Rom_1DE5E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DE5E4) < 0x24
	.space 0x24 - (. - gText_Rom_1DE5E4)
	.endif
