	@ src/data/text/match_call_messages.h:148 gText_MatchCallSrAndJr_AnnaAndMeg_Intro1
	.globl gText_Rom_5F2F43
gText_Rom_5F2F43: @ 0x085F2F43
	.string "わたしたち ポケモンクラブの$"
	.if (. - gText_Rom_5F2F43) > 0xf
	.error "gText_Rom_5F2F43 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F43) < 0xf
	.space 0xf - (. - gText_Rom_5F2F43)
	.endif
