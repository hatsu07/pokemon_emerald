	@ src/data/text/match_call_messages.h:254 gText_MatchCallTwins_AmyAndLiv_Intro2
	.globl gText_Rom_5F33C8
gText_Rom_5F33C8: @ 0x085F33C8
	.string "デザートの このみは ちがうよ$"
	.if (. - gText_Rom_5F33C8) > 0x10
	.error "gText_Rom_5F33C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33C8) < 0x10
	.space 0x10 - (. - gText_Rom_5F33C8)
	.endif
