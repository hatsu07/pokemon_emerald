	@ src/data/text/match_call_messages.h:138 gText_MatchCallSchoolKid_Karen_Intro1
	.globl gText_Rom_5F2ED5
gText_Rom_5F2ED5: @ 0x085F2ED5
	.string "テストで いいてん とると$"
	.if (. - gText_Rom_5F2ED5) > 0xe
	.error "gText_Rom_5F2ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2ED5) < 0xe
	.space 0xe - (. - gText_Rom_5F2ED5)
	.endif
