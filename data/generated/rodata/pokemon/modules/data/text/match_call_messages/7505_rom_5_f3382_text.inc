	@ src/data/text/match_call_messages.h:248 gText_MatchCallPicnicker_Diana_Intro1
	.globl gText_Rom_5F3382
gText_Rom_5F3382: @ 0x085F3382
	.string "あの おかの むこうには$"
	.if (. - gText_Rom_5F3382) > 0xd
	.error "gText_Rom_5F3382 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3382) < 0xd
	.space 0xd - (. - gText_Rom_5F3382)
	.endif
