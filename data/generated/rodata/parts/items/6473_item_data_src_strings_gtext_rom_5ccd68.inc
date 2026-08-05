	@ src/strings.c:828 gText_AnnouncingPrizes
	.globl gText_Rom_5CCD68
gText_Rom_5CCD68: @ 0x085CCD68
	.string "しょうひんの はっぴょう!!$"
	.if (. - gText_Rom_5CCD68) > 0xf
	.error "gText_Rom_5CCD68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD68) < 0xf
	.space 0xf - (. - gText_Rom_5CCD68)
	.endif
