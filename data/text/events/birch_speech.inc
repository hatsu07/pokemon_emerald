@ Phase 2: オダマキ博士のオープニングセリフ（日本版）
@ 文字コードは data/charmap/charmap.txt。.string は tools/preproc がバイト列へ変換する。
@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。
@ .string は元の物理スロットを超えられない。短縮時は 0x00 で埋める。

	.globl gUnknown_8277095
	.globl gText_Birch_Welcome
gUnknown_8277095: @ 0x8277095
gText_Birch_Welcome::
	@ 最初のセリフ（変更箇所）。オリジナル: いやー　おまたせ　おまたせ！
	.string "いやー　おまたせ　おまたせ！\pポケットモンスターの　せかいへ\nようこそ！\pわたしの　なまえは　オダマキ！\pでも　みんな　からは\n「ポケモンはかせ」と　よばれて　いるよ！\p$"
	.if (. - gText_Birch_Welcome) > 0x56
	.error "gText_Birch_Welcome may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_Welcome) < 0x56
	.space 0x56 - (. - gText_Birch_Welcome)
	.endif

	.globl gText_Birch_Pokemon
gText_Birch_Pokemon::
	.string "ポケットモンスター\n……すなわち　ポケモン\p$"
	.if (. - gText_Birch_Pokemon) > 0x17
	.error "gText_Birch_Pokemon may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_Pokemon) < 0x17
	.space 0x17 - (. - gText_Birch_Pokemon)
	.endif

	.globl gUnknown_8277102
	.globl gText_Birch_MainSpeech
gUnknown_8277102: @ 0x8277102
gText_Birch_MainSpeech::
	.string "この　せかいには\nポケモンと　よばれる　いきもの　たちが\lいたるところに　すんでいる！\pわれわれ　にんげんは\nポケモンと　なかよく　あそんだり\lたすけあって　しごとを　したり\pときには　ちからを　あわせて\nたたかったり　しながら\pいっしょに　くらして　いるんだ！\p……しかし　われわれは　ポケモンの\nすべてを　しっている　わけでは　ない\pポケモンの　ひみつは\nまだまだ　いっぱい　ある！\pその　ひみつを　ときあかす　ため\nわたしは　けんきゅうを　つづけている\lという　わけなんだ！\p$"
	.if (. - gText_Birch_MainSpeech) > 0xf2
	.error "gText_Birch_MainSpeech may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_MainSpeech) < 0xf2
	.space 0xf2 - (. - gText_Birch_MainSpeech)
	.endif

	.globl gUnknown_82771F4
	.globl gText_Birch_AndYouAre
gUnknown_82771F4: @ 0x82771F4
gText_Birch_AndYouAre::
	.string "ところで　きみは……？$"
	.if (. - gText_Birch_AndYouAre) > 0xc
	.error "gText_Birch_AndYouAre may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_AndYouAre) < 0xc
	.space 0xc - (. - gText_Birch_AndYouAre)
	.endif

	.globl gUnknown_8277200
	.globl gText_Birch_BoyOrGirl
gUnknown_8277200: @ 0x8277200
gText_Birch_BoyOrGirl::
	.string "おとこのこ？\nそれとも　おんなのこ？$"
	.if (. - gText_Birch_BoyOrGirl) > 0x13
	.error "gText_Birch_BoyOrGirl may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_BoyOrGirl) < 0x13
	.space 0x13 - (. - gText_Birch_BoyOrGirl)
	.endif

	.globl gUnknown_8277213
	.globl gText_Birch_WhatsYourName
gUnknown_8277213: @ 0x8277213
gText_Birch_WhatsYourName::
	.string "なまえも　おしえて　くれるかい！$"
	.if (. - gText_Birch_WhatsYourName) > 0x11
	.error "gText_Birch_WhatsYourName may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_WhatsYourName) < 0x11
	.space 0x11 - (. - gText_Birch_WhatsYourName)
	.endif

	.globl gUnknown_8277224
	.globl gText_Birch_SoItsPlayer
gUnknown_8277224: @ 0x8277224
gText_Birch_SoItsPlayer::
	.string "{PLAYER}{KUN}　だね？$"
	.if (. - gText_Birch_SoItsPlayer) > 0x9
	.error "gText_Birch_SoItsPlayer may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_SoItsPlayer) < 0x9
	.space 0x9 - (. - gText_Birch_SoItsPlayer)
	.endif

	.globl gUnknown_827722D
	.globl gText_Birch_YourePlayer
gUnknown_827722D: @ 0x827722D
gText_Birch_YourePlayer::
	.string "……そうか！\pきみが　こんど　わたしの　すむ　まち\nミシロタウンに　ひっこして　くる\l{PLAYER}{KUN}　だったのか！\p$"
	.if (. - gText_Birch_YourePlayer) > 0x38
	.error "gText_Birch_YourePlayer may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_YourePlayer) < 0x38
	.space 0x38 - (. - gText_Birch_YourePlayer)
	.endif

	.globl gUnknown_8277265
	.globl gText_Birch_AreYouReady
gUnknown_8277265: @ 0x8277265
gText_Birch_AreYouReady::
	.string "よーし　じゅんびは　いいかい？\pこれから　きみ　だけの　ものがたりが\nはじまろうと　している！\pゆめと　ぼうけんと　であいに　みちた\nポケットモンスターの　せかいへ\lゆうきを　もって　とびこんで　みてくれ！\pでは　また　あとで　あおう！\nけんきゅうじょで　まって　いるぞ！\p$"
	.if (. - gText_Birch_AreYouReady) > 0x8b
	.error "gText_Birch_AreYouReady may not grow beyond its original slot"
	.endif
	.if (. - gText_Birch_AreYouReady) < 0x8b
	.space 0x8b - (. - gText_Birch_AreYouReady)
	.endif
