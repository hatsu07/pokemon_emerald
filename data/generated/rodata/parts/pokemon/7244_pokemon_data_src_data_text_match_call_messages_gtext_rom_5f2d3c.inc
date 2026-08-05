	@ src/data/text/match_call_messages.h:102 gText_MatchCallKindler_Bernie_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2D3C
gText_Rom_5F2D3C: @ 0x085F2D3C
	.string "やけどしそうな ポケモン$"
	.if (. - gText_Rom_5F2D3C) != 0xd
	.error "gText_Rom_5F2D3C must retain its original byte length"
	.endif
