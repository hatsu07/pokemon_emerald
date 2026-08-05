	@ src/data/text/match_call_messages.h:316 gText_MatchCallYoungCouple_LoisAndHal_Strategy
	.globl gText_Rom_5F366A
gText_Rom_5F366A: @ 0x085F366A
	.string "ラブラブさくせん!$"
	.if (. - gText_Rom_5F366A) > 0xa
	.error "gText_Rom_5F366A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F366A) < 0xa
	.space 0xa - (. - gText_Rom_5F366A)
	.endif
