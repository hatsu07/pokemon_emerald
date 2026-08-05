	@ src/data/text/match_call_messages.h:197 gText_MatchCallTriathlete_Dylan_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F3156
gText_Rom_5F3156: @ 0x085F3156
	.string "いい はしりをする ポケモン$"
	.if (. - gText_Rom_5F3156) != 0xf
	.error "gText_Rom_5F3156 must retain its original byte length"
	.endif
