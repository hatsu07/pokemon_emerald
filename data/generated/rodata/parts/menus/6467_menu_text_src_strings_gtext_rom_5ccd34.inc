	@ src/strings.c:825 gText_BerryPickingResults
	.globl gText_Rom_5CCD34
gText_Rom_5CCD34: @ 0x085CCD34
	.string "きのみの けっか はっぴょう!!$"
	.if (. - gText_Rom_5CCD34) > 0x11
	.error "gText_Rom_5CCD34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD34) < 0x11
	.space 0x11 - (. - gText_Rom_5CCD34)
	.endif
