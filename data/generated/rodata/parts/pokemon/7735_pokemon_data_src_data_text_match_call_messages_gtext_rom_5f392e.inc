	@ src/data/text/match_call_messages.h:379 gText_MatchCallEliteFour_Glacia_Intro2
	.globl gText_Rom_5F392E
gText_Rom_5F392E: @ 0x085F392E
	.string "こおりタイプが きたえられる!$"
	.if (. - gText_Rom_5F392E) > 0x10
	.error "gText_Rom_5F392E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F392E) < 0x10
	.space 0x10 - (. - gText_Rom_5F392E)
	.endif
