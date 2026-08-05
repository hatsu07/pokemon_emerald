	@ src/data/text/match_call_messages.h:13 gText_MatchCallRuinManiac_Dusty_Intro1
	.globl gText_Rom_5F297F
gText_Rom_5F297F: @ 0x085F297F
	.string "こだいの ロマンを もとめて$"
	.if (. - gText_Rom_5F297F) > 0xf
	.error "gText_Rom_5F297F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F297F) < 0xf
	.space 0xf - (. - gText_Rom_5F297F)
	.endif
