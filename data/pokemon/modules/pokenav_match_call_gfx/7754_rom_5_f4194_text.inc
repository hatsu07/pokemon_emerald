	@ src/pokenav_match_call_gfx.c:213 sText_CallingDots
	.globl sText_CallingDots
sText_CallingDots: @ 0x085F4194
	.string "・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・{PAUSE 4}・\p{EOS}"
	.if (. - sText_CallingDots) > 0x13
	.error "sText_CallingDots may not grow beyond its original slot"
	.endif
	.if (. - sText_CallingDots) < 0x13
	.space 0x13 - (. - sText_CallingDots)
	.endif
	.space 0x1, 0x00
