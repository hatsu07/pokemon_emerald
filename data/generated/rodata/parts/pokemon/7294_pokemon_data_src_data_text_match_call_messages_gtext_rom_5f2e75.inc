	@ src/data/text/match_call_messages.h:129 gText_MatchCallPsychic_Jacki_Intro2
	.globl gText_Rom_5F2E75
gText_Rom_5F2E75: @ 0x085F2E75
	.string "テレパシーで はなしてたの$"
	.if (. - gText_Rom_5F2E75) > 0xe
	.error "gText_Rom_5F2E75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E75) < 0xe
	.space 0xe - (. - gText_Rom_5F2E75)
	.endif
