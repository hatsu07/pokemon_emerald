	@ src/data/text/match_call_messages.h:218 gText_MatchCallDragonTamer_Nicolas_Intro1
	.globl gText_Rom_5F323D
gText_Rom_5F323D: @ 0x085F323D
	.string "いつか さいきょうでんせつを$"
	.if (. - gText_Rom_5F323D) > 0xf
	.error "gText_Rom_5F323D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F323D) < 0xf
	.space 0xf - (. - gText_Rom_5F323D)
	.endif
