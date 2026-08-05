	@ src/data/text/match_call_messages.h:63 gText_MatchCallBeauty_Jessica_Intro1
	.globl gText_Rom_5F2B9B
gText_Rom_5F2B9B: @ 0x085F2B9B
	.string "サファリゾーン だいすき!$"
	.if (. - gText_Rom_5F2B9B) > 0xe
	.error "gText_Rom_5F2B9B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B9B) < 0xe
	.space 0xe - (. - gText_Rom_5F2B9B)
	.endif
