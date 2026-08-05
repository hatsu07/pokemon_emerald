	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_2518A5
gText_Rom_2518A5: @ 0x082518A5
	.string "{0xFD}{0x02}さんは　きのみを　いちにちで\n{0xFD}{0x03}　こ　とりました\p{0xFD}{0x02}さんの　バックは\nきのみで　いっぱいに　なり\lあるくのも　たいへんだった　そうですよ！$"
	.if (. - gText_Rom_2518A5) > 0x4a
	.error "gText_Rom_2518A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2518A5) < 0x4a
	.space 0x4a - (. - gText_Rom_2518A5)
	.endif
