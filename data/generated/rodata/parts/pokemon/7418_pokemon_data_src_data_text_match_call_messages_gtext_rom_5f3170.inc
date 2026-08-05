	@ src/data/text/match_call_messages.h:199 gText_MatchCallTriathlete_Dylan_Intro2
	.globl gText_Rom_5F3170
gText_Rom_5F3170: @ 0x085F3170
	.string "かぜに なれるのさ……!$"
	.if (. - gText_Rom_5F3170) > 0xd
	.error "gText_Rom_5F3170 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3170) < 0xd
	.space 0xd - (. - gText_Rom_5F3170)
	.endif
