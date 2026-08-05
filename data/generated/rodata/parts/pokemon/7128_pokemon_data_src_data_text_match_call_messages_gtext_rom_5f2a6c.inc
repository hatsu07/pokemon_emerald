	@ src/data/text/match_call_messages.h:34 gText_MatchCallCooltrainer_Cristin_Intro2
	.globl gText_Rom_5F2A6C
gText_Rom_5F2A6C: @ 0x085F2A6C
	.string "トレーナーを めざしてるの!$"
	.if (. - gText_Rom_5F2A6C) > 0xf
	.error "gText_Rom_5F2A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2A6C) < 0xf
	.space 0xf - (. - gText_Rom_5F2A6C)
	.endif
