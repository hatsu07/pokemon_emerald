	@ src/data/text/match_call_messages.h:48 gText_MatchCallHexManiac_Valerie_Intro1
	.globl gText_Rom_5F2B07
gText_Rom_5F2B07: @ 0x085F2B07
	.string "ほかの ひとには みえない$"
	.if (. - gText_Rom_5F2B07) > 0xe
	.error "gText_Rom_5F2B07 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B07) < 0xe
	.space 0xe - (. - gText_Rom_5F2B07)
	.endif
