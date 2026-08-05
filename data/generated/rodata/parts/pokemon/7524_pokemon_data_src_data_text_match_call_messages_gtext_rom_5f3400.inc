	@ src/data/text/match_call_messages.h:259 gText_MatchCallSailor_Ernest_Intro2
	.globl gText_Rom_5F3400
gText_Rom_5F3400: @ 0x085F3400
	.string "もんく あるか こらー!$"
	.if (. - gText_Rom_5F3400) > 0xd
	.error "gText_Rom_5F3400 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3400) < 0xd
	.space 0xd - (. - gText_Rom_5F3400)
	.endif
