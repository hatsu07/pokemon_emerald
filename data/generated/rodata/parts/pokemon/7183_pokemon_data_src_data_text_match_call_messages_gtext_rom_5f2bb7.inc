	@ src/data/text/match_call_messages.h:66 gText_MatchCallRichBoy_Winston_Strategy
	.globl gText_Rom_5F2BB7
gText_Rom_5F2BB7: @ 0x085F2BB7
	.string "さくせんなんて ひつようないぜ$"
	.if (. - gText_Rom_5F2BB7) > 0x10
	.error "gText_Rom_5F2BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BB7) < 0x10
	.space 0x10 - (. - gText_Rom_5F2BB7)
	.endif
