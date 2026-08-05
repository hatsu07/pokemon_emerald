	@ src/data/text/match_call_messages.h:381 gText_MatchCallEliteFour_Drake_Strategy
	.globl gText_Rom_5F393E
gText_Rom_5F393E: @ 0x085F393E
	.string "たかい のうりょくで せめる!$"
	.if (. - gText_Rom_5F393E) > 0x10
	.error "gText_Rom_5F393E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F393E) < 0x10
	.space 0x10 - (. - gText_Rom_5F393E)
	.endif
