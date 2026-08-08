	@ src/strings.c:557 gText_TheAnswer (+1 aliases)
	.globl gText_Rom_5CB957
gText_Rom_5CB957: @ 0x085CB957
	.string "こたえは$"
	.if (. - gText_Rom_5CB957) > 0x5
	.error "gText_Rom_5CB957 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB957) < 0x5
	.space 0x5 - (. - gText_Rom_5CB957)
	.endif
