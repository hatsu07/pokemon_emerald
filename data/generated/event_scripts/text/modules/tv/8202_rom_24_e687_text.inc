	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+16 aliases)
	.globl gText_Rom_24E687
gText_Rom_24E687: @ 0x0824E687
	.string "『{0xFD}{0x03}を　つる』\pアナウンサー「こんにちは！　きょうは\n{0xFD}{0x03}つりを　おそわりに　きました\pさて　せんせい　{0xFD}{0x03}を　つるには\nどんな　コツが　いるのですか？\pせんせい「ん？\n{0xFD}{0x03}を　つる　コツかい\lそれはね　じーっと　まつことだね\pほら　あそこにいる　{0xFD}{0x02}さん\nなんて　いい　みほん　じゃないか？\pもう　かれこれ……\n{0xFD}{0x04}かいは　にげられて　いるけど\pあきらめず　じーっと　まちつづけて　いるよ\nあれが　{0xFD}{0x03}つりの　ごくいだね\pアナウンサー「なるほど……\pあ！　{0xFD}{0x02}さん\nやっと　{0xFD}{0x03}を　つりました！\lなきそうな　かおして　よろこんで　ますよ！\p…わたしも　あんな　うれしそうな\nかおを　みたら　つりをしたく　なりました！\pみなさんも　これを　きに　{0xFD}{0x03}つりを\nしてみては　いかがですか？\pそれでは　また　じかいの\nほうそうで　あいましょう$"
	.if (. - gText_Rom_24E687) > 0x172
	.error "gText_Rom_24E687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E687) < 0x172
	.space 0x172 - (. - gText_Rom_24E687)
	.endif
