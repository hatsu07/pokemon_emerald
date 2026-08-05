	@ src/data/text/match_call_messages.h:232 gText_MatchCallBattleGirl_Cyndy_Pokemon
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32D1
gText_Rom_5F32D1: @ 0x085F32D1
	.string "すばやい かくとうタイプ$"
	.if (. - gText_Rom_5F32D1) != 0xd
	.error "gText_Rom_5F32D1 must retain its original byte length"
	.endif
