	@ src/strings.c:343 gText_Able3
	.globl gText_Rom_5CA1D0
gText_Rom_5CA1D0: @ 0x085CA1D0
	.string "おぼえられる!$"
	.if (. - gText_Rom_5CA1D0) > 0x8
	.error "gText_Rom_5CA1D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA1D0) < 0x8
	.space 0x8 - (. - gText_Rom_5CA1D0)
	.endif
