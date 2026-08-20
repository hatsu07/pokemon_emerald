	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:251 LilycoveCity_LilycoveMuseum_2F_Text_ItsPinkPictureFrame
	.globl gText_Rom_206788
gText_Rom_206788: @ 0x08206788
	.string "ももいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - gText_Rom_206788) > 0x16
	.error "gText_Rom_206788 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206788) < 0x16
	.space 0x16 - (. - gText_Rom_206788)
	.endif
