	@ src/data/text/match_call_messages.h:376 gText_MatchCallEliteFour_Glacia_Strategy
	.globl gText_Rom_5F3901
gText_Rom_5F3901: @ 0x085F3901
	.string "どうぐを くしして たたかう$"
	.if (. - gText_Rom_5F3901) > 0xf
	.error "gText_Rom_5F3901 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3901) < 0xf
	.space 0xf - (. - gText_Rom_5F3901)
	.endif
