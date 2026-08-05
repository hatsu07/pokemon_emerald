	@ src/data/text/match_call_messages.h:144 gText_MatchCallSchoolKid_Jerry_Intro2
	.globl gText_Rom_5F2F1A
gText_Rom_5F2F1A: @ 0x085F2F1A
	.string "けんきゅうしゃに なりたい!$"
	.if (. - gText_Rom_5F2F1A) > 0xf
	.error "gText_Rom_5F2F1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F1A) < 0xf
	.space 0xf - (. - gText_Rom_5F2F1A)
	.endif
