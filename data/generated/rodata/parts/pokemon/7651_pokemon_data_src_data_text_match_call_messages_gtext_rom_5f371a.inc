	@ src/data/text/match_call_messages.h:332 gText_MatchCallTheBigHit_Brawly_Pokemon
	.globl gText_Rom_5F371A
gText_Rom_5F371A: @ 0x085F371A
	.string "かくとう ポケモン いのち!$"
	.if (. - gText_Rom_5F371A) > 0xf
	.error "gText_Rom_5F371A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F371A) < 0xf
	.space 0xf - (. - gText_Rom_5F371A)
	.endif
