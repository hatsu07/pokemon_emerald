	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+10 aliases)
	.globl gText_Rom_252520
gText_Rom_252520: @ 0x08252520
	.string "『ポケモン　コンテスト\n　けっか　そくほう！』\pしかい『……はい！\nこちら　さきほど　おわりました\l{0xFD}{0x02}　コンテストの　かいじょうです\pかいじょうには　まだ　たくさんの\nおきゃくさんが　のこっています\pかんきゃく『{0xFD}{0x03}ーーー！\pかんきゃく『{0xFD}{0x04}ーーー！\pしかい『……と　みなさんが　おっしゃる\nとおりに　ゆうしょう　ポケモンは\l{0xFD}{0x04}さんの　{0xFD}{0x03}　でした！\pかんきゃく『{0xFD}{0x03}！　さいこー！\pかんきゃく『{0xFD}{0x04}！　えらいー！\pしかい『それでは……　おきゃくさんに\nちょっと　かんそうを　きいて　みましょう！$"
	.if (. - gText_Rom_252520) > 0xfb
	.error "gText_Rom_252520 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252520) < 0xfb
	.space 0xfb - (. - gText_Rom_252520)
	.endif
