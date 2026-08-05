	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_25234E
gText_Rom_25234E: @ 0x0825234E
	.string "レポーター『そうですかー\p{0xFD}{0x02}さんは\nサファリの　めいじん　ですね\pかかりいん『また　おとずれて\nあの　すごい　わざを　みせて　ほしいです$"
	.if (. - gText_Rom_25234E) > 0x46
	.error "gText_Rom_25234E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25234E) < 0x46
	.space 0x46 - (. - gText_Rom_25234E)
	.endif
