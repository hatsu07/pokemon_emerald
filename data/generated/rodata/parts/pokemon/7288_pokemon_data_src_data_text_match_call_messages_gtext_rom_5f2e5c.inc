	@ src/data/text/match_call_messages.h:127 gText_MatchCallPsychic_Jacki_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2E5C
gText_Rom_5F2E5C: @ 0x085F2E5C
	.string "ナゾの おおい ポケモン$"
	.if (. - gText_Rom_5F2E5C) != 0xd
	.error "gText_Rom_5F2E5C must retain its original byte length"
	.endif
