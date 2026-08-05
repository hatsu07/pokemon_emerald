	@ src/data/text/match_call_messages.h:351 gText_MatchCallSkyTamer_Winona_Strategy
	.globl gText_Rom_5F37DF
gText_Rom_5F37DF: @ 0x085F37DF
	.string "スピードを いかして たたかう$"
	.if (. - gText_Rom_5F37DF) > 0x10
	.error "gText_Rom_5F37DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37DF) < 0x10
	.space 0x10 - (. - gText_Rom_5F37DF)
	.endif
