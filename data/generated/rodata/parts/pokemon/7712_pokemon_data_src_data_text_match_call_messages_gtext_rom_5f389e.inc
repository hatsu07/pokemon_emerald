	@ src/data/text/match_call_messages.h:367 gText_MatchCallEliteFour_Sidney_Pokemon
	.globl gText_Rom_5F389E
gText_Rom_5F389E: @ 0x085F389E
	.string "あくの びがく!$"
	.if (. - gText_Rom_5F389E) > 0x9
	.error "gText_Rom_5F389E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F389E) < 0x9
	.space 0x9 - (. - gText_Rom_5F389E)
	.endif
