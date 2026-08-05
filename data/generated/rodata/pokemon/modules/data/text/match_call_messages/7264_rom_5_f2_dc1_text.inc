	@ src/data/text/match_call_messages.h:113 gText_MatchCallOldCouple_JohnAndJay_Intro1
	.globl gText_Rom_5F2DC1
gText_Rom_5F2DC1: @ 0x085F2DC1
	.string "けっこんして 50ねん$"
	.if (. - gText_Rom_5F2DC1) > 0xc
	.error "gText_Rom_5F2DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DC1) < 0xc
	.space 0xc - (. - gText_Rom_5F2DC1)
	.endif
