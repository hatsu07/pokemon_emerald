	@ src/data/text/match_call_messages.h:216 gText_MatchCallDragonTamer_Nicolas_Strategy
	.globl gText_Rom_5F321E
gText_Rom_5F321E: @ 0x085F321E
	.string "ポケモンの パワーが すべて!$"
	.if (. - gText_Rom_5F321E) > 0x10
	.error "gText_Rom_5F321E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F321E) < 0x10
	.space 0x10 - (. - gText_Rom_5F321E)
	.endif
