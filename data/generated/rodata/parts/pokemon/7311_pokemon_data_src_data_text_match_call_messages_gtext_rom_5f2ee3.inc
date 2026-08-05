	@ src/data/text/match_call_messages.h:139 gText_MatchCallSchoolKid_Karen_Intro2
	.globl gText_Rom_5F2EE3
gText_Rom_5F2EE3: @ 0x085F2EE3
	.string "パパが おこづかい くれるの!$"
	.if (. - gText_Rom_5F2EE3) > 0x10
	.error "gText_Rom_5F2EE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2EE3) < 0x10
	.space 0x10 - (. - gText_Rom_5F2EE3)
	.endif
