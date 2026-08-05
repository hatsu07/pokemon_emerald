	@ src/data/text/match_call_messages.h:167 gText_MatchCallExpert_Shelby_Pokemon
	.globl gText_Rom_5F3017
gText_Rom_5F3017: @ 0x085F3017
	.string "かくとうタイプ じゃよ$"
	.if (. - gText_Rom_5F3017) > 0xc
	.error "gText_Rom_5F3017 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3017) < 0xc
	.space 0xc - (. - gText_Rom_5F3017)
	.endif
