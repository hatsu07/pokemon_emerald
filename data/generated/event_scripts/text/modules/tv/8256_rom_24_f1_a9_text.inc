	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F1A9
gText_Rom_24F1A9: @ 0x0824F1A9
	.string "てんいん『{0xFD}{0x02}さんは　そのほかにも\n{0xFD}{0x03}を　{0xFD}{0x04}こ\lまとめて　かわれましたよ\pインタビュアー『おー　{0xFD}{0x03}も\nなかなか　よい　ですもんね！$"
	.if (. - gText_Rom_24F1A9) > 0x45
	.error "gText_Rom_24F1A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F1A9) < 0x45
	.space 0x45 - (. - gText_Rom_24F1A9)
	.endif
