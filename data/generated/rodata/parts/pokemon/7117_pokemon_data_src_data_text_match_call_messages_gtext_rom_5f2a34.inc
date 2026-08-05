	@ src/data/text/match_call_messages.h:29 gText_MatchCallSisAndBro_LilaAndRoy_Intro2
	.globl gText_Rom_5F2A34
gText_Rom_5F2A34: @ 0x085F2A34
	.string "ポケモン たのしく ねっ!$"
	.if (. - gText_Rom_5F2A34) > 0xe
	.error "gText_Rom_5F2A34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A34) < 0xe
	.space 0xe - (. - gText_Rom_5F2A34)
	.endif
