	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_2529D8
gText_Rom_2529D8: @ 0x082529D8
	.string "1じしんさも　2じしんさも\nダントツで　ビリでした\p{0xFD}{0x02}さんには　{0xFD}{0x03}を\nきたえ　なおして\lビリから　ぬけだして　ほしいです"
	.byte EOS
	.if (. - gText_Rom_2529D8) > 0x3f
	.error "gText_Rom_2529D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2529D8) < 0x3f
	.space 0x3f - (. - gText_Rom_2529D8)
	.endif
