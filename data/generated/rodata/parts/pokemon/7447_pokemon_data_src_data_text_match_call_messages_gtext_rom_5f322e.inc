	@ src/data/text/match_call_messages.h:217 gText_MatchCallDragonTamer_Nicolas_Pokemon
	.globl gText_Rom_5F322E
gText_Rom_5F322E: @ 0x085F322E
	.string "ドラゴンの つよさを みろ!$"
	.if (. - gText_Rom_5F322E) > 0xf
	.error "gText_Rom_5F322E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F322E) < 0xf
	.space 0xf - (. - gText_Rom_5F322E)
	.endif
