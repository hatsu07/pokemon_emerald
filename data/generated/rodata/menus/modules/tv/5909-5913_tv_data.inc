	@ asm/tv.s:14229 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCA
gText_Rom_5CBFCA: @ 0x085CBFCA
	.string "まずい{EOS}"
	.if (. - gText_Rom_5CBFCA) > 0x4
	.error "gText_Rom_5CBFCA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCA) < 0x4
	.space 0x4 - (. - gText_Rom_5CBFCA)
	.endif

	@ asm/tv.s:14237 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFCE
gText_Rom_5CBFCE: @ 0x085CBFCE
	.string "さいあく{EOS}"
	.if (. - gText_Rom_5CBFCE) > 0x5
	.error "gText_Rom_5CBFCE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFCE) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFCE)
	.endif

	@ asm/tv.s:14076 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD3
gText_Rom_5CBFD3: @ 0x085CBFD3
	.string "から{EOS}"
	.if (. - gText_Rom_5CBFD3) > 0x3
	.error "gText_Rom_5CBFD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD3) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD3)
	.endif
