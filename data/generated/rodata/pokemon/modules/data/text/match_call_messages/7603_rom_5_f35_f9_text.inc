	@ src/data/text/match_call_messages.h:304 gText_MatchCallBugCatcher_James_Intro2
	.globl gText_Rom_5F35F9
gText_Rom_5F35F9: @ 0x085F35F9
	.string "あさはやく おきないとね$"
	.if (. - gText_Rom_5F35F9) > 0xd
	.error "gText_Rom_5F35F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35F9) < 0xd
	.space 0xd - (. - gText_Rom_5F35F9)
	.endif
