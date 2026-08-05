	@ src/data/text/match_call_messages.h:14 gText_MatchCallRuinManiac_Dusty_Intro2
	.globl gText_Rom_5F298E
gText_Rom_5F298E: @ 0x085F298E
	.string "とうざいなんぼく どこへでも!$"
	.if (. - gText_Rom_5F298E) > 0x10
	.error "gText_Rom_5F298E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F298E) < 0x10
	.space 0x10 - (. - gText_Rom_5F298E)
	.endif
