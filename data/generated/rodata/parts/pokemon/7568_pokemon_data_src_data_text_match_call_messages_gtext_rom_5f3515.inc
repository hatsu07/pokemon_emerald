	@ src/data/text/match_call_messages.h:284 gText_MatchCallPkmnBreeder_Gabrielle_Intro2
	.globl gText_Rom_5F3515
gText_Rom_5F3515: @ 0x085F3515
	.string "たいせつに して くださいね$"
	.if (. - gText_Rom_5F3515) > 0xf
	.error "gText_Rom_5F3515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3515) < 0xf
	.space 0xf - (. - gText_Rom_5F3515)
	.endif
