	@ src/data/text/match_call_messages.h:114 gText_MatchCallOldCouple_JohnAndJay_Intro2
	.globl gText_Rom_5F2DCD
gText_Rom_5F2DCD: @ 0x085F2DCD
	.string "ポケモン そだてまくりじゃよ$"
	.if (. - gText_Rom_5F2DCD) > 0xf
	.error "gText_Rom_5F2DCD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2DCD) < 0xf
	.space 0xf - (. - gText_Rom_5F2DCD)
	.endif
