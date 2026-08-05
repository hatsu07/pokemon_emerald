	@ src/data/text/match_call_messages.h:257 gText_MatchCallSailor_Ernest_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F33E4
gText_Rom_5F33E4: @ 0x085F33E4
	.string "みずと かくとうタイプ$"
	.if (. - gText_Rom_5F33E4) != 0xc
	.error "gText_Rom_5F33E4 must retain its original byte length"
	.endif
