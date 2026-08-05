	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_25051D
gText_Rom_25051D: @ 0x0825051D
	.string "ふぇー！\nさすが　{0xFD}{0x02}さん　です\pバランスよく\nそだてられた　ポケモン　でしたよ\p{0xFD}{0x02}さんの　きくばり　じょうずな\nところが　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました$"
	.if (. - gText_Rom_25051D) > 0x7b
	.error "gText_Rom_25051D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25051D) < 0x7b
	.space 0x7b - (. - gText_Rom_25051D)
	.endif
