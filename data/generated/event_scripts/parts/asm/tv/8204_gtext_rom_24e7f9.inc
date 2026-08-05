	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+16 aliases)
	.globl gText_Rom_24E7F9
gText_Rom_24E7F9: @ 0x0824E7F9
	.string "『{0xFD}{0x03}を　つる』\pインタビュアー『こんにちは！　きょうは\n{0xFD}{0x03}つりを　おそわりに　きました\pさて　せんせい　{0xFD}{0x03}を　つるには\nどんな　コツが　いるのですか？\pせんせい『ん？\n{0xFD}{0x03}を　つる　コツかい\lそれはね　つりざおを　あらしの　ごとく\nあつかう　ことだね！\pほら　あそこにいる　{0xFD}{0x02}さんの\nつりざお　さばきを　みてみなさい！\pもう　{0xFD}{0x04}ひきは　れんぞくで\nつって　いるぞ！\pインタビュアー『すっ　すごい！\nまさに　あらしの　ようね……\p……あんなに　すごい　わざを　みたら\nわたしも　つりを　したくなって　きました！\pみなさんも　これを　きに　{0xFD}{0x03}つりを\nしてみては　いかがですか？\pそれでは　また　じかいの\nほうそうで　あいましょう$"
	.if (. - gText_Rom_24E7F9) > 0x13f
	.error "gText_Rom_24E7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E7F9) < 0x13f
	.space 0x13f - (. - gText_Rom_24E7F9)
	.endif
