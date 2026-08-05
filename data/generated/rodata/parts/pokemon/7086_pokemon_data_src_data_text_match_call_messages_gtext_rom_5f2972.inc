	@ src/data/text/match_call_messages.h:12 gText_MatchCallRuinManiac_Dusty_Pokemon
	.globl gText_Rom_5F2972
gText_Rom_5F2972: @ 0x085F2972
	.string "ごっつい いわポケモン!$"
	.if (. - gText_Rom_5F2972) > 0xd
	.error "gText_Rom_5F2972 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2972) < 0xd
	.space 0xd - (. - gText_Rom_5F2972)
	.endif
