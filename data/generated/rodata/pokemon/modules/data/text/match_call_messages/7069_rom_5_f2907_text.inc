	@ src/data/text/match_call_messages.h:2 gText_MatchCallAromaLady_Rose_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2907
gText_Rom_5F2907: @ 0x085F2907
	.string "いい においの くさポケモン$"
	.if (. - gText_Rom_5F2907) != 0xf
	.error "gText_Rom_5F2907 must retain its original byte length"
	.endif
