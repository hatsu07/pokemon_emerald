	@ src/data/text/match_call_messages.h:319 gText_MatchCallYoungCouple_LoisAndHal_Intro2
	.globl gText_Rom_5F368B
gText_Rom_5F368B: @ 0x085F368B
	.string "えいえんに ラブラブ!$"
	.if (. - gText_Rom_5F368B) > 0xc
	.error "gText_Rom_5F368B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F368B) < 0xc
	.space 0xc - (. - gText_Rom_5F368B)
	.endif
