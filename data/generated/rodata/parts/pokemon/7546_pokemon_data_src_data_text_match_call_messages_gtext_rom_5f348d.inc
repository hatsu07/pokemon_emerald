	@ src/data/text/match_call_messages.h:272 gText_MatchCallPkmnBreeder_Lydia_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F348D
gText_Rom_5F348D: @ 0x085F348D
	.string "ポケモンは じぶんの こども$"
	.if (. - gText_Rom_5F348D) != 0xf
	.error "gText_Rom_5F348D must retain its original byte length"
	.endif
