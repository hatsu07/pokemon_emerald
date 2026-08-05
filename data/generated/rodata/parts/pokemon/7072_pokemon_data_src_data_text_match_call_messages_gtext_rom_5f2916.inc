	@ src/data/text/match_call_messages.h:3 gText_MatchCallAromaLady_Rose_Intro1
	.globl gText_Rom_5F2916
gText_Rom_5F2916: @ 0x085F2916
	.string "よい かおりが こころと$"
	.if (. - gText_Rom_5F2916) > 0xd
	.error "gText_Rom_5F2916 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2916) < 0xd
	.space 0xd - (. - gText_Rom_5F2916)
	.endif
