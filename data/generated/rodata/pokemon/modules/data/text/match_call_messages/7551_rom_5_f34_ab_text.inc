	@ src/data/text/match_call_messages.h:274 gText_MatchCallPkmnBreeder_Lydia_Intro2
	.globl gText_Rom_5F34AB
gText_Rom_5F34AB: @ 0x085F34AB
	.string "ちしきと あいじょうよ!$"
	.if (. - gText_Rom_5F34AB) > 0xd
	.error "gText_Rom_5F34AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34AB) < 0xd
	.space 0xd - (. - gText_Rom_5F34AB)
	.endif
