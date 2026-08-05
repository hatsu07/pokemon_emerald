	@ src/data/text/match_call_messages.h:306 gText_MatchCallHiker_Trent_Strategy
	.globl gText_Rom_5F3606
gText_Rom_5F3606: @ 0x085F3606
	.string "パワーで しょうぶ!$"
	.if (. - gText_Rom_5F3606) > 0xb
	.error "gText_Rom_5F3606 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3606) < 0xb
	.space 0xb - (. - gText_Rom_5F3606)
	.endif
