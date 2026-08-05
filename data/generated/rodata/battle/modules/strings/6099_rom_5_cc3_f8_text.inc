	@ src/strings.c:691 gText_NumBP
	.globl gText_Rom_5CC3F8
gText_Rom_5CC3F8: @ 0x085CC3F8
	.string "{STR_VAR_1}{COLOR DARK_GRAY}{SHADOW LIGHT_GRAY}BP$"
	.if (. - gText_Rom_5CC3F8) > 0xb
	.error "gText_Rom_5CC3F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC3F8) < 0xb
	.space 0xb - (. - gText_Rom_5CC3F8)
	.endif
