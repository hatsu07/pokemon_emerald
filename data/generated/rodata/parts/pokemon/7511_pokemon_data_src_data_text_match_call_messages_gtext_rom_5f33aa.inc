	@ src/data/text/match_call_messages.h:252 gText_MatchCallTwins_AmyAndLiv_Pokemon
	.globl gText_Rom_5F33AA
gText_Rom_5F33AA: @ 0x085F33AA
	.string "いっしょに そだててるの!$"
	.if (. - gText_Rom_5F33AA) > 0xe
	.error "gText_Rom_5F33AA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F33AA) < 0xe
	.space 0xe - (. - gText_Rom_5F33AA)
	.endif
