	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+31 aliases)
	.globl gText_Rom_25248E
gText_Rom_25248E: @ 0x0825248E
	.string "レポーター『そうですかー\p{0xFD}{0x02}さん　には\nサファリを　とっくんして　ほしいですね\pかかりいん『なんども　おとずれて\nコツを　つかんで　ほしいです$"
	.if (. - gText_Rom_25248E) > 0x49
	.error "gText_Rom_25248E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25248E) < 0x49
	.space 0x49 - (. - gText_Rom_25248E)
	.endif
