	@ src/data/text/match_call_messages.h:313 gText_MatchCallHiker_Sawyer_Intro1
	.globl gText_Rom_5F3652
gText_Rom_5F3652: @ 0x085F3652
	.string "ポケモンは すきだけど$"
	.if (. - gText_Rom_5F3652) > 0xc
	.error "gText_Rom_5F3652 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3652) < 0xc
	.space 0xc - (. - gText_Rom_5F3652)
	.endif
