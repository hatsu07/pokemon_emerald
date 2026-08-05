	@ src/data/text/match_call_messages.h:101 gText_MatchCallKindler_Bernie_Strategy
	.globl gText_Rom_5F2D2C
gText_Rom_5F2D2C: @ 0x085F2D2C
	.string "ほのおで すべて やきつくす!$"
	.if (. - gText_Rom_5F2D2C) > 0x10
	.error "gText_Rom_5F2D2C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2D2C) < 0x10
	.space 0x10 - (. - gText_Rom_5F2D2C)
	.endif
