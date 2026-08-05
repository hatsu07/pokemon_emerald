	@ src/data/text/match_call_messages.h:82 gText_MatchCallBlackBelt_Nob_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C64
gText_Rom_5F2C64: @ 0x085F2C64
	.string "かくとうタイプ$"
	.if (. - gText_Rom_5F2C64) != 0x8
	.error "gText_Rom_5F2C64 must retain its original byte length"
	.endif
