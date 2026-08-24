	@ data/text/apprentice.inc:523 gText_ApprenticeWhichMonFirst7
	.globl gText_ApprenticeWhichMonFirst7
gText_ApprenticeWhichMonFirst7: @ 0x08270646
	.string "はなしかけて くださって\nありがとう ございます {PLAYER}さん\pその おやさしさに あまえて\nきょうも そうだんが ありますの……\pあの ポケモンの じゅんばんを\nきめて いただきたいん ですの\pさいしょに だす なら\nどの ポケモンが よろしいでしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst7) > 0x80
	.error "gText_ApprenticeWhichMonFirst7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst7) < 0x80
	.space 0x80 - (. - gText_ApprenticeWhichMonFirst7)
	.endif

	@ data/text/apprentice.inc:526 gText_ApprenticeMonFirstThanks7
	.globl gText_ApprenticeMonFirstThanks7
gText_ApprenticeMonFirstThanks7: @ 0x082706C6
	.string "{STR_VAR_1} ですのね!\nすぐに ならびかえますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks7) > 0x3d
	.error "gText_ApprenticeMonFirstThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks7) < 0x3d
	.space 0x3d - (. - gText_ApprenticeMonFirstThanks7)
	.endif

	@ data/text/apprentice.inc:529 gText_ApprenticeWhichMonFirst8
	.globl gText_ApprenticeWhichMonFirst8
gText_ApprenticeWhichMonFirst8: @ 0x08270703
	.string "キャーキャー!\n{PLAYER} さーんっ!\lきょうも あえて かんげきっ……!\pわたしの ポケモンたち\nつよく なりましたよ!\lでも はじめに だす ポケモンで\lかったり まけたり しちゃうんです\p{PLAYER}さん おねがいが!\nどのコを はじめに だしたら いいのか\lぜひ きめて ほしいのですっ!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst8) > 0x8e
	.error "gText_ApprenticeWhichMonFirst8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst8) < 0x8e
	.space 0x8e - (. - gText_ApprenticeWhichMonFirst8)
	.endif

	@ data/text/apprentice.inc:532 gText_ApprenticeMonFirstThanks8
	.globl gText_ApprenticeMonFirstThanks8
gText_ApprenticeMonFirstThanks8: @ 0x08270791
	.string "はあああ…… しあわせすぎる\n{PLAYER}さんに きめて もらうなんて!\lりょうかいですっ! わたし\l{STR_VAR_1}から いくで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks8) > 0x5b
	.error "gText_ApprenticeMonFirstThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks8) < 0x5b
	.space 0x5b - (. - gText_ApprenticeMonFirstThanks8)
	.endif

	@ data/text/apprentice.inc:535 gText_ApprenticeWhichMonFirst9
	.globl gText_ApprenticeWhichMonFirst9
gText_ApprenticeWhichMonFirst9: @ 0x082707EC
	.string "ハローウ!\nマイ ティーチャー {PLAYER}{KUN}\lきょうも アドバイス バンバンたのむよ!\pおじさん スリー ポケモンズで\nティームを つくったのは いいんだが\lまだ じゅんばんが きまって ないんだよ\pそこで! {PLAYER}{KUN}が\nまず はじめに だす ポケモンを\lササーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst9) > 0x8f
	.error "gText_ApprenticeWhichMonFirst9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst9) < 0x8f
	.space 0x8f - (. - gText_ApprenticeWhichMonFirst9)
	.endif

	@ data/text/apprentice.inc:538 gText_ApprenticeMonFirstThanks9
	.globl gText_ApprenticeMonFirstThanks9
gText_ApprenticeMonFirstThanks9: @ 0x0827087B
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガガーっと いれかえるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks9) > 0x40
	.error "gText_ApprenticeMonFirstThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks9) < 0x40
	.space 0x40 - (. - gText_ApprenticeMonFirstThanks9)
	.endif

	@ data/text/apprentice.inc:541 gText_ApprenticeWhichMonFirst10
	.globl gText_ApprenticeWhichMonFirst10
gText_ApprenticeWhichMonFirst10: @ 0x082708BB
	.string "{PLAYER}{KUN} きいてくれ たいへんだ!\nおいらの ポケモンと きたら\l3びき いっしょに とびだすんだよ!\l……なんて わきゃ ないな わはは!\pじつは おいら ポケモンの\nじゅんばん なんて きめるの\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを さいしょに だしたら いいか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst10) > 0xaf
	.error "gText_ApprenticeWhichMonFirst10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst10) < 0xaf
	.space 0xaf - (. - gText_ApprenticeWhichMonFirst10)
	.endif

	@ data/text/apprentice.inc:544 gText_ApprenticeMonFirstThanks10
	.globl gText_ApprenticeMonFirstThanks10
