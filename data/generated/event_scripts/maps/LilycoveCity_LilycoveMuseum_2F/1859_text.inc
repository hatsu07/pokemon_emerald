	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:257 LilycoveCity_LilycoveMuseum_2F_Text_ItsBluePictureFrame
	.globl gText_Rom_2067B3
gText_Rom_2067B3: @ 0x082067B3
	.string "あおい かざりが ついた がくぶちだ!$"
	.if (. - gText_Rom_2067B3) > 0x14
	.error "gText_Rom_2067B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067B3) < 0x14
	.space 0x14 - (. - gText_Rom_2067B3)
	.endif
