	@ src/data/text/match_call_messages.h:238 gText_MatchCallParasolLady_Madeline_Intro1
	.globl gText_Rom_5F3314
gText_Rom_5F3314: @ 0x085F3314
	.string "しがいせんは おはだの てき$"
	.if (. - gText_Rom_5F3314) > 0xf
	.error "gText_Rom_5F3314 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3314) < 0xf
	.space 0xf - (. - gText_Rom_5F3314)
	.endif
