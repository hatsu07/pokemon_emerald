
	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F126
gText_Rom_24F126: @ 0x0824F126
	.string "インタビュアー『わたしも　むかし\n{0xFD}{0x03}を　たくさん　かったことが\lあったん　ですけど\pあまって　しまって\nこうかい　したわ……\pそれからと　いうもの　ひつような\nぶんだけ　かうように　してるの……\pおっと！\pわたしの　ことを　はなしても\nしょうがない　ですね！$"
	.if (. - gText_Rom_24F126) > 0x83
	.error "gText_Rom_24F126 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F126) < 0x83
	.space 0x83 - (. - gText_Rom_24F126)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F1A9
gText_Rom_24F1A9: @ 0x0824F1A9
	.string "てんいん『{0xFD}{0x02}さんは　そのほかにも\n{0xFD}{0x03}を　{0xFD}{0x04}こ\lまとめて　かわれましたよ\pインタビュアー『おー　{0xFD}{0x03}も\nなかなか　よい　ですもんね！$"
	.if (. - gText_Rom_24F1A9) > 0x45
	.error "gText_Rom_24F1A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F1A9) < 0x45
	.space 0x45 - (. - gText_Rom_24F1A9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F1EE
gText_Rom_24F1EE: @ 0x0824F1EE
	.string "てんいん『ついでに　{0xFD}{0x03}も\n{0xFD}{0x04}こ　かわれて　いきました$"
	.if (. - gText_Rom_24F1EE) > 0x1d
	.error "gText_Rom_24F1EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F1EE) < 0x1d
	.space 0x1d - (. - gText_Rom_24F1EE)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F20B
gText_Rom_24F20B: @ 0x0824F20B
	.string "てんいん『しかも　おおやすうりの　とき\nですから　さすが　ですよね！$"
	.if (. - gText_Rom_24F20B) > 0x23
	.error "gText_Rom_24F20B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F20B) < 0x23
	.space 0x23 - (. - gText_Rom_24F20B)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F22E
gText_Rom_24F22E: @ 0x0824F22E
	.string "インタビュアー『うーん……\n{0xFD}{0x02}さんって　かなりの\lかいものじょうず　なのかも　しれませんね！\pこれで　ごうけいは……\p{0xFD}{0x03}えん！？\nさすが　ですね！\pおっと　それでは　またじかいの\nほうそうで　おあい　しましょう！$"
	.if (. - gText_Rom_24F22E) > 0x6d
	.error "gText_Rom_24F22E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F22E) < 0x6d
	.space 0x6d - (. - gText_Rom_24F22E)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24F29B
gText_Rom_24F29B: @ 0x0824F29B
	.string "てんいん『{0xFD}{0x02}さんは　ほんとうに\nだいじな　おきゃくさま　ですよ$"
	.if (. - gText_Rom_24F29B) != 0x21
	.error "gText_Rom_24F29B must retain its original byte length"
	.endif
	.globl gText_Rom_24F2B8
	.set gText_Rom_24F2B8, gText_Rom_24F29B + 0x1d

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24F2BC
gText_Rom_24F2BC: @ 0x0824F2BC
	.string "それでは　てんいんさんに\nインタビュー　して　みましょう\lどうですか　うれて　ますか？\pてんいん『はい　おかげさまで\nうれてうれて　こまって　ますよ！\pこのまえ　{0xFD}{0x02}さん　というかたが\n{0xFD}{0x03}を　たくさん　かわれまして\pみせのなかに　{0xFD}{0x03}が\nなくなって　しまいそう　だったんですよ！\pわたくしも　{0xFD}{0x03}を　そんなに\nかう　おきゃくさまが　いるなんて\lゆめにも　おもいません　でした　からね！\pインタビュアー『と　いうことは……\n100こ　とか　200こ　とか　ですか？\pてんいん『いや　もっと　でしたよ！\pインタビュアー『うひゃー！\n{0xFD}{0x02}さんって　すごい　ですね！\pてんいん『{0xFD}{0x02}さんは　ほんとうに\nだいじな　おきゃくさま　ですよ$"
	.if (. - gText_Rom_24F2BC) != 0x13a
	.error "gText_Rom_24F2BC must retain its original byte length"
	.endif
	.globl gText_Rom_24F3D5
	.set gText_Rom_24F3D5, gText_Rom_24F2BC + 0x119
	.globl gText_Rom_24F3F2
	.set gText_Rom_24F3F2, gText_Rom_24F2BC + 0x136

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+6 aliases)
	.globl gText_Rom_24F3F6
