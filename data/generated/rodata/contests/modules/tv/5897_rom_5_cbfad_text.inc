	@ asm/tv.s:15280 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFAD
gText_Rom_5CBFAD: @ 0x085CBFAD
	.string "スロット$"
	.if (. - gText_Rom_5CBFAD) > 0x5
	.error "gText_Rom_5CBFAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFAD) < 0x5
	.space 0x5 - (. - gText_Rom_5CBFAD)
	.endif
