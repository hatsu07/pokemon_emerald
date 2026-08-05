	@ src/data/text/match_call_messages.h:276 gText_MatchCallPkmnBreeder_Isaac_Strategy
	.globl gText_Rom_5F34B8
gText_Rom_5F34B8: @ 0x085F34B8
	.string "がんがん おします!$"
	.if (. - gText_Rom_5F34B8) > 0xb
	.error "gText_Rom_5F34B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34B8) < 0xb
	.space 0xb - (. - gText_Rom_5F34B8)
	.endif
