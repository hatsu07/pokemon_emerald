	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+3 aliases)
	.globl gText_Rom_24D2DC
gText_Rom_24D2DC: @ 0x0824D2DC
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pこのばんぐみは　みなさんの\nいけんを　このわたしが\lかわりに　さけんで　しまおう！\lという　すごい　ばんぐみ！！\pさて　きょうは　ポケモンだいすきクラブ　に\nいって　いろんな　はなしを　きいてきた\lリポーターからの　じょうほうだ！\pさて　きょうの\nポケモンだいすき　にんげんは？\pんー……\p{0xFD}{0x02}さんだー！！\pそれでは　ごじぶんの　ポケモン\p{0xFD}{0x03}の　「{0xFD}{0x04}」に\nついての　あつい　きもちを\pかわりに　この　わたくしが　テレビに\nむかって　さけんで　あげましょう！\pうー！！\pレッツ　シャウト！！！$"
	.if (. - gText_Rom_24D2DC) > 0x11a
	.error "gText_Rom_24D2DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D2DC) < 0x11a
	.space 0x11a - (. - gText_Rom_24D2DC)
	.endif
