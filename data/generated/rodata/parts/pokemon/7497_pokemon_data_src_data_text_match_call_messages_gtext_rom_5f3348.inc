	@ src/data/text/match_call_messages.h:243 gText_MatchCallSwimmer_Jenny_Intro1
	.globl gText_Rom_5F3348
gText_Rom_5F3348: @ 0x085F3348
	.string "ファンが おおくて こまるわ$"
	.if (. - gText_Rom_5F3348) > 0xf
	.error "gText_Rom_5F3348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3348) < 0xf
	.space 0xf - (. - gText_Rom_5F3348)
	.endif
