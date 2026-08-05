	@ src/data/text/match_call_messages.h:372 gText_MatchCallEliteFour_Phoebe_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F38D6
gText_Rom_5F38D6: @ 0x085F38D6
	.string "つかみどころ ありません$"
	.if (. - gText_Rom_5F38D6) != 0xd
	.error "gText_Rom_5F38D6 must retain its original byte length"
	.endif
