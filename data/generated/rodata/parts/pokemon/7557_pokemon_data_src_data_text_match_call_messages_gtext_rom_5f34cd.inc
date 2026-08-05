	@ src/data/text/match_call_messages.h:278 gText_MatchCallPkmnBreeder_Isaac_Intro1
	.globl gText_Rom_5F34CD
gText_Rom_5F34CD: @ 0x085F34CD
	.string "ポロックを たくさん あたえて$"
	.if (. - gText_Rom_5F34CD) > 0x10
	.error "gText_Rom_5F34CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34CD) < 0x10
	.space 0x10 - (. - gText_Rom_5F34CD)
	.endif
