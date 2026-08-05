	@ asm/tv.s:14127 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFBB
gText_Rom_5CBFBB: @ 0x085CBFBB
	.string "おいしい$"
	.if (. - gText_Rom_5CBFBB) > 0x5
	.error "gText_Rom_5CBFBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFBB)
	.endif
