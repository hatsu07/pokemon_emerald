	@ src/data/text/match_call_messages.h:279 gText_MatchCallPkmnBreeder_Isaac_Intro2
	.globl gText_Rom_5F34DD
gText_Rom_5F34DD: @ 0x085F34DD
	.string "コンテストも ねらってます$"
	.if (. - gText_Rom_5F34DD) > 0xe
	.error "gText_Rom_5F34DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F34DD) < 0xe
	.space 0xe - (. - gText_Rom_5F34DD)
	.endif
