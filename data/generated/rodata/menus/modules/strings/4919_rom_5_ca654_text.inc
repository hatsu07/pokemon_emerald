	@ src/strings.c:412 gText_ApostropheSBase
	.globl gText_Rom_5CA654
gText_Rom_5CA654: @ 0x085CA654
	.string " きち$"
	.if (. - gText_Rom_5CA654) > 0x4
	.error "gText_Rom_5CA654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA654) < 0x4
	.space 0x4 - (. - gText_Rom_5CA654)
	.endif
