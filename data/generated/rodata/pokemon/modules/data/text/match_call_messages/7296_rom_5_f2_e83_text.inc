	@ src/data/text/match_call_messages.h:131 gText_MatchCallGentleman_Walter_Strategy
	.globl gText_Rom_5F2E83
gText_Rom_5F2E83: @ 0x085F2E83
	.string "あわてず さわがず$"
	.if (. - gText_Rom_5F2E83) > 0xa
	.error "gText_Rom_5F2E83 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E83) < 0xa
	.space 0xa - (. - gText_Rom_5F2E83)
	.endif
