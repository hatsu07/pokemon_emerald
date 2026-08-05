	@ src/data/text/match_call_messages.h:136 gText_MatchCallSchoolKid_Karen_Strategy
	.globl gText_Rom_5F2EB6
gText_Rom_5F2EB6: @ 0x085F2EB6
	.string "あたまを つかって たたかうよ$"
	.if (. - gText_Rom_5F2EB6) > 0x10
	.error "gText_Rom_5F2EB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EB6) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EB6)
	.endif
