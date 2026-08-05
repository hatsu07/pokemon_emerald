	@ src/data/text/match_call_messages.h:26 gText_MatchCallSisAndBro_LilaAndRoy_Strategy
	.globl gText_Rom_5F2A0C
gText_Rom_5F2A0C: @ 0x085F2A0C
	.string "やくわり ぶんたん してるわ$"
	.if (. - gText_Rom_5F2A0C) > 0xf
	.error "gText_Rom_5F2A0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A0C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A0C)
	.endif
