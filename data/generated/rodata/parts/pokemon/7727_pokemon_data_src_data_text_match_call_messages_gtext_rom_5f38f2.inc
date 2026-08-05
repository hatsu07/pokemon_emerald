	@ src/data/text/match_call_messages.h:374 gText_MatchCallEliteFour_Phoebe_Intro2
	.globl gText_Rom_5F38F2
gText_Rom_5F38F2: @ 0x085F38F2
	.string "げんきに している かしら?$"
	.if (. - gText_Rom_5F38F2) > 0xf
	.error "gText_Rom_5F38F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F38F2) < 0xf
	.space 0xf - (. - gText_Rom_5F38F2)
	.endif
