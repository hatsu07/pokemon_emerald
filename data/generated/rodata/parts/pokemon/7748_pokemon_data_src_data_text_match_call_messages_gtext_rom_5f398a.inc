	@ src/data/text/match_call_messages.h:387 gText_MatchCallChampion_Wallace_Pokemon
	.globl gText_Rom_5F398A
gText_Rom_5F398A: @ 0x085F398A
	.string "ゆうがな ポケモンが すき$"
	.if (. - gText_Rom_5F398A) > 0xe
	.error "gText_Rom_5F398A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F398A) < 0xe
	.space 0xe - (. - gText_Rom_5F398A)
	.endif
