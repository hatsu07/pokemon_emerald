	@ src/data/text/match_call_messages.h:104 gText_MatchCallKindler_Bernie_Intro2
	.globl gText_Rom_5F2D58
gText_Rom_5F2D58: @ 0x085F2D58
	.string "ひを けす みずを わすれるな$"
	.if (. - gText_Rom_5F2D58) > 0x10
	.error "gText_Rom_5F2D58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D58) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D58)
	.endif
