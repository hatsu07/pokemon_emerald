	@ src/data/text/match_call_messages.h:301 gText_MatchCallBugCatcher_James_Strategy
	.globl gText_Rom_5F35D0
gText_Rom_5F35D0: @ 0x085F35D0
	.string "すばやく こうげきだ!$"
	.if (. - gText_Rom_5F35D0) > 0xc
	.error "gText_Rom_5F35D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35D0) < 0xc
	.space 0xc - (. - gText_Rom_5F35D0)
	.endif
