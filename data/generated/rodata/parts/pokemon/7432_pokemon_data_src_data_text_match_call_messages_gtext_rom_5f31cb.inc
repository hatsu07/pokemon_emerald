	@ src/data/text/match_call_messages.h:208 gText_MatchCallTriathlete_Benjamin_Intro1
	.globl gText_Rom_5F31CB
gText_Rom_5F31CB: @ 0x085F31CB
	.string "あせを かいたら こまめに$"
	.if (. - gText_Rom_5F31CB) > 0xe
	.error "gText_Rom_5F31CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31CB) < 0xe
	.space 0xe - (. - gText_Rom_5F31CB)
	.endif
