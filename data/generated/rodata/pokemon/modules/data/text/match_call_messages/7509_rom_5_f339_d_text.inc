	@ src/data/text/match_call_messages.h:251 gText_MatchCallTwins_AmyAndLiv_Strategy
	.globl gText_Rom_5F339D
gText_Rom_5F339D: @ 0x085F339D
	.string "いっしょに たたかうの!$"
	.if (. - gText_Rom_5F339D) > 0xd
	.error "gText_Rom_5F339D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F339D) < 0xd
	.space 0xd - (. - gText_Rom_5F339D)
	.endif
