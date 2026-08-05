	@ src/strings.c:770 gText_PressingSpeed
	.globl gText_Rom_5CC9F4
gText_Rom_5CC9F4: @ 0x085CC9F4
	.string "おすはやさ$"
	.if (. - gText_Rom_5CC9F4) > 0x6
	.error "gText_Rom_5CC9F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC9F4) < 0x6
	.space 0x6 - (. - gText_Rom_5CC9F4)
	.endif
