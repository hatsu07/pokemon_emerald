	@ src/data/text/match_call_messages.h:283 gText_MatchCallPkmnBreeder_Gabrielle_Intro1
	.globl gText_Rom_5F350A
gText_Rom_5F350A: @ 0x085F350A
	.string "であった ポケモンは$"
	.if (. - gText_Rom_5F350A) > 0xb
	.error "gText_Rom_5F350A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F350A) < 0xb
	.space 0xb - (. - gText_Rom_5F350A)
	.endif
