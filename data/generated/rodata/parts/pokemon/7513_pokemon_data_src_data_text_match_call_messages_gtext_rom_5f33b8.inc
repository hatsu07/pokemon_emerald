	@ src/data/text/match_call_messages.h:253 gText_MatchCallTwins_AmyAndLiv_Intro1
	.globl gText_Rom_5F33B8
gText_Rom_5F33B8: @ 0x085F33B8
	.string "すきな ポケモンは おなじでも$"
	.if (. - gText_Rom_5F33B8) > 0x10
	.error "gText_Rom_5F33B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33B8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33B8)
	.endif
