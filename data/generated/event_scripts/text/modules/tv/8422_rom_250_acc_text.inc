	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_250ACC
gText_Rom_250ACC: @ 0x08250ACC
	.string "しかい『そんな　ホットな\n{0xFD}{0x02}さん　ファンの　あいだには\lとくべつな　あいことばが　あるんだよー！\pしかい『{0xFD}{0x02}　といえば……\pしかい『{0xFD}{0x03}！\pファン『{0xFD}{0x04}！\pしかい『{0xFD}{0x03}！\pファン『{0xFD}{0x04}！\pしかい『{0xFD}{0x02}　といえば……\n{0xFD}{0x03}　{0xFD}{0x04}\lうーん！　いい　ひびきだねー！\p{0xFD}{0x02}さんの　ファンに\nなっちゃうのも　わかる　きが　するよー！\pよーし！　テレビの　まえの　みんなも\nいっしょに　いってみよー！！\pしかい『{0xFD}{0x02}　といえば……\pしかい『{0xFD}{0x03}！\pファン『{0xFD}{0x04}！\pしかい『{0xFD}{0x03}！\pファン『{0xFD}{0x04}！\pしかい『{0xFD}{0x02}さん　ファンの\nみんなー　ありがとーーー！！\lそれじゃー　またねー！！\pしかい『{0xFD}{0x02}　といえば……\pしかい『{0xFD}{0x03}！\pファン『{0xFD}{0x04}！$"
	.if (. - gText_Rom_250ACC) > 0x13c
	.error "gText_Rom_250ACC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250ACC) < 0x13c
	.space 0x13c - (. - gText_Rom_250ACC)
	.endif
