	@ src/data/text/match_call_messages.h:147 gText_MatchCallSrAndJr_AnnaAndMeg_Pokemon
	.globl gText_Rom_5F2F34
gText_Rom_5F2F34: @ 0x085F2F34
	.string "ふたりが すきな ポケモン!$"
	.if (. - gText_Rom_5F2F34) > 0xf
	.error "gText_Rom_5F2F34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F34) < 0xf
	.space 0xf - (. - gText_Rom_5F2F34)
	.endif
