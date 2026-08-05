	@ src/data/text/match_call_messages.h:286 gText_MatchCallPkmnRanger_Catherine_Strategy
	.globl gText_Rom_5F3524
gText_Rom_5F3524: @ 0x085F3524
	.string "ポケモンの ちからを しんじる$"
	.if (. - gText_Rom_5F3524) > 0x10
	.error "gText_Rom_5F3524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3524) < 0x10
	.space 0x10 - (. - gText_Rom_5F3524)
	.endif
