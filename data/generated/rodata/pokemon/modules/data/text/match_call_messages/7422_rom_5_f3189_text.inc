	@ src/data/text/match_call_messages.h:202 gText_MatchCallTriathlete_Katelyn_Pokemon
	.globl gText_Rom_5F3189
gText_Rom_5F3189: @ 0x085F3189
	.string "みずポケモン さいこう!$"
	.if (. - gText_Rom_5F3189) > 0xd
	.error "gText_Rom_5F3189 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3189) < 0xd
	.space 0xd - (. - gText_Rom_5F3189)
	.endif
