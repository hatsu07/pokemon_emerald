	@ src/data/text/match_call_messages.h:106 gText_MatchCallCamper_Ethan_Strategy
	.globl gText_Rom_5F2D68
gText_Rom_5F2D68: @ 0x085F2D68
	.string "ねばって ねばって ねばる!$"
	.if (. - gText_Rom_5F2D68) > 0xf
	.error "gText_Rom_5F2D68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D68) < 0xf
	.space 0xf - (. - gText_Rom_5F2D68)
	.endif
