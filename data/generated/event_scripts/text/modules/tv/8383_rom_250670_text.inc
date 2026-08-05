	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+24 aliases)
	.globl gText_Rom_250670
gText_Rom_250670: @ 0x08250670
	.string "『ドキドキ！　ワクワク！\n　ポケモンくじ　とうせんしゃ　そくほう！』\pこんにちは！\nこちらは　ミナモデパート　1かい\lポケモンくじ　うりば　です！\pきょうも　ひとりの　ラッキートレーナーが\nあらわれました！\pその　かたの　おなまえは……\l{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nみごと　{0xFD}{0x03}とうを　あてて\l{0xFD}{0x04}を　かくとく　しました！\p{0xFD}{0x02}さん！\nおめでとう　ございました！\pテレビの　まえの　みなさんも　ぜひ\nミナモデパートへ　ごらいてん　ください！\lてんいん　いちどう　おまち　しております！\pいじょう\nホウエン　いちの　しなぞろえ\lミナモデパート　より　おおくり　しました！$"
	.if (. - gText_Rom_250670) > 0x11e
	.error "gText_Rom_250670 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250670) < 0x11e
	.space 0x11e - (. - gText_Rom_250670)
	.endif
