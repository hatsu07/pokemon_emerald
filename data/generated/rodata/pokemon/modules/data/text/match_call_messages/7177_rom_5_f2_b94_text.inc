	@ src/data/text/match_call_messages.h:62 gText_MatchCallBeauty_Jessica_Pokemon
	.globl gText_Rom_5F2B94
gText_Rom_5F2B94: @ 0x085F2B94
	.string "かわいいわよ$"
	.if (. - gText_Rom_5F2B94) > 0x7
	.error "gText_Rom_5F2B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B94) < 0x7
	.space 0x7 - (. - gText_Rom_5F2B94)
	.endif
