	@ src/pokenav_match_call_gfx.c:213 sText_CallingDots
	.globl gText_Rom_5F4194
gText_Rom_5F4194: @ 0x085F4194
	.string "・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・\p$"
	.if (. - gText_Rom_5F4194) > 0x13
	.error "gText_Rom_5F4194 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F4194) < 0x13
	.space 0x13 - (. - gText_Rom_5F4194)
	.endif
	.space 0x1, 0x00
