	@ src/data/text/match_call_messages.h:74 gText_MatchCallPokeManiac_Steve_Intro2
	.globl gText_Rom_5F2C1B
gText_Rom_5F2C1B: @ 0x085F2C1B
	.string "ポケモンが さいこう……$"
	.if (. - gText_Rom_5F2C1B) > 0xd
	.error "gText_Rom_5F2C1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C1B) < 0xd
	.space 0xd - (. - gText_Rom_5F2C1B)
	.endif
