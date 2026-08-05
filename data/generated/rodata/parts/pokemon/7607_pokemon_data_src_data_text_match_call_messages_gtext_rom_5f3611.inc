	@ src/data/text/match_call_messages.h:307 gText_MatchCallHiker_Trent_Pokemon
	.globl gText_Rom_5F3611
gText_Rom_5F3611: @ 0x085F3611
	.string "かたい からだの ポケモン!$"
	.if (. - gText_Rom_5F3611) > 0xf
	.error "gText_Rom_5F3611 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3611) < 0xf
	.space 0xf - (. - gText_Rom_5F3611)
	.endif
