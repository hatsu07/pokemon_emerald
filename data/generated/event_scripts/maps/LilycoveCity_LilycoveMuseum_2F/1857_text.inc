	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:254 LilycoveCity_LilycoveMuseum_2F_Text_ItsYellowPictureFrame
	.globl gText_Rom_20679E
gText_Rom_20679E: @ 0x0820679E
	.string "きいろの かざりが ついた がくぶちだ!{EOS}"
	.if (. - gText_Rom_20679E) > 0x15
	.error "gText_Rom_20679E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_20679E) < 0x15
	.space 0x15 - (. - gText_Rom_20679E)
	.endif
