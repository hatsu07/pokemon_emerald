	@ src/data/text/match_call_messages.h:287 gText_MatchCallPkmnRanger_Catherine_Pokemon
	.globl gText_Rom_5F3534
gText_Rom_5F3534: @ 0x085F3534
	.string "つよい ポケモンが すき$"
	.if (. - gText_Rom_5F3534) > 0xd
	.error "gText_Rom_5F3534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3534) < 0xd
	.space 0xd - (. - gText_Rom_5F3534)
	.endif
