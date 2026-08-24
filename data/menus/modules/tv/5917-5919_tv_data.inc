
	@ src/strings.c:651 gText_Dry2
	.globl gText_Dry2
gText_Dry2: @ 0x085CBFD6
	.string "しぶ{EOS}"
	.if (. - gText_Dry2) > 0x3
	.error "gText_Dry2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Dry2) < 0x3
	.space 0x3 - (. - gText_Dry2)
	.endif

	@ asm/tv.s:14092 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFD9
gText_Rom_5CBFD9: @ 0x085CBFD9
	.string "あま{EOS}"
	.if (. - gText_Rom_5CBFD9) > 0x3
	.error "gText_Rom_5CBFD9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFD9) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFD9)
	.endif

	@ asm/tv.s:14100 DoTVShow3CheersForPokeblocks
	.globl gText_Rom_5CBFDC
gText_Rom_5CBFDC: @ 0x085CBFDC
	.string "にが{EOS}"
	.if (. - gText_Rom_5CBFDC) > 0x3
	.error "gText_Rom_5CBFDC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFDC) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFDC)
	.endif
