	@ src/data/text/match_call_messages.h:362 gText_MatchCallDandyCharm_Juan_Pokemon
	.globl gText_Rom_5F3860
gText_Rom_5F3860: @ 0x085F3860
	.string "エレガントな ポケモンたち!$"
	.if (. - gText_Rom_5F3860) > 0xf
	.error "gText_Rom_5F3860 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3860) < 0xf
	.space 0xf - (. - gText_Rom_5F3860)
	.endif
