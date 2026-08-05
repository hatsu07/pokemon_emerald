	@ src/data/text/match_call_messages.h:151 gText_MatchCallPokefan_Isabel_Strategy
	.globl gText_Rom_5F2F61
gText_Rom_5F2F61: @ 0x085F2F61
	.string "がんばれ ポケモンちゃん!$"
	.if (. - gText_Rom_5F2F61) > 0xe
	.error "gText_Rom_5F2F61 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F61) < 0xe
	.space 0xe - (. - gText_Rom_5F2F61)
	.endif
