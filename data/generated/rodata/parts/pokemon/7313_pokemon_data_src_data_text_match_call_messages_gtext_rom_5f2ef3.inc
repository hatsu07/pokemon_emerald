	@ src/data/text/match_call_messages.h:141 gText_MatchCallSchoolKid_Jerry_Strategy
	.globl gText_Rom_5F2EF3
gText_Rom_5F2EF3: @ 0x085F2EF3
	.string "ちしきなら まけないぜ!$"
	.if (. - gText_Rom_5F2EF3) > 0xd
	.error "gText_Rom_5F2EF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EF3) < 0xd
	.space 0xd - (. - gText_Rom_5F2EF3)
	.endif
