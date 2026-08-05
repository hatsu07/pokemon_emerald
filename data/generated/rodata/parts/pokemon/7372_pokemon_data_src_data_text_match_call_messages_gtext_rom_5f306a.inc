	@ src/data/text/match_call_messages.h:174 gText_MatchCallYoungster_Calvin_Intro2
	.globl gText_Rom_5F306A
gText_Rom_5F306A: @ 0x085F306A
	.string "がんばるぜ!$"
	.if (. - gText_Rom_5F306A) > 0x7
	.error "gText_Rom_5F306A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F306A) < 0x7
	.space 0x7 - (. - gText_Rom_5F306A)
	.endif
