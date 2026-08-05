	@ src/data/text/match_call_messages.h:76 gText_MatchCallSwimmer_Tony_Strategy
	.globl gText_Rom_5F2C28
gText_Rom_5F2C28: @ 0x085F2C28
	.string "ぜんりょくで ぶつかる!$"
	.if (. - gText_Rom_5F2C28) > 0xd
	.error "gText_Rom_5F2C28 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C28) < 0xd
	.space 0xd - (. - gText_Rom_5F2C28)
	.endif
