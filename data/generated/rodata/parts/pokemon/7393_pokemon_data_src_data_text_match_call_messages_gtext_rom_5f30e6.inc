	@ src/data/text/match_call_messages.h:187 gText_MatchCallTriathlete_Maria_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F30E6
gText_Rom_5F30E6: @ 0x085F30E6
	.string "すばやい ポケモンを つかう$"
	.if (. - gText_Rom_5F30E6) != 0xf
	.error "gText_Rom_5F30E6 must retain its original byte length"
	.endif
