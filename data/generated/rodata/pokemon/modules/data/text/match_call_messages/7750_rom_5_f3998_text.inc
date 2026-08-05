	@ src/data/text/match_call_messages.h:388 gText_MatchCallChampion_Wallace_Intro1
	.globl gText_Rom_5F3998
gText_Rom_5F3998: @ 0x085F3998
	.string "ちせいと うつくしさを$"
	.if (. - gText_Rom_5F3998) > 0xc
	.error "gText_Rom_5F3998 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3998) < 0xc
	.space 0xc - (. - gText_Rom_5F3998)
	.endif
