	@ src/data/text/match_call_messages.h:338 gText_MatchCallSwellShock_Wattson_Intro1
	.globl gText_Rom_5F375F
gText_Rom_5F375F: @ 0x085F375F
	.string "とちゅうで なげだしたら$"
	.if (. - gText_Rom_5F375F) > 0xd
	.error "gText_Rom_5F375F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F375F) < 0xd
	.space 0xd - (. - gText_Rom_5F375F)
	.endif
