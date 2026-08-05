	@ src/data/text/match_call_messages.h:198 gText_MatchCallTriathlete_Dylan_Intro1
	.globl gText_Rom_5F3165
gText_Rom_5F3165: @ 0x085F3165
	.string "はしりつづけていると$"
	.if (. - gText_Rom_5F3165) > 0xb
	.error "gText_Rom_5F3165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3165) < 0xb
	.space 0xb - (. - gText_Rom_5F3165)
	.endif
