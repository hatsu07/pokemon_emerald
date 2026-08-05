	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250598
gText_Rom_250598: @ 0x08250598
	.string "ほぉー！\nさすが　{0xFD}{0x02}さん　です\pしょうらいの　せいちょうが\nたのしみな　ポケモン　でしたよ\p{0xFD}{0x02}さんの　ゆめと　きぼうが\nでていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー\nべんきょう　させて　いただきました$"
	.if (. - gText_Rom_250598) > 0x7a
	.error "gText_Rom_250598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250598) < 0x7a
	.space 0x7a - (. - gText_Rom_250598)
	.endif
