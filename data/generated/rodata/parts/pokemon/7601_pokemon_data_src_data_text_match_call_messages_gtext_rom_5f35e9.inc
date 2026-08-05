	@ src/data/text/match_call_messages.h:303 gText_MatchCallBugCatcher_James_Intro1
	.globl gText_Rom_5F35E9
gText_Rom_5F35E9: @ 0x085F35E9
	.string "むしポケモンを つかまえるなら$"
	.if (. - gText_Rom_5F35E9) > 0x10
	.error "gText_Rom_5F35E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35E9) < 0x10
	.space 0x10 - (. - gText_Rom_5F35E9)
	.endif
