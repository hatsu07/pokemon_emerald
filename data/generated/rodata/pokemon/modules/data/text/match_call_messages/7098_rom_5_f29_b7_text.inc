	@ src/data/text/match_call_messages.h:18 gText_MatchCallTuber_Lola_Intro1
	.globl gText_Rom_5F29B7
gText_Rom_5F29B7: @ 0x085F29B7
	.string "うきわが なくても$"
	.if (. - gText_Rom_5F29B7) > 0xa
	.error "gText_Rom_5F29B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F29B7) < 0xa
	.space 0xa - (. - gText_Rom_5F29B7)
	.endif
