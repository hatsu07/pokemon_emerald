	@ src/data/text/match_call_messages.h:126 gText_MatchCallPsychic_Jacki_Strategy
	.globl gText_Rom_5F2E50
gText_Rom_5F2E50: @ 0x085F2E50
	.string "フルパワーで たたかう$"
	.if (. - gText_Rom_5F2E50) > 0xc
	.error "gText_Rom_5F2E50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2E50) < 0xc
	.space 0xc - (. - gText_Rom_5F2E50)
	.endif
