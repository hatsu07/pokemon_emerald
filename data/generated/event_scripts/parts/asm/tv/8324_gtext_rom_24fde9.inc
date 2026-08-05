	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+21 aliases)
	.globl gText_Rom_24FDE9
gText_Rom_24FDE9: @ 0x0824FDE9
	.string "{0xFD}{0x02}さんは　{0xFD}{0x03}で\nなんと　{0xFD}{0x04}まいも\lまけてしまった　そうです！\p「{0xFD}{0x02}さんが　きたら\n　うりあげ　2ばい！」\p……という　ことばが　てんいんたちの\nあいだで　ささやかれた　そうです$"
	.if (. - gText_Rom_24FDE9) > 0x5d
	.error "gText_Rom_24FDE9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24FDE9) < 0x5d
	.space 0x5d - (. - gText_Rom_24FDE9)
	.endif
