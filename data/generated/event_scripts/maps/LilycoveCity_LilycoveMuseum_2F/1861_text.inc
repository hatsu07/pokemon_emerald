	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:260 LilycoveCity_LilycoveMuseum_2F_Text_ItsRedPictureFrame
	.globl gText_Rom_2067C7
gText_Rom_2067C7: @ 0x082067C7
	.string "あかい かざりが ついた がくぶちだ!{EOS}"
	.if (. - gText_Rom_2067C7) > 0x14
	.error "gText_Rom_2067C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2067C7) < 0x14
	.space 0x14 - (. - gText_Rom_2067C7)
	.endif
