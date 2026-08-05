	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E2AC
gText_Rom_24E2AC: @ 0x0824E2AC
	.string "とても　こせいてきな　ポケモンに\nなる　ニックネーム　ですなぁ！\pきちんと　そだてて　やれば　その　こせいが\nおおきく　はな　ひらくと　おもいますよ$"
	.if (. - gText_Rom_24E2AC) > 0x4b
	.error "gText_Rom_24E2AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E2AC) < 0x4b
	.space 0x4b - (. - gText_Rom_24E2AC)
	.endif
