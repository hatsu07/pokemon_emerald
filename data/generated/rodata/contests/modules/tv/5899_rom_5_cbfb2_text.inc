	@ asm/tv.s:15288 DoTVShowFindThatGamer
	.globl gText_Rom_5CBFB2
gText_Rom_5CBFB2: @ 0x085CBFB2
	.string "ルーレット$"
	.if (. - gText_Rom_5CBFB2) > 0x6
	.error "gText_Rom_5CBFB2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFB2) < 0x6
	.space 0x6 - (. - gText_Rom_5CBFB2)
	.endif
