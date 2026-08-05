	@ src/data/text/match_call_messages.h:4 gText_MatchCallAromaLady_Rose_Intro2
	.globl gText_Rom_5F2923
gText_Rom_5F2923: @ 0x085F2923
	.string "からだを けんこうに します!$"
	.if (. - gText_Rom_5F2923) > 0x10
	.error "gText_Rom_5F2923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2923) < 0x10
	.space 0x10 - (. - gText_Rom_5F2923)
	.endif
