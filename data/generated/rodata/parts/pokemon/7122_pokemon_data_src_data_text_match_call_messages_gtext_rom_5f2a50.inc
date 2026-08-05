	@ src/data/text/match_call_messages.h:32 gText_MatchCallCooltrainer_Cristin_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A50
gText_Rom_5F2A50: @ 0x085F2A50
	.string "いろんな ポケモンで しょうぶ$"
	.if (. - gText_Rom_5F2A50) != 0x10
	.error "gText_Rom_5F2A50 must retain its original byte length"
	.endif
