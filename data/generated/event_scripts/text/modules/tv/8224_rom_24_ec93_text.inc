	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EC93
gText_Rom_24EC93: @ 0x0824EC93
	.string "おにいさん『ちなみに\nボールを　ぜんぶで　{0xFD}{0x04}こ　なげて\pさいごは　{0xFD}{0x03}で\nつかまえたって　うわさだよ！$"
	.if (. - gText_Rom_24EC93) > 0x35
	.error "gText_Rom_24EC93 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EC93) < 0x35
	.space 0x35 - (. - gText_Rom_24EC93)
	.endif
