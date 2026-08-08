	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_Rom_276F77
gText_Rom_276F77: @ 0x08276F77
	.string "まえに かかれた レポートに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_276F77) > 0x20
	.error "gText_Rom_276F77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F77) < 0x20
	.space 0x20 - (. - gText_Rom_276F77)
	.endif
