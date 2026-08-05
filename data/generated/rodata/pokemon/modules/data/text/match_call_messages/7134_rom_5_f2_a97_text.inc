	@ src/data/text/match_call_messages.h:38 gText_MatchCallCooltrainer_Brooke_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F2A97
gText_Rom_5F2A97: @ 0x085F2A97
	.string "めざすは ポケモンチャンピオン$"
	.if (. - gText_Rom_5F2A97) != 0x10
	.error "gText_Rom_5F2A97 must retain its original byte length"
	.endif
