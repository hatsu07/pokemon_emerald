	@ src/data/text/match_call_messages.h:234 gText_MatchCallBattleGirl_Cyndy_Intro2
	.globl gText_Rom_5F32E9
gText_Rom_5F32E9: @ 0x085F32E9
	.string "あたしが たたかっちゃう!$"
	.if (. - gText_Rom_5F32E9) > 0xe
	.error "gText_Rom_5F32E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32E9) < 0xe
	.space 0xe - (. - gText_Rom_5F32E9)
	.endif
