	@ src/data/text/match_call_messages.h:233 gText_MatchCallBattleGirl_Cyndy_Intro1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5F32DE
gText_Rom_5F32DE: @ 0x085F32DE
	.string "ポケモンで まけたら$"
	.if (. - gText_Rom_5F32DE) != 0xb
	.error "gText_Rom_5F32DE must retain its original byte length"
	.endif
