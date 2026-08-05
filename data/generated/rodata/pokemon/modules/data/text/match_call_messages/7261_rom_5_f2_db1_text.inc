	@ src/data/text/match_call_messages.h:112 gText_MatchCallOldCouple_JohnAndJay_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2DB1
gText_Rom_5F2DB1: @ 0x085F2DB1
	.string "ながねん いっしょの ポケモン$"
	.if (. - gText_Rom_5F2DB1) != 0x10
	.error "gText_Rom_5F2DB1 must retain its original byte length"
	.endif
