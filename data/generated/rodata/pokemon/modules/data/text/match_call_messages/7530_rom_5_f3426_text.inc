	@ src/data/text/match_call_messages.h:263 gText_MatchCallSailor_Cory_Intro1
	.globl gText_Rom_5F3426
gText_Rom_5F3426: @ 0x085F3426
	.string "おおきな こえを だすときは$"
	.if (. - gText_Rom_5F3426) > 0xf
	.error "gText_Rom_5F3426 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3426) < 0xf
	.space 0xf - (. - gText_Rom_5F3426)
	.endif
