	@ src/data/text/match_call_messages.h:333 gText_MatchCallTheBigHit_Brawly_Intro1
	.globl gText_Rom_5F3729
gText_Rom_5F3729: @ 0x085F3729
	.string "せかいの ビッグウェーブが$"
	.if (. - gText_Rom_5F3729) > 0xe
	.error "gText_Rom_5F3729 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3729) < 0xe
	.space 0xe - (. - gText_Rom_5F3729)
	.endif
