	@ src/data/text/match_call_messages.h:343 gText_MatchCallPassionBurn_Flannery_Intro1
	.globl gText_Rom_5F3791
gText_Rom_5F3791: @ 0x085F3791
	.string "いちにちの つかれは$"
	.if (. - gText_Rom_5F3791) > 0xb
	.error "gText_Rom_5F3791 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3791) < 0xb
	.space 0xb - (. - gText_Rom_5F3791)
	.endif
