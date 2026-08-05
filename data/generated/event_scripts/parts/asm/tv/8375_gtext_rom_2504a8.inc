	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2504A8
gText_Rom_2504A8: @ 0x082504A8
	.string "ひぃー！\nさすが　{0xFD}{0x02}さん　です\pものすごく　つよい　ポケモン　でしたよ\p{0xFD}{0x02}さんの　がんばりやさんな\nところが　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました$"
	.if (. - gText_Rom_2504A8) > 0x75
	.error "gText_Rom_2504A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2504A8) < 0x75
	.space 0x75 - (. - gText_Rom_2504A8)
	.endif
