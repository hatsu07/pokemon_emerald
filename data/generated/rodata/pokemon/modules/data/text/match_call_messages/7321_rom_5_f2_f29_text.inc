	@ src/data/text/match_call_messages.h:146 gText_MatchCallSrAndJr_AnnaAndMeg_Strategy
	.globl gText_Rom_5F2F29
gText_Rom_5F2F29: @ 0x085F2F29
	.string "ふたりで そうだん!$"
	.if (. - gText_Rom_5F2F29) > 0xb
	.error "gText_Rom_5F2F29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F29) < 0xb
	.space 0xb - (. - gText_Rom_5F2F29)
	.endif
