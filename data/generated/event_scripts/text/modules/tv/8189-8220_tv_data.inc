
	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E551
gText_Rom_24E551: @ 0x0824E551
	.string "トレーナーの　{0xFD}{0x02}さんの\nなまえを　もってきて\p「{0xFD}{0x03}{0xFD}{0x04}」と　いうのも\nとても　よい　ニックネーム　ですなぁ{EOS}"
	.if (. - gText_Rom_24E551) > 0x38
	.error "gText_Rom_24E551 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E551) < 0x38
	.space 0x38 - (. - gText_Rom_24E551)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E589
gText_Rom_24E589: @ 0x0824E589
	.string "もしくは　「{0xFD}{0x03}{0xFD}{0x04}」と\nいうのも　よい　ニックネーム　ですな{EOS}"
	.if (. - gText_Rom_24E589) > 0x20
	.error "gText_Rom_24E589 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E589) < 0x20
	.space 0x20 - (. - gText_Rom_24E589)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5A9
gText_Rom_24E5A9: @ 0x0824E5A9
	.string "もとの　ポケモンの　なまえ\n{0xFD}{0x03}から　すこし　もらって\p「{0xFD}{0x02}{0xFD}{0x04}」や{EOS}"
	.if (. - gText_Rom_24E5A9) > 0x24
	.error "gText_Rom_24E5A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5A9) < 0x24
	.space 0x24 - (. - gText_Rom_24E5A9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5CD
gText_Rom_24E5CD: @ 0x0824E5CD
	.string "「{0xFD}{0x02}{0xFD}{0x04}」と　いうのも\nよい　ニックネーム　ですなぁ{EOS}"
	.if (. - gText_Rom_24E5CD) > 0x1c
	.error "gText_Rom_24E5CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5CD) < 0x1c
	.space 0x1c - (. - gText_Rom_24E5CD)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E5E9
gText_Rom_24E5E9: @ 0x0824E5E9
	.string "まちがっても　ほかの　ポケモンの　なまえ\nたとえば　{0xFD}{0x03}の　なまえを　つけて\p「{0xFD}{0x02}{0xFD}{0x04}」の　ような\nニックネームに　しては　いけませんな{EOS}"
	.if (. - gText_Rom_24E5E9) > 0x46
	.error "gText_Rom_24E5E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E5E9) < 0x46
	.space 0x46 - (. - gText_Rom_24E5E9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+13 aliases)
	.globl gText_Rom_24E62F
gText_Rom_24E62F: @ 0x0824E62F
	.string "うむ　それにしても　「{0xFD}{0x02}」は\nなかなか　よい　ニックネーム　ですな\pこれからも　「{0xFD}{0x02}」の　ことを\nたいせつに　して　ほしい　ものですなぁ\pそれでは　また\nごえんが　あれば{EOS}"
	.if (. - gText_Rom_24E62F) > 0x58
	.error "gText_Rom_24E62F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E62F) < 0x58
	.space 0x58 - (. - gText_Rom_24E62F)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+16 aliases)
	.globl gText_Rom_24E687
gText_Rom_24E687: @ 0x0824E687
	.string "『{0xFD}{0x03}を　つる』\pアナウンサー「こんにちは！　きょうは\n{0xFD}{0x03}つりを　おそわりに　きました\pさて　せんせい　{0xFD}{0x03}を　つるには\nどんな　コツが　いるのですか？\pせんせい「ん？\n{0xFD}{0x03}を　つる　コツかい\lそれはね　じーっと　まつことだね\pほら　あそこにいる　{0xFD}{0x02}さん\nなんて　いい　みほん　じゃないか？\pもう　かれこれ……\n{0xFD}{0x04}かいは　にげられて　いるけど\pあきらめず　じーっと　まちつづけて　いるよ\nあれが　{0xFD}{0x03}つりの　ごくいだね\pアナウンサー「なるほど……\pあ！　{0xFD}{0x02}さん\nやっと　{0xFD}{0x03}を　つりました！\lなきそうな　かおして　よろこんで　ますよ！\p…わたしも　あんな　うれしそうな\nかおを　みたら　つりをしたく　なりました！\pみなさんも　これを　きに　{0xFD}{0x03}つりを\nしてみては　いかがですか？\pそれでは　また　じかいの\nほうそうで　あいましょう{EOS}"
	.if (. - gText_Rom_24E687) > 0x172
	.error "gText_Rom_24E687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E687) < 0x172
	.space 0x172 - (. - gText_Rom_24E687)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+16 aliases)
	.globl gText_Rom_24E7F9
gText_Rom_24E7F9: @ 0x0824E7F9
	.string "『{0xFD}{0x03}を　つる』\pインタビュアー『こんにちは！　きょうは\n{0xFD}{0x03}つりを　おそわりに　きました\pさて　せんせい　{0xFD}{0x03}を　つるには\nどんな　コツが　いるのですか？\pせんせい『ん？\n{0xFD}{0x03}を　つる　コツかい\lそれはね　つりざおを　あらしの　ごとく\nあつかう　ことだね！\pほら　あそこにいる　{0xFD}{0x02}さんの\nつりざお　さばきを　みてみなさい！\pもう　{0xFD}{0x04}ひきは　れんぞくで\nつって　いるぞ！\pインタビュアー『すっ　すごい！\nまさに　あらしの　ようね……\p……あんなに　すごい　わざを　みたら\nわたしも　つりを　したくなって　きました！\pみなさんも　これを　きに　{0xFD}{0x03}つりを\nしてみては　いかがですか？\pそれでは　また　じかいの\nほうそうで　あいましょう{EOS}"
	.if (. - gText_Rom_24E7F9) > 0x13f
	.error "gText_Rom_24E7F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E7F9) < 0x13f
	.space 0x13f - (. - gText_Rom_24E7F9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+16 aliases)
	.globl gText_Rom_24E938
