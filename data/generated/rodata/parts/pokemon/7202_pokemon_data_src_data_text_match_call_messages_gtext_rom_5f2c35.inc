	@ src/data/text/match_call_messages.h:77 gText_MatchCallSwimmer_Tony_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2C35
gText_Rom_5F2C35: @ 0x085F2C35
	.string "いかした みずタイプ$"
	.if (. - gText_Rom_5F2C35) != 0xb
	.error "gText_Rom_5F2C35 must retain its original byte length"
	.endif
