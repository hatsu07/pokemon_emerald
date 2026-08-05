	@ src/data/text/match_call_messages.h:334 gText_MatchCallTheBigHit_Brawly_Intro2
	.globl gText_Rom_5F3737
gText_Rom_5F3737: @ 0x085F3737
	.string "オレを よんでいるぜ!$"
	.if (. - gText_Rom_5F3737) > 0xc
	.error "gText_Rom_5F3737 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3737) < 0xc
	.space 0xc - (. - gText_Rom_5F3737)
	.endif
