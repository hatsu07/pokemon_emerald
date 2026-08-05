	@ src/data/text/match_call_messages.h:211 gText_MatchCallTriathlete_Pablo_Strategy
	.globl gText_Rom_5F31E8
gText_Rom_5F31E8: @ 0x085F31E8
	.string "みずの ちからを ひきだす!$"
	.if (. - gText_Rom_5F31E8) > 0xf
	.error "gText_Rom_5F31E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31E8) < 0xf
	.space 0xf - (. - gText_Rom_5F31E8)
	.endif
