	@ src/data/text/match_call_messages.h:54 gText_MatchCallLady_Cindy_Intro2
	.globl gText_Rom_5F2B4A
gText_Rom_5F2B4A: @ 0x085F2B4A
	.string "プールが ありますのよ$"
	.if (. - gText_Rom_5F2B4A) > 0xc
	.error "gText_Rom_5F2B4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2B4A) < 0xc
	.space 0xc - (. - gText_Rom_5F2B4A)
	.endif
