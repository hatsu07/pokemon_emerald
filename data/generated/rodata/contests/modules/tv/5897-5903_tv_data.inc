	@ asm/tv.s:15280 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFAD
gText_Rom_5CBFAD: @ 0x085CBFAD
	.string "スロット{EOS}"
	.if (. - gText_Rom_5CBFAD) > 0x5
	.error "gText_Rom_5CBFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFAD) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFAD)
	.endif

	@ asm/tv.s:15288 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFB2
gText_Rom_5CBFB2: @ 0x085CBFB2
	.string "ルーレット{EOS}"
	.if (. - gText_Rom_5CBFB2) > 0x6
	.error "gText_Rom_5CBFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB2) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFB2)
	.endif

	@ asm/tv.s:14135 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFB8
gText_Rom_5CBFB8: @ 0x085CBFB8
	.string "いい{EOS}"
	.if (. - gText_Rom_5CBFB8) > 0x3
	.error "gText_Rom_5CBFB8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB8) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFB8)
	.endif

	@ asm/tv.s:14127 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFBB
gText_Rom_5CBFBB: @ 0x085CBFBB
	.string "おいしい{EOS}"
	.if (. - gText_Rom_5CBFBB) > 0x5
	.error "gText_Rom_5CBFBB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFBB) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFBB)
	.endif
