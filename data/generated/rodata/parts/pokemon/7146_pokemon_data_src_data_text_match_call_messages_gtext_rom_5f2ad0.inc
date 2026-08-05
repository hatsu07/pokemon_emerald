	@ src/data/text/match_call_messages.h:43 gText_MatchCallCooltrainer_Wilton_Intro1
	.globl gText_Rom_5F2AD0
gText_Rom_5F2AD0: @ 0x085F2AD0
	.string "トレーナーズ スクールの$"
	.if (. - gText_Rom_5F2AD0) > 0xd
	.error "gText_Rom_5F2AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2AD0) < 0xd
	.space 0xd - (. - gText_Rom_5F2AD0)
	.endif
