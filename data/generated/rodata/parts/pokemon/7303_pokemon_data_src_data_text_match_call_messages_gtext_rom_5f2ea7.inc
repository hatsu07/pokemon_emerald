	@ src/data/text/match_call_messages.h:134 gText_MatchCallGentleman_Walter_Intro2
	.globl gText_Rom_5F2EA7
gText_Rom_5F2EA7: @ 0x085F2EA7
	.string "まいにちの ティータイムです$"
	.if (. - gText_Rom_5F2EA7) > 0xf
	.error "gText_Rom_5F2EA7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EA7) < 0xf
	.space 0xf - (. - gText_Rom_5F2EA7)
	.endif
