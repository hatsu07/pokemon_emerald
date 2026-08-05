	@ src/data/text/match_call_messages.h:383 gText_MatchCallEliteFour_Drake_Intro1
	.globl gText_Rom_5F395E
gText_Rom_5F395E: @ 0x085F395E
	.string "いのちを すくって くれた$"
	.if (. - gText_Rom_5F395E) > 0xe
	.error "gText_Rom_5F395E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F395E) < 0xe
	.space 0xe - (. - gText_Rom_5F395E)
	.endif
