	@ src/data/text/match_call_messages.h:143 gText_MatchCallSchoolKid_Jerry_Intro1
	.globl gText_Rom_5F2F0D
gText_Rom_5F2F0D: @ 0x085F2F0D
	.string "しょうらいは ポケモンの$"
	.if (. - gText_Rom_5F2F0D) > 0xd
	.error "gText_Rom_5F2F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F0D) < 0xd
	.space 0xd - (. - gText_Rom_5F2F0D)
	.endif
