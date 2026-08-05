	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E2F7
gText_Rom_24E2F7: @ 0x0824E2F7
	.string "とても　おもいやりの　ある\nポケモンに　なる　ニックネーム　ですなぁ！\pきちんと　そだてて　やれば\nそれに　こたえて　くれると　おもいますよ$"
	.if (. - gText_Rom_24E2F7) > 0x47
	.error "gText_Rom_24E2F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E2F7) < 0x47
	.space 0x47 - (. - gText_Rom_24E2F7)
	.endif
