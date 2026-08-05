	@ src/data/text/match_call_messages.h:27 gText_MatchCallSisAndBro_LilaAndRoy_Pokemon
	.globl gText_Rom_5F2A1B
gText_Rom_5F2A1B: @ 0x085F2A1B
	.string "なかの いい ポケモンよ!$"
	.if (. - gText_Rom_5F2A1B) > 0xe
	.error "gText_Rom_5F2A1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A1B) < 0xe
	.space 0xe - (. - gText_Rom_5F2A1B)
	.endif
