	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252069
gText_Rom_252069: @ 0x08252069
	.string "さくを　じーっと　ながめています！\pあたらしい　トラップでも\nひらめいた　のでしょうか？$"
	.if (. - gText_Rom_252069) > 0x2d
	.error "gText_Rom_252069 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252069) < 0x2d
	.space 0x2d - (. - gText_Rom_252069)
	.endif
