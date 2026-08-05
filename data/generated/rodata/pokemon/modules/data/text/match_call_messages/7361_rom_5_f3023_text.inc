	@ src/data/text/match_call_messages.h:168 gText_MatchCallExpert_Shelby_Intro1
	.globl gText_Rom_5F3023
gText_Rom_5F3023: @ 0x085F3023
	.string "としよりには としよりなりの$"
	.if (. - gText_Rom_5F3023) > 0xf
	.error "gText_Rom_5F3023 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3023) < 0xf
	.space 0xf - (. - gText_Rom_5F3023)
	.endif
