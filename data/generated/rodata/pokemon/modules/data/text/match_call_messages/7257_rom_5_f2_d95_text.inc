	@ src/data/text/match_call_messages.h:109 gText_MatchCallCamper_Ethan_Intro2
	.globl gText_Rom_5F2D95
gText_Rom_5F2D95: @ 0x085F2D95
	.string "ポケモンは つよくなるよ!$"
	.if (. - gText_Rom_5F2D95) > 0xe
	.error "gText_Rom_5F2D95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D95) < 0xe
	.space 0xe - (. - gText_Rom_5F2D95)
	.endif