gText_Rom_24E938: @ 0x0824E938
	.string "こんにちはー！\p『きょうの　ポケモン』の\nじかんだよー！！\pおねえさん『こんにちは　みんな　げんき！\nきょうは　{0xFD}{0x02}さんの　ポケモン\l{0xFD}{0x03}の　しょうかいを　するよ！\pおにいさん『するぞー！{EOS}"
	.if (. - gText_Rom_24E938) > 0x5f
	.error "gText_Rom_24E938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E938) < 0x5f
	.space 0x5f - (. - gText_Rom_24E938)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24E997
gText_Rom_24E997: @ 0x0824E997
	.string "あ！\n{0xFD}{0x02}さん　といえば……\pおねえさん　このまえ\nぼく　みちゃった！！\pおねえさん『みちゃった　って\nなにを　みちゃったの？\pおにいさん『このまえ\n{0xFD}{0x03}に　でかけたとき\l{0xFD}{0x02}さんを　みかけたんだ\pちょうど　{0xFD}{0x04}を　つかまえてる\nところ　だったん　だけど……{EOS}"
	.if (. - gText_Rom_24E997) > 0x82
	.error "gText_Rom_24E997 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24E997) < 0x82
	.space 0x82 - (. - gText_Rom_24E997)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EA19
gText_Rom_24EA19: @ 0x0824EA19
	.string "とちゅうで　ポケモンに\nにげられ　ちゃったんだよ！！\pボールを　{0xFD}{0x03}こも　なげたのに\nぜんぶ　むだ……\pポケモンに　にげられた　ときの\n{0xFD}{0x02}さんの　くやしがった　かお\lすごかったなぁ……{EOS}"
	.if (. - gText_Rom_24EA19) > 0x5e
	.error "gText_Rom_24EA19 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EA19) < 0x5e
	.space 0x5e - (. - gText_Rom_24EA19)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EA77
gText_Rom_24EA77: @ 0x0824EA77
	.string "とちゅうで　まちがって　ポケモンを\nたおし　ちゃったんだよ！！\pボールを　{0xFD}{0x03}こも　なげたのに\nぜんぶ　むだ……\pポケモンを　たおしちゃった　ときの\n{0xFD}{0x02}さんの　あぜんと　した　かお\lなんとも　いえなかったなぁ……{EOS}"
	.if (. - gText_Rom_24EA77) > 0x6c
	.error "gText_Rom_24EA77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EA77) < 0x6c
	.space 0x6c - (. - gText_Rom_24EA77)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EAE3
gText_Rom_24EAE3: @ 0x0824EAE3
	.string "おねえさん『こらこらっ！\nたにんの　ふこうを　わらっちゃ　だめだよ\pあぁ　{0xFD}{0x02}さん\nとっても　かわいそう……\pおにいさん『はーい！\nわらって　すいませーん{EOS}"
	.if (. - gText_Rom_24EAE3) > 0x4e
	.error "gText_Rom_24EAE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EAE3) < 0x4e
	.space 0x4e - (. - gText_Rom_24EAE3)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EB31
gText_Rom_24EB31: @ 0x0824EB31
	.string "おねえさん『プッ！\pおにいさん『あ！　いま\nわらったでしょ！？\pおねえさん『え！？\pわらってない\nわらってないよ！\pあぁ　{0xFD}{0x02}さん\nとっても　かわいそう……\pおにいさん『……{EOS}"
	.if (. - gText_Rom_24EB31) > 0x58
	.error "gText_Rom_24EB31 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EB31) < 0x58
	.space 0x58 - (. - gText_Rom_24EB31)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+15 aliases)
	.globl gText_Rom_24EB89
gText_Rom_24EB89: @ 0x0824EB89
	.string "おねえさん『じゃあ　きを　とりなおして\nポケモンの　しょうかいを……\pえ？\nもう　じかんが　ない？\pもう！　ポケモンの　しょうかいが\nできなかった　じゃない！\pおにいさん『また　じかい　あおうぜ！\pおねえさん『かってに　しめるなー！！{EOS}"
	.if (. - gText_Rom_24EB89) > 0x76
	.error "gText_Rom_24EB89 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EB89) < 0x76
	.space 0x76 - (. - gText_Rom_24EB89)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24EBFF
gText_Rom_24EBFF: @ 0x0824EBFF
	.string "こんにちはー！\p『きょうの　ポケモン』の\nじかんだよー！！\pおねえさん『こんにちは　みんな　げんき！\nきょうは　{0xFD}{0x02}さんの　ポケモン\l{0xFD}{0x03}の　しょうかいを　するよ！\pおにいさん『するぞー！{EOS}"
	.if (. - gText_Rom_24EBFF) > 0x5f
	.error "gText_Rom_24EBFF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EBFF) < 0x5f
	.space 0x5f - (. - gText_Rom_24EBFF)
	.endif