gText_Rom_24F3F6: @ 0x0824F3F6
	.string "インタビュアー『うーん　すごい　ですね\pでも　なんで　そんなに\nいっぱい　かったので　しょう？\p……\pなぞは　ふかまる　ばかりですが\nじかんの　ようなので\lまたじかい　おあい　しましょう！\pそれに　しても\n{0xFD}{0x02}さんって　なぞだわ……$"
	.if (. - gText_Rom_24F3F6) > 0x75
	.error "gText_Rom_24F3F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F3F6) < 0x75
	.space 0x75 - (. - gText_Rom_24F3F6)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F46B
gText_Rom_24F46B: @ 0x0824F46B
	.string "『めいじんの　せかい』\pみなさん　こんにちは\pみなさんは　{0xFD}{0x02}さん　という\nトレーナーを　しってますか？\p{0xFD}{0x02}さんは　ポケモンを　つかまえる\nめいじん　として　ゆうめい　なんです\p{0xFD}{0x02}さんの　ポケモンさがしは\nあるきまわる　ところから　はじまります\pこのまえは　ポケモンを　さがすために\n1にちで　{0xFD}{0x03}ほ　いじょうも　あるき\pつかまえた　ポケモンの　かずは\nなんと　{0xFD}{0x04}　ひきにも　なったとか！$"
	.if (. - gText_Rom_24F46B) > 0xc6
	.error "gText_Rom_24F46B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F46B) < 0xc6
	.space 0xc6 - (. - gText_Rom_24F46B)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F531
gText_Rom_24F531: @ 0x0824F531
	.string "きっと　あいぼうの　{0xFD}{0x02}と\nしんらい　しあっている　からこそ\lこんな　すごいことが　できるんですね$"
	.if (. - gText_Rom_24F531) > 0x32
	.error "gText_Rom_24F531 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F531) < 0x32
	.space 0x32 - (. - gText_Rom_24F531)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+17 aliases)
	.globl gText_Rom_24F563
gText_Rom_24F563: @ 0x0824F563
	.string "めいじんは　さいごに\n{0xFD}{0x03}で\l{0xFD}{0x04}を　つかまえ\pきねんの　ポケモンとして　だいじに\nしている　らしいですよ\pじしんのある　トレーナーは　このきろくに\nちょうせんして　みては　いかがですか？\pそれでは　また\nじかい　おあいしましょう$"
	.if (. - gText_Rom_24F563) > 0x74
	.error "gText_Rom_24F563 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F563) < 0x74
	.space 0x74 - (. - gText_Rom_24F563)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F5D7
gText_Rom_24F5D7: @ 0x0824F5D7
	.string "『きょうの　ライバル　トレーナー』\pポケモン　トレーナーの　みなさん！\nごきげん　いかがですか？\pきょうも　みなさんの　ライバルたちの\nようすに　ついて　おつたえします！$"
	.if (. - gText_Rom_24F5D7) > 0x56
	.error "gText_Rom_24F5D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F5D7) < 0x56
	.space 0x56 - (. - gText_Rom_24F5D7)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F62D
gText_Rom_24F62D: @ 0x0824F62D
	.string "こんかいの　トレーナーは\nげんざい　{0xFD}{0x04}に\lいらっしゃる　{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F62D) > 0x4a
	.error "gText_Rom_24F62D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F62D) < 0x4a
	.space 0x4a - (. - gText_Rom_24F62D)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F677
gText_Rom_24F677: @ 0x0824F677
	.string "こんかいの　トレーナーは\nげんざい　ひみつきちに\lいらっしゃる　{0xFD}{0x02}さん　です！\p{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F677) > 0x4d
	.error "gText_Rom_24F677 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F677) < 0x4d
	.space 0x4d - (. - gText_Rom_24F677)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+18 aliases)
	.globl gText_Rom_24F6C4
gText_Rom_24F6C4: @ 0x0824F6C4
	.string "こんかいの　トレーナーは\n{0xFD}{0x02}さん　です！\pげんざい　{0xFD}{0x02}さんは\nポケモン　ずかんを　{0xFD}{0x03}ひき\lとうろく　されていますねー！$"
	.if (. - gText_Rom_24F6C4) > 0x3f
	.error "gText_Rom_24F6C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24F6C4) < 0x3f
	.space 0x3f - (. - gText_Rom_24F6C4)
	.endif
