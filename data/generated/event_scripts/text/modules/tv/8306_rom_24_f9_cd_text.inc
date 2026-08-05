	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+19 aliases)
	.globl gText_Rom_24F9CD
gText_Rom_24F9CD: @ 0x0824F9CD
	.string "まったく　ダメ　じゃった……\p{0xFD}{0x02}　{0xFD}{0x03}　まつり！\p{0xFD}{0x02}　{0xFD}{0x03}　たいかい！\pわしも　みんなに　いっしょうけんめい\nおしえたの　じゃがのう……\p「{0xFD}{0x02}」が　わるかったのか　のう……\pしかい『……すいませんが\nいまの　りゅうこうを……$"
	.if (. - gText_Rom_24F9CD) > 0x74
	.error "gText_Rom_24F9CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F9CD) < 0x74
	.space 0x74 - (. - gText_Rom_24F9CD)
	.endif
