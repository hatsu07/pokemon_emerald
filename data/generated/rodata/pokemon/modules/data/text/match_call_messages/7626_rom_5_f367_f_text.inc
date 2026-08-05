	@ src/data/text/match_call_messages.h:318 gText_MatchCallYoungCouple_LoisAndHal_Intro1
	.globl gText_Rom_5F367F
gText_Rom_5F367F: @ 0x085F367F
	.string "わたしたち ラブラブ!$"
	.if (. - gText_Rom_5F367F) > 0xc
	.error "gText_Rom_5F367F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F367F) < 0xc
	.space 0xc - (. - gText_Rom_5F367F)
	.endif
