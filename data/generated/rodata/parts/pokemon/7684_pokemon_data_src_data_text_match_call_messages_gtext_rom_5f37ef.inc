	@ src/data/text/match_call_messages.h:352 gText_MatchCallSkyTamer_Winona_Pokemon
	.globl gText_Rom_5F37EF
gText_Rom_5F37EF: @ 0x085F37EF
	.string "かれいに そらを まう!$"
	.if (. - gText_Rom_5F37EF) > 0xd
	.error "gText_Rom_5F37EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F37EF) < 0xd
	.space 0xd - (. - gText_Rom_5F37EF)
	.endif
