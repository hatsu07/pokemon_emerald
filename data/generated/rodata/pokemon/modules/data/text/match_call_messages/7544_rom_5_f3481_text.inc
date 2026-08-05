	@ src/data/text/match_call_messages.h:271 gText_MatchCallPkmnBreeder_Lydia_Strategy
	.globl gText_Rom_5F3481
gText_Rom_5F3481: @ 0x085F3481
	.string "つよきで たたかいます$"
	.if (. - gText_Rom_5F3481) > 0xc
	.error "gText_Rom_5F3481 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3481) < 0xc
	.space 0xc - (. - gText_Rom_5F3481)
	.endif
