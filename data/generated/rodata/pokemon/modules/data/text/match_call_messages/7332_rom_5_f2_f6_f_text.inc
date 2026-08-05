	@ src/data/text/match_call_messages.h:152 gText_MatchCallPokefan_Isabel_Pokemon
	.globl gText_Rom_5F2F6F
gText_Rom_5F2F6F: @ 0x085F2F6F
	.string "すき きらいは なしよ$"
	.if (. - gText_Rom_5F2F6F) > 0xc
	.error "gText_Rom_5F2F6F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F2F6F) < 0xc
	.space 0xc - (. - gText_Rom_5F2F6F)
	.endif
