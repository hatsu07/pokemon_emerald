	@ src/data/text/match_call_messages.h:297 gText_MatchCallLass_Haley_Pokemon
	.globl gText_Rom_5F35A4
gText_Rom_5F35A4: @ 0x085F35A4
	.string "かわいい ポケモン だいすき!$"
	.if (. - gText_Rom_5F35A4) > 0x10
	.error "gText_Rom_5F35A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F35A4) < 0x10
	.space 0x10 - (. - gText_Rom_5F35A4)
	.endif
