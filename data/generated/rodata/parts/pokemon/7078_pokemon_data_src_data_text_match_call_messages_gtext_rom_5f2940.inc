	@ src/data/text/match_call_messages.h:7 gText_MatchCallRuinManiac_Andres_Pokemon
	.globl gText_Rom_5F2940
gText_Rom_5F2940: @ 0x085F2940
	.string "いせき たんさくの パートナー$"
	.if (. - gText_Rom_5F2940) > 0x10
	.error "gText_Rom_5F2940 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2940) < 0x10
	.space 0x10 - (. - gText_Rom_5F2940)
	.endif
