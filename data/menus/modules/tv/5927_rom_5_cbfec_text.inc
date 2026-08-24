	.globl gText_Rom_5CBFEC

	@ asm/tv.s:16070 DoTVShowPokemonLotteryWinnerFlashReport
	.globl gText_Rom_5CBFEC
gText_Rom_5CBFEC: @ 0x085CBFEC
	.string "とく{EOS}"
	.if (. - gText_Rom_5CBFEC) > 0x3
	.error "gText_Rom_5CBFEC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBFEC) < 0x3
	.space 0x3 - (. - gText_Rom_5CBFEC)
	.endif

