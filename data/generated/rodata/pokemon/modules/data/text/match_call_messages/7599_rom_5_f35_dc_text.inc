	@ src/data/text/match_call_messages.h:302 gText_MatchCallBugCatcher_James_Pokemon
	.globl gText_Rom_5F35DC
gText_Rom_5F35DC: @ 0x085F35DC
	.string "むしタイプが いちばん!$"
	.if (. - gText_Rom_5F35DC) > 0xd
	.error "gText_Rom_5F35DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35DC) < 0xd
	.space 0xd - (. - gText_Rom_5F35DC)
	.endif
