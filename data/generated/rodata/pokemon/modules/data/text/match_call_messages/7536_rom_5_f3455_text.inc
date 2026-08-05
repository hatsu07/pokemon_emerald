	@ src/data/text/match_call_messages.h:267 gText_MatchCallCollector_Edwin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3455
gText_Rom_5F3455: @ 0x085F3455
	.string "めずらしい ポケモン だいすき$"
	.if (. - gText_Rom_5F3455) != 0x10
	.error "gText_Rom_5F3455 must retain its original byte length"
	.endif
