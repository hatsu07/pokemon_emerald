	@ src/data/text/match_call_messages.h:204 gText_MatchCallTriathlete_Katelyn_Intro2
	.globl gText_Rom_5F31A1
gText_Rom_5F31A1: @ 0x085F31A1
	.string "およいでいるわね!$"
	.if (. - gText_Rom_5F31A1) > 0xa
	.error "gText_Rom_5F31A1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F31A1) < 0xa
	.space 0xa - (. - gText_Rom_5F31A1)
	.endif
