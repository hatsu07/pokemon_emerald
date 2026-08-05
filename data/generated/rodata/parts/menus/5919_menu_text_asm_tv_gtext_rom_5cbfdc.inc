	@ asm/tv.s:14100 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFDC
gText_Rom_5CBFDC: @ 0x085CBFDC
	.string "にが$"
	.if (. - gText_Rom_5CBFDC) > 0x3
	.error "gText_Rom_5CBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFDC) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFDC)
	.endif
