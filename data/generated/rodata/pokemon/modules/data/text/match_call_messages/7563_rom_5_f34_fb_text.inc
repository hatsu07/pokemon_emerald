	@ src/data/text/match_call_messages.h:282 gText_MatchCallPkmnBreeder_Gabrielle_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F34FB
gText_Rom_5F34FB: @ 0x085F34FB
	.string "そだてがいの ある ポケモン$"
	.if (. - gText_Rom_5F34FB) != 0xf
	.error "gText_Rom_5F34FB must retain its original byte length"
	.endif
