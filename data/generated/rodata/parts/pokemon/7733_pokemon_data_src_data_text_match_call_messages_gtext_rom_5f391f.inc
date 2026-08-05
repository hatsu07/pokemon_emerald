	@ src/data/text/match_call_messages.h:378 gText_MatchCallEliteFour_Glacia_Intro1
	.globl gText_Rom_5F391F
gText_Rom_5F391F: @ 0x085F391F
	.string "あたたかい とち だからこそ$"
	.if (. - gText_Rom_5F391F) > 0xf
	.error "gText_Rom_5F391F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F391F) < 0xf
	.space 0xf - (. - gText_Rom_5F391F)
	.endif
