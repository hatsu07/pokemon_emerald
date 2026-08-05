	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250428
gText_Rom_250428: @ 0x08250428
	.string "はぁー！\nさすが　{0xFD}{0x02}さん　です\pチャンピオンと　よぶに　ふさわしい\nつよさの　ポケモン　でした\p{0xFD}{0x02}さんの　ちからづよさが\nとっても　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました$"
	.if (. - gText_Rom_250428) > 0x80
	.error "gText_Rom_250428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250428) < 0x80
	.space 0x80 - (. - gText_Rom_250428)
	.endif
