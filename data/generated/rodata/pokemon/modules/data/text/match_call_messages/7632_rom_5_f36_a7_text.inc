	@ src/data/text/match_call_messages.h:322 gText_MatchCallPkmnTrainer_Wally_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F36A7
gText_Rom_5F36A7: @ 0x085F36A7
	.string "はじめて つかまえた ポケモン$"
	.if (. - gText_Rom_5F36A7) != 0x10
	.error "gText_Rom_5F36A7 must retain its original byte length"
	.endif
