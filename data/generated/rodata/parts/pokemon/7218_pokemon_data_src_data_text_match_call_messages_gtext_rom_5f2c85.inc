	@ src/data/text/match_call_messages.h:86 gText_MatchCallBlackBelt_Koji_Strategy
	.globl gText_Rom_5F2C85
gText_Rom_5F2C85: @ 0x085F2C85
	.string "からての ちからを みせてやる$"
	.if (. - gText_Rom_5F2C85) > 0x10
	.error "gText_Rom_5F2C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2C85) < 0x10
	.space 0x10 - (. - gText_Rom_5F2C85)
	.endif
