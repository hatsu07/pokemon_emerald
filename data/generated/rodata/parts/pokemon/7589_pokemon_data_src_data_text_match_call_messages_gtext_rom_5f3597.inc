	@ src/data/text/match_call_messages.h:296 gText_MatchCallLass_Haley_Strategy
	.globl gText_Rom_5F3597
gText_Rom_5F3597: @ 0x085F3597
	.string "こんじょう みせちゃう!$"
	.if (. - gText_Rom_5F3597) > 0xd
	.error "gText_Rom_5F3597 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3597) < 0xd
	.space 0xd - (. - gText_Rom_5F3597)
	.endif
