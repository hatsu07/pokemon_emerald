	@ asm/tv.s:14135 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFB8
gText_Rom_5CBFB8: @ 0x085CBFB8
	.string "いい$"
	.if (. - gText_Rom_5CBFB8) > 0x3
	.error "gText_Rom_5CBFB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB8) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFB8)
	.endif
