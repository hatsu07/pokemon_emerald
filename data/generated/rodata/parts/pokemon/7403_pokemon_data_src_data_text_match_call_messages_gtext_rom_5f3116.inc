	@ src/data/text/match_call_messages.h:192 gText_MatchCallTriathlete_Abigail_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3116
gText_Rom_5F3116: @ 0x085F3116
	.string "わたしの ポケモンは カチカチ$"
	.if (. - gText_Rom_5F3116) != 0x10
	.error "gText_Rom_5F3116 must retain its original byte length"
	.endif
