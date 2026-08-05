	@ src/data/text/match_call_messages.h:236 gText_MatchCallParasolLady_Madeline_Strategy
	.globl gText_Rom_5F32F7
gText_Rom_5F32F7: @ 0x085F32F7
	.string "がんばれ わたしの ポケモン!$"
	.if (. - gText_Rom_5F32F7) > 0x10
	.error "gText_Rom_5F32F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F32F7) < 0x10
	.space 0x10 - (. - gText_Rom_5F32F7)
	.endif
