	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+1 aliases)
	.globl gText_Rom_24D5D8
gText_Rom_24D5D8: @ 0x0824D5D8
	.string "『ぼくたち！\nポケモン　だいすきクラブ！』\pはい　はじまりました！\pじゃあ　きょうは　ポケモンアンケートの\nコーナーから！\pかずある　ポケモンと　トレーナーの\nはなしの　なかから\pきょうは　どんな　はなしが\nとびだして　くるのでしょうか！？\lさて　きょうの　はなしは？\pんー……\pこれだ！\pでは　てがみの　しょうかい　から！！\p{0xFD}{0x03}の　ことに　ついて\n{0xFD}{0x02}さん　からの　おてがみだー\pでは　どれだけ　{0xFD}{0x03}への\nあつい　いけんが　かいてあるか\lよませて　もらいましょう！\lえーと……$"
	.if (. - gText_Rom_24D5D8) > 0xf1
	.error "gText_Rom_24D5D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24D5D8) < 0xf1
	.space 0xf1 - (. - gText_Rom_24D5D8)
	.endif
