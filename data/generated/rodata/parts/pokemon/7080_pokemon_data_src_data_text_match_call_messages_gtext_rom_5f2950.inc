	@ src/data/text/match_call_messages.h:8 gText_MatchCallRuinManiac_Andres_Intro1
	.globl gText_Rom_5F2950
gText_Rom_5F2950: @ 0x085F2950
	.string "うみの いせきを$"
	.if (. - gText_Rom_5F2950) > 0x9
	.error "gText_Rom_5F2950 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2950) < 0x9
	.space 0x9 - (. - gText_Rom_5F2950)
	.endif
