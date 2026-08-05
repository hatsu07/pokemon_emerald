	@ src/data/text/match_call_messages.h:11 gText_MatchCallRuinManiac_Dusty_Strategy
	.globl gText_Rom_5F2964
gText_Rom_5F2964: @ 0x085F2964
	.string "ちからおしが しんじょう!$"
	.if (. - gText_Rom_5F2964) > 0xe
	.error "gText_Rom_5F2964 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2964) < 0xe
	.space 0xe - (. - gText_Rom_5F2964)
	.endif
