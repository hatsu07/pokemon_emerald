	@ src/data/text/match_call_messages.h:72 gText_MatchCallPokeManiac_Steve_Pokemon
	.globl gText_Rom_5F2C01
gText_Rom_5F2C01: @ 0x085F2C01
	.string "てつやして てにいれた……$"
	.if (. - gText_Rom_5F2C01) > 0xe
	.error "gText_Rom_5F2C01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C01) < 0xe
	.space 0xe - (. - gText_Rom_5F2C01)
	.endif