gText_ApprenticeMonFirstThanks10: @ 0x0827096A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ そいつだけは やめようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks10) > 0x5e
	.error "gText_ApprenticeMonFirstThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks10) < 0x5e
	.space 0x5e - (. - gText_ApprenticeMonFirstThanks10)
	.endif

	@ data/text/apprentice.inc:547 gText_ApprenticeWhichMonFirst11
	.globl gText_ApprenticeWhichMonFirst11
gText_ApprenticeWhichMonFirst11: @ 0x082709C8
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしの\lきょうの そうだん いってみようよ!\lじゅんばんに かんする そうだんだよ!\pこたえて! この なかで\nせんとうに したい ポケモンは どれ?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst11) > 0x6d
	.error "gText_ApprenticeWhichMonFirst11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst11) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhichMonFirst11)
	.endif

	@ data/text/apprentice.inc:550 gText_ApprenticeMonFirstThanks11
	.globl gText_ApprenticeMonFirstThanks11
gText_ApprenticeMonFirstThanks11: @ 0x08270A35
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いれかえるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks11) > 0x36
	.error "gText_ApprenticeMonFirstThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks11) < 0x36
	.space 0x36 - (. - gText_ApprenticeMonFirstThanks11)
	.endif

	@ data/text/apprentice.inc:553 gText_ApprenticeWhichMonFirst12
	.globl gText_ApprenticeWhichMonFirst12
gText_ApprenticeWhichMonFirst12: @ 0x08270A6B
	.string "ヤァーフゥー {PLAYER}さんじゃーん?\nどうする オレ? アレきいてみる!?\lそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\pオレの ポケモンの うち どいつを\nさいしょに だしたら いいか きめてエェ!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst12) > 0x70
	.error "gText_ApprenticeWhichMonFirst12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst12) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhichMonFirst12)
	.endif

	@ data/text/apprentice.inc:556 gText_ApprenticeMonFirstThanks12
	.globl gText_ApprenticeMonFirstThanks12
gText_ApprenticeMonFirstThanks12: @ 0x08270ADB
	.string "{STR_VAR_1}だって! イエス!\nじゃ そうしてみる!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks12) > 0x39
	.error "gText_ApprenticeMonFirstThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks12) < 0x39
	.space 0x39 - (. - gText_ApprenticeMonFirstThanks12)
	.endif

	@ data/text/apprentice.inc:559 gText_ApprenticeWhichMonFirst13
	.globl gText_ApprenticeWhichMonFirst13
gText_ApprenticeWhichMonFirst13: @ 0x08270B14
	.string "うう {PLAYER}{KUN} ……\nおなか いたくってさ ちょっとまって……\p……ああ なおってきた……\pどの ポケモンを しょうぶのとき\nさいしょに だすか なやんで いて\lなやみ すぎちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\nどれを さいしょに だせば\lかてると おもうかい?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst13) > 0xa9
	.error "gText_ApprenticeWhichMonFirst13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst13) < 0xa9
	.space 0xa9 - (. - gText_ApprenticeWhichMonFirst13)
	.endif

	@ data/text/apprentice.inc:562 gText_ApprenticeMonFirstThanks13
	.globl gText_ApprenticeMonFirstThanks13
gText_ApprenticeMonFirstThanks13: @ 0x08270BBD
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ごはんを たべたら\lそういうふうに してみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks13) > 0x3e
	.error "gText_ApprenticeMonFirstThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks13) < 0x3e
	.space 0x3e - (. - gText_ApprenticeMonFirstThanks13)
	.endif

	@ data/text/apprentice.inc:565 gText_ApprenticeWhichMonFirst14
	.globl gText_ApprenticeWhichMonFirst14
gText_ApprenticeWhichMonFirst14: @ 0x08270BFB
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lひとつ…… そうだん させてよ\pは はずかし ながら\nポケモン 3びき きまった けどさ\lじゅんばんが きまらないんだよ\pどの ポケモンを 1ばんめに\nだせば かっこが つくの かな……?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst14) > 0x88
	.error "gText_ApprenticeWhichMonFirst14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst14) < 0x88
	.space 0x88 - (. - gText_ApprenticeWhichMonFirst14)
	.endif

	@ data/text/apprentice.inc:568 gText_ApprenticeMonFirstThanks14
	.globl gText_ApprenticeMonFirstThanks14
gText_ApprenticeMonFirstThanks14: @ 0x08270C83
	.string "よ よし!\n{STR_VAR_1}から だして みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks14) > 0x4b
	.error "gText_ApprenticeMonFirstThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks14) < 0x4b
	.space 0x4b - (. - gText_ApprenticeMonFirstThanks14)
	.endif

