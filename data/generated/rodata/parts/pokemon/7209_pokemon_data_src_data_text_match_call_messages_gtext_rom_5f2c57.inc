	@ src/data/text/match_call_messages.h:81 gText_MatchCallBlackBelt_Nob_Strategy
	.globl gText_Rom_5F2C57
gText_Rom_5F2C57: @ 0x085F2C57
	.string "だげきワザで がんがん!$"
	.if (. - gText_Rom_5F2C57) > 0xd
	.error "gText_Rom_5F2C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C57) < 0xd
	.space 0xd - (. - gText_Rom_5F2C57)
	.endif
