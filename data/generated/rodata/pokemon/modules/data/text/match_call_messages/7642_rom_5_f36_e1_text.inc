	@ src/data/text/match_call_messages.h:327 gText_MatchCallRockinWhiz_Roxanne_Pokemon
	.globl gText_Rom_5F36E1
gText_Rom_5F36E1: @ 0x085F36E1
	.string "がっしり タイプが このみ!$"
	.if (. - gText_Rom_5F36E1) > 0xf
	.error "gText_Rom_5F36E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F36E1) < 0xf
	.space 0xf - (. - gText_Rom_5F36E1)
	.endif
