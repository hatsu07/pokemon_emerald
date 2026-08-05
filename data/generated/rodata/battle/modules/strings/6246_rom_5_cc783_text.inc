	@ src/strings.c:748 gText_Ok
	.globl gText_Rom_5CC783
gText_Rom_5CC783: @ 0x085CC783
	.string "OK!$"
	.if (. - gText_Rom_5CC783) > 0x4
	.error "gText_Rom_5CC783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC783) < 0x4
	.space 0x4 - (. - gText_Rom_5CC783)
	.endif
