@ Phase 2: オダマキ博士のオープニングセリフ（日本版）
@ 文字コードは charmap.txt。.string は tools/preproc がバイト列へ変換する。
@ 各エントリの占有サイズはオリジナルROMと同じにし、後続データのアドレスを維持する。

	.globl gUnknown_8277095
	.globl gText_Birch_Welcome
gUnknown_8277095: @ 0x8277095
gText_Birch_Welcome::
	@ 最初のセリフ（変更箇所）。オリジナル: いやー　おまたせ　おまたせ！
	.string "いやー　おまたせ　おまたせ！\pポケットモンスターの　せかいへ\nようこそ！\pわたしの　なまえは　オダマキ！\pでも　みんな　からは\n「ポケモンはかせ」と　よばれて　いるよ！\p$"

	.globl gText_Birch_Pokemon
gText_Birch_Pokemon::
	.string "ポケットモンスター\n……すなわち　ポケモン\p$"

	.globl gUnknown_8277102
	.globl gText_Birch_MainSpeech
gUnknown_8277102: @ 0x8277102
gText_Birch_MainSpeech::
	.string "この　せかいには\nポケモンと　よばれる　いきもの　たちが\lいたるところに　すんでいる！\pわれわれ　にんげんは\nポケモンと　なかよく　あそんだり\lたすけあって　しごとを　したり\pときには　ちからを　あわせて\nたたかったり　しながら\pいっしょに　くらして　いるんだ！\p……しかし　われわれは　ポケモンの\nすべてを　しっている　わけでは　ない\pポケモンの　ひみつは\nまだまだ　いっぱい　ある！\pその　ひみつを　ときあかす　ため\nわたしは　けんきゅうを　つづけている\lという　わけなんだ！\p$"

	.globl gUnknown_82771F4
	.globl gText_Birch_AndYouAre
gUnknown_82771F4: @ 0x82771F4
gText_Birch_AndYouAre::
	.string "ところで　きみは……？$"

	.globl gUnknown_8277200
	.globl gText_Birch_BoyOrGirl
gUnknown_8277200: @ 0x8277200
gText_Birch_BoyOrGirl::
	.string "おとこのこ？\nそれとも　おんなのこ？$"

	.globl gUnknown_8277213
	.globl gText_Birch_WhatsYourName
gUnknown_8277213: @ 0x8277213
gText_Birch_WhatsYourName::
	.string "なまえも　おしえて　くれるかい！$"

	.globl gUnknown_8277224
	.globl gText_Birch_SoItsPlayer
gUnknown_8277224: @ 0x8277224
gText_Birch_SoItsPlayer::
	.string "{PLAYER}{KUN}　だね？$"

	.globl gUnknown_827722D
	.globl gText_Birch_YourePlayer
gUnknown_827722D: @ 0x827722D
gText_Birch_YourePlayer::
	.string "……そうか！\pきみが　こんど　わたしの　すむ　まち\nミシロタウンに　ひっこして　くる\l{PLAYER}{KUN}　だったのか！\p$"

	.globl gUnknown_8277265
	.globl gText_Birch_AreYouReady
gUnknown_8277265: @ 0x8277265
gText_Birch_AreYouReady::
	.string "よーし　じゅんびは　いいかい？\pこれから　きみ　だけの　ものがたりが\nはじまろうと　している！\pゆめと　ぼうけんと　であいに　みちた\nポケットモンスターの　せかいへ\lゆうきを　もって　とびこんで　みてくれ！\pでは　また　あとで　あおう！\nけんきゅうじょで　まって　いるぞ！\p$"
	.byte 0x00 @ オリジナル枠 0x8b バイトへのパディング
