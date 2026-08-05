	@ src/data/text/match_call_messages.h:213 gText_MatchCallTriathlete_Pablo_Intro1
	.globl gText_Rom_5F3207
gText_Rom_5F3207: @ 0x085F3207
	.string "ポケモンも いいけど$"
	.if (. - gText_Rom_5F3207) > 0xb
	.error "gText_Rom_5F3207 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3207) < 0xb
	.space 0xb - (. - gText_Rom_5F3207)
	.endif
