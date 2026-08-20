
	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_250156
gText_Rom_250156: @ 0x08250156
	.string "しかし……\p{0xFD}{0x03}は　あっというまに\nにげてしまった　のです\pその　しゅんかん　{0xFD}{0x04}には\n{0xFD}{0x02}さんの　かなしみの　さけびが\lひびき　わたった　そうです……{EOS}"
	.if (. - gText_Rom_250156) > 0x4d
	.error "gText_Rom_250156 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250156) < 0x4d
	.space 0x4d - (. - gText_Rom_250156)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+22 aliases)
	.globl gText_Rom_2501A3
gText_Rom_2501A3: @ 0x082501A3
	.string "いやー　{0xFD}{0x02}さん！\nざんねん　でした……\lわたしも　いっしょに　さけびたいです\p……いじょう\nかなしみ　いっぱいの　げんばより\lおつたえ　しました……！{EOS}"
	.if (. - gText_Rom_2501A3) > 0x4d
	.error "gText_Rom_2501A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2501A3) < 0x4d
	.space 0x4d - (. - gText_Rom_2501A3)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2501F0
gText_Rom_2501F0: @ 0x082501F0
	.string "みなさん　こんにちは！\n『ひみつきち　ほうもん！』の　じかんです\pきょうは　{0xFD}{0x02}さんの　ひみつきちに\nおじゃま　させて　いただきます\p{0xFD}{0x02}さんの　きちは　どんな\nおへやに　なっている　のでしょうか？\pさっそく　はいって　みましょう！\n………　………　………　………{EOS}"
	.if (. - gText_Rom_2501F0) != 0x85
	.error "gText_Rom_2501F0 must retain its original byte length"
	.endif
	.globl gText_Rom_250271
	.set gText_Rom_250271, gText_Rom_2501F0 + 0x81

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250275
gText_Rom_250275: @ 0x08250275
	.string "おおー！\pこんな　ところに　「{0xFD}{0x03}」が！\nすばらしい　ですねー{EOS}"
	.if (. - gText_Rom_250275) > 0x20
	.error "gText_Rom_250275 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250275) < 0x20
	.space 0x20 - (. - gText_Rom_250275)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250295
gText_Rom_250295: @ 0x08250295
	.string "おおー！\pなんと！\nグッズが　なにも　ありません！\pふつうの　ひとには　まね　できない\nこの　だいたんさ！\pシンプルで　ありながら\nあふれでる　この　ワイルドさ！\pいやー\nさすが　{0xFD}{0x02}さん　ですねー{EOS}"
	.if (. - gText_Rom_250295) > 0x64
	.error "gText_Rom_250295 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250295) < 0x64
	.space 0x64 - (. - gText_Rom_250295)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2502F9
gText_Rom_2502F9: @ 0x082502F9
	.string "ああー！　なるほど！\pここに　「{0xFD}{0x03}」　ですか！\nこれは　こうかてき　ですねー{EOS}"
	.if (. - gText_Rom_2502F9) > 0x28
	.error "gText_Rom_2502F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2502F9) < 0x28
	.space 0x28 - (. - gText_Rom_2502F9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250321
gText_Rom_250321: @ 0x08250321
	.string "ああー！　なるほど！\pここには　わざと　グッズを　おかずに\nあけて　いるのですねー\pこれは　こうかてき　ですねー{EOS}"
	.if (. - gText_Rom_250321) > 0x39
	.error "gText_Rom_250321 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250321) < 0x39
	.space 0x39 - (. - gText_Rom_250321)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_25035A
gText_Rom_25035A: @ 0x0825035A
	.string "ふぇー！\p「{0xFD}{0x03}」と\n「{0xFD}{0x04}」の　くみあわせ！\pゆめの　がったいに　なっていますねー{EOS}"
	.if (. - gText_Rom_25035A) > 0x2b
	.error "gText_Rom_25035A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25035A) < 0x2b
	.space 0x2b - (. - gText_Rom_25035A)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250385
gText_Rom_250385: @ 0x08250385
	.string "ふぇー！\pここに　「{0xFD}{0x03}」ですか！\nひみつきち　ぜんたいに　きいていますねー{EOS}"
	.if (. - gText_Rom_250385) > 0x27
	.error "gText_Rom_250385 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250385) < 0x27
	.space 0x27 - (. - gText_Rom_250385)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2503AC
gText_Rom_2503AC: @ 0x082503AC
	.string "ふぇー！\pここには　なにも　おいていません\pいやー　この　なにもない　スペースが\nひみつきち　ぜんたいに　きいてますねー{EOS}"
	.if (. - gText_Rom_2503AC) > 0x3d
	.error "gText_Rom_2503AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2503AC) < 0x3d
	.space 0x3d - (. - gText_Rom_2503AC)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2503E9
gText_Rom_2503E9: @ 0x082503E9
	.string "あっ！\n{0xFD}{0x02}さんが　いらっしゃいます！\lさっそく　たいせん　してみましょう！\p……　……　……　……\n……　……　……　……{EOS}"
	.if (. - gText_Rom_2503E9) > 0x3f
	.error "gText_Rom_2503E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2503E9) < 0x3f
	.space 0x3f - (. - gText_Rom_2503E9)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250428
gText_Rom_250428: @ 0x08250428
	.string "はぁー！\nさすが　{0xFD}{0x02}さん　です\pチャンピオンと　よぶに　ふさわしい\nつよさの　ポケモン　でした\p{0xFD}{0x02}さんの　ちからづよさが\nとっても　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました{EOS}"
	.if (. - gText_Rom_250428) > 0x80
	.error "gText_Rom_250428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250428) < 0x80
	.space 0x80 - (. - gText_Rom_250428)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2504A8
gText_Rom_2504A8: @ 0x082504A8
	.string "ひぃー！\nさすが　{0xFD}{0x02}さん　です\pものすごく　つよい　ポケモン　でしたよ\p{0xFD}{0x02}さんの　がんばりやさんな\nところが　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました{EOS}"
	.if (. - gText_Rom_2504A8) > 0x75
	.error "gText_Rom_2504A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2504A8) < 0x75
	.space 0x75 - (. - gText_Rom_2504A8)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_25051D
gText_Rom_25051D: @ 0x0825051D
	.string "ふぇー！\nさすが　{0xFD}{0x02}さん　です\pバランスよく\nそだてられた　ポケモン　でしたよ\p{0xFD}{0x02}さんの　きくばり　じょうずな\nところが　でていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー　べんきょう　させて　いただきました{EOS}"
	.if (. - gText_Rom_25051D) > 0x7b
	.error "gText_Rom_25051D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25051D) < 0x7b
	.space 0x7b - (. - gText_Rom_25051D)
	.endif

	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_250598
gText_Rom_250598: @ 0x08250598
	.string "ほぉー！\nさすが　{0xFD}{0x02}さん　です\pしょうらいの　せいちょうが\nたのしみな　ポケモン　でしたよ\p{0xFD}{0x02}さんの　ゆめと　きぼうが\nでていましたよ\pとくに　{0xFD}{0x03}に\n「{0xFD}{0x04}」　なんて\l{0xFD}{0x02}さん　らしいですねー\pいやー\nべんきょう　させて　いただきました{EOS}"
	.if (. - gText_Rom_250598) > 0x7a
	.error "gText_Rom_250598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_250598) < 0x7a
	.space 0x7a - (. - gText_Rom_250598)
	.endif

