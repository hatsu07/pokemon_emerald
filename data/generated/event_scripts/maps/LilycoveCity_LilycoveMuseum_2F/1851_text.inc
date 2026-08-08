	@ data/maps/LilycoveCity_LilycoveMuseum_2F/scripts.inc:245 LilycoveCity_LilycoveMuseum_2F_Text_KeepThisForYou
	.globl gText_Rom_206729
gText_Rom_206729: @ 0x08206729
	.string "それでは また いらした ときに\nさしあげましょう$"
	.if (. - gText_Rom_206729) > 0x1a
	.error "gText_Rom_206729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_206729) < 0x1a
	.space 0x1a - (. - gText_Rom_206729)
	.endif
