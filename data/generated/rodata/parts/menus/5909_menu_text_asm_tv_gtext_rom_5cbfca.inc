	@ asm/tv.s:14229 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCA
gText_Rom_5CBFCA: @ 0x085CBFCA
	.string "まずい$"
	.if (. - gText_Rom_5CBFCA) > 0x4
	.error "gText_Rom_5CBFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCA) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFCA)
	.endif
