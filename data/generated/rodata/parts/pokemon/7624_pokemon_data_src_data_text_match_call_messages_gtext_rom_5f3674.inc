	@ src/data/text/match_call_messages.h:317 gText_MatchCallYoungCouple_LoisAndHal_Pokemon
	.globl gText_Rom_5F3674
gText_Rom_5F3674: @ 0x085F3674
	.string "ラブラブ ポケモン!$"
	.if (. - gText_Rom_5F3674) > 0xb
	.error "gText_Rom_5F3674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F3674) < 0xb
	.space 0xb - (. - gText_Rom_5F3674)
	.endif
