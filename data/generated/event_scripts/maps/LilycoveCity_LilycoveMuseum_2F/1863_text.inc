	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:263 LilycoveCity_LilycoveMuseum_2F_Text_ItsGreenPictureFrame
	.globl gText_Rom_2067DB
gText_Rom_2067DB: @ 0x082067DB
	.string "みどりいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - gText_Rom_2067DB) > 0x17
	.error "gText_Rom_2067DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067DB) < 0x17
	.space 0x17 - (. - gText_Rom_2067DB)
	.endif
