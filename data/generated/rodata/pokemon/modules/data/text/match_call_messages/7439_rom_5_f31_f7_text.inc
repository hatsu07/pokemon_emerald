	@ src/data/text/match_call_messages.h:212 gText_MatchCallTriathlete_Pablo_Pokemon
	.globl gText_Rom_5F31F7
gText_Rom_5F31F7: @ 0x085F31F7
	.string "きたえぬかれた みずポケモン!$"
	.if (. - gText_Rom_5F31F7) > 0x10
	.error "gText_Rom_5F31F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F31F7)
	.endif
