	@ src/data/text/match_call_messages.h:164 gText_MatchCallExpert_Timothy_Intro2
	.globl gText_Rom_5F2FFF
gText_Rom_5F2FFF: @ 0x085F2FFF
	.string "まけてられんわ!$"
	.if (. - gText_Rom_5F2FFF) > 0x9
	.error "gText_Rom_5F2FFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2FFF) < 0x9
	.space 0x9 - (. - gText_Rom_5F2FFF)
	.endif
