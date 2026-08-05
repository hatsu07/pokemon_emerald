	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+29 aliases)
	.globl gText_Rom_2518EF
gText_Rom_2518EF: @ 0x082518EF
	.string "{0xFD}{0x02}さんは　いちにちで\nバトルポイントを\l{0xFD}{0x03}　BP　ためました！\p{0xFD}{0x02}さんは　\nたまった　バトルポイントで\lすごい　グッズを　もらうべきか……\lすごい　アイテムを　もらうべきか……と\lニタニタ　しながら\lずっと　なやんでいた　そうですよ！$"
	.if (. - gText_Rom_2518EF) > 0x79
	.error "gText_Rom_2518EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2518EF) < 0x79
	.space 0x79 - (. - gText_Rom_2518EF)
	.endif
