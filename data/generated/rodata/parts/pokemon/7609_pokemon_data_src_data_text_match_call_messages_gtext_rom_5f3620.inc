	@ src/data/text/match_call_messages.h:308 gText_MatchCallHiker_Trent_Intro1
	.globl gText_Rom_5F3620
gText_Rom_5F3620: @ 0x085F3620
	.string "きょうの とざんの ために$"
	.if (. - gText_Rom_5F3620) > 0xe
	.error "gText_Rom_5F3620 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3620) < 0xe
	.space 0xe - (. - gText_Rom_5F3620)
	.endif
