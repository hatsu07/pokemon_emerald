	@ src/data/text/match_call_messages.h:53 gText_MatchCallLady_Cindy_Intro1
	.globl gText_Rom_5F2B3B
gText_Rom_5F2B3B: @ 0x085F2B3B
	.string "いえには ポケモンせんようの$"
	.if (. - gText_Rom_5F2B3B) > 0xf
	.error "gText_Rom_5F2B3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B3B) < 0xf
	.space 0xf - (. - gText_Rom_5F2B3B)
	.endif
