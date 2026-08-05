	@ src/data/text/match_call_messages.h:368 gText_MatchCallEliteFour_Sidney_Intro1
	.globl gText_Rom_5F38A7
gText_Rom_5F38A7: @ 0x085F38A7
	.string "ふりょうと いわれた オレも$"
	.if (. - gText_Rom_5F38A7) > 0xf
	.error "gText_Rom_5F38A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38A7) < 0xf
	.space 0xf - (. - gText_Rom_5F38A7)
	.endif
