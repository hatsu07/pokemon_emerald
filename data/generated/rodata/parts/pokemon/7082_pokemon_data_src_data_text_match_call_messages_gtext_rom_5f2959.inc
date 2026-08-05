	@ src/data/text/match_call_messages.h:9 gText_MatchCallRuinManiac_Andres_Intro2
	.globl gText_Rom_5F2959
gText_Rom_5F2959: @ 0x085F2959
	.string "さがして いるのだ!$"
	.if (. - gText_Rom_5F2959) > 0xb
	.error "gText_Rom_5F2959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2959) < 0xb
	.space 0xb - (. - gText_Rom_5F2959)
	.endif
