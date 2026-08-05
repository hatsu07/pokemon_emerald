	@ src/data/text/match_call_messages.h:84 gText_MatchCallBlackBelt_Nob_Intro2
	.globl gText_Rom_5F2C77
gText_Rom_5F2C77: @ 0x085F2C77
	.string "かわら10まい われるぜ!$"
	.if (. - gText_Rom_5F2C77) > 0xe
	.error "gText_Rom_5F2C77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C77) < 0xe
	.space 0xe - (. - gText_Rom_5F2C77)
	.endif
