	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+12 aliases)
	.globl gText_Rom_24DF59
gText_Rom_24DF59: @ 0x0824DF59
	.string "『トレーナー　ファンクラブ\n　{0xFD}{0x02}　スペシャル！』\pホウエン　かくちに　いらっしゃる\n{0xFD}{0x02}ファンの　みなさま\lおまたせしました！\pきょうは　{0xFD}{0x02}さんが\n「どのように　おもわれているか？」を\lいっしょに　かんがえて　いきましょう！\pほかの　トレーナーさんを　だいひょうして\n{0xFD}{0x03}さん　から　ごいけんを\lいただきました！\pまず　{0xFD}{0x02}さんを\nひとことで　いい　あらわすと……\p「{0xFD}{0x04}」\pさすが　{0xFD}{0x03}さん！\nよく　みて　いらっしゃいますね！\p「{0xFD}{0x04}　{0xFD}{0x02}！」\nいいですねー\pつづいて　{0xFD}{0x02}さんの　つよさに\nてんすうを　つけると……$"
	.if (. - gText_Rom_24DF59) > 0x106
	.error "gText_Rom_24DF59 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DF59) < 0x106
	.space 0x106 - (. - gText_Rom_24DF59)
	.endif
