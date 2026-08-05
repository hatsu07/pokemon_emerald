	@ src/strings.c:822 gText_BerriesPicked
	.globl gText_Rom_5CCD06
gText_Rom_5CCD06: @ 0x085CCD06
	.string "きのみをとった かいすう$"
	.if (. - gText_Rom_5CCD06) > 0xd
	.error "gText_Rom_5CCD06 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD06) < 0xd
	.space 0xd - (. - gText_Rom_5CCD06)
	.endif
