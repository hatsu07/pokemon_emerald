	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_Rom_5CC6ED
gText_Rom_5CC6ED: @ 0x085CC6ED
	.string "まえに かかれた レポートに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_5CC6ED) > 0x20
	.error "gText_Rom_5CC6ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6ED) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6ED)
	.endif
