	@ src/data/text/match_call_messages.h:203 gText_MatchCallTriathlete_Katelyn_Intro1
	.globl gText_Rom_5F3196
gText_Rom_5F3196: @ 0x085F3196
	.string "まいにち 10キロは$"
	.if (. - gText_Rom_5F3196) > 0xb
	.error "gText_Rom_5F3196 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3196) < 0xb
	.space 0xb - (. - gText_Rom_5F3196)
	.endif
