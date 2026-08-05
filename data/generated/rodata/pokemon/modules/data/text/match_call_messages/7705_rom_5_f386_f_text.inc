	@ src/data/text/match_call_messages.h:363 gText_MatchCallDandyCharm_Juan_Intro1
	.globl gText_Rom_5F386F
gText_Rom_5F386F: @ 0x085F386F
	.string "うつくしいレディの せいえんが$"
	.if (. - gText_Rom_5F386F) > 0x10
	.error "gText_Rom_5F386F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F386F) < 0x10
	.space 0x10 - (. - gText_Rom_5F386F)
	.endif
