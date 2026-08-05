	@ src/data/text/match_call_messages.h:64 gText_MatchCallBeauty_Jessica_Intro2
	.globl gText_Rom_5F2BA9
gText_Rom_5F2BA9: @ 0x085F2BA9
	.string "つい あしを はこんじゃう$"
	.if (. - gText_Rom_5F2BA9) > 0xe
	.error "gText_Rom_5F2BA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2BA9) < 0xe
	.space 0xe - (. - gText_Rom_5F2BA9)
	.endif
