	@ src/data/text/match_call_messages.h:364 gText_MatchCallDandyCharm_Juan_Intro2
	.globl gText_Rom_5F387F
gText_Rom_5F387F: @ 0x085F387F
	.string "わたくしの パワーの みなもと$"
	.if (. - gText_Rom_5F387F) > 0x10
	.error "gText_Rom_5F387F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F387F) < 0x10
	.space 0x10 - (. - gText_Rom_5F387F)
	.endif
