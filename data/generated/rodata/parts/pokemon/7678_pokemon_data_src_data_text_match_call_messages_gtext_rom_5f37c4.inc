	@ src/data/text/match_call_messages.h:348 gText_MatchCallReliableOne_Dad_Intro1
	.globl gText_Rom_5F37C4
gText_Rom_5F37C4: @ 0x085F37C4
	.string "いえから とほで 30ぷん$"
	.if (. - gText_Rom_5F37C4) > 0xe
	.error "gText_Rom_5F37C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37C4) < 0xe
	.space 0xe - (. - gText_Rom_5F37C4)
	.endif
