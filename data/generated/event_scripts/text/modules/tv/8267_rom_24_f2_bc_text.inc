	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24F2BC
gText_Rom_24F2BC: @ 0x0824F2BC
	.string "それでは　てんいんさんに\nインタビュー　して　みましょう\lどうですか　うれて　ますか？\pてんいん『はい　おかげさまで\nうれてうれて　こまって　ますよ！\pこのまえ　{0xFD}{0x02}さん　というかたが\n{0xFD}{0x03}を　たくさん　かわれまして\pみせのなかに　{0xFD}{0x03}が\nなくなって　しまいそう　だったんですよ！\pわたくしも　{0xFD}{0x03}を　そんなに\nかう　おきゃくさまが　いるなんて\lゆめにも　おもいません　でした　からね！\pインタビュアー『と　いうことは……\n100こ　とか　200こ　とか　ですか？\pてんいん『いや　もっと　でしたよ！\pインタビュアー『うひゃー！\n{0xFD}{0x02}さんって　すごい　ですね！\pてんいん『{0xFD}{0x02}さんは　ほんとうに\nだいじな　おきゃくさま　ですよ$"
	.if (. - gText_Rom_24F2BC) != 0x13a
	.error "gText_Rom_24F2BC must retain its original byte length"
	.endif
