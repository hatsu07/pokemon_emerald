	@ asm/tv.s:14237 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCE
gText_Rom_5CBFCE: @ 0x085CBFCE
	.string "さいあく$"
	.if (. - gText_Rom_5CBFCE) > 0x5
	.error "gText_Rom_5CBFCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCE) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFCE)
	.endif
