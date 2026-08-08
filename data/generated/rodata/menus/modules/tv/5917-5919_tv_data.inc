	@ asm/tv.s:14092 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD9
gText_Rom_5CBFD9: @ 0x085CBFD9
	.string "あま$"
	.if (. - gText_Rom_5CBFD9) > 0x3
	.error "gText_Rom_5CBFD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD9) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD9)
	.endif
	.globl gUnknown_85CBFDC
gUnknown_85CBFDC: @ 0x085CBFDC

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
