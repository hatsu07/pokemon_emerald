	@ src/data/text/match_call_messages.h:261 gText_MatchCallSailor_Cory_Strategy
	.globl gText_Rom_5F340D
gText_Rom_5F340D: @ 0x085F340D
	.string "ケンカ じょうとう!$"
	.if (. - gText_Rom_5F340D) > 0xb
	.error "gText_Rom_5F340D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F340D) < 0xb
	.space 0xb - (. - gText_Rom_5F340D)
	.endif
