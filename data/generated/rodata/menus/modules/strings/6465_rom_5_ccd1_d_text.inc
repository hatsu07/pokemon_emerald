	@ src/strings.c:824 gText_BerriesInRowFivePlayers
	.globl gText_Rom_5CCD1D
gText_Rom_5CCD1D: @ 0x085CCD1D
	.string "5にんで きのみを\nつづけてとった かいすう$"
	.if (. - gText_Rom_5CCD1D) > 0x17
	.error "gText_Rom_5CCD1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCD1D) < 0x17
	.space 0x17 - (. - gText_Rom_5CCD1D)
	.endif
