	@ src/data/text/match_call_messages.h:51 gText_MatchCallLady_Cindy_Strategy
	.globl gText_Rom_5F2B23
gText_Rom_5F2B23: @ 0x085F2B23
	.string "かてば いいのでしょう?$"
	.if (. - gText_Rom_5F2B23) > 0xd
	.error "gText_Rom_5F2B23 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B23) < 0xd
	.space 0xd - (. - gText_Rom_5F2B23)
	.endif
