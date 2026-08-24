	@ data/text/apprentice.inc:571 gText_ApprenticeWhichMonFirst15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeWhichMonFirst15
gText_ApprenticeWhichMonFirst15: @ 0x08270CCE
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lかげむしゃ って ことは ないだろうね\pいやいやいや! ほんものなら いいんだ\nおこらないで くれ!\lそして じょげんを おねがい したい!\pわたしの てもちの なかから\nどのポケモンを しょうぶの はじめに\lだせば いいのか おしえて ほしい"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst15) != 0x8f
	.error "gText_ApprenticeWhichMonFirst15 must retain its original byte length"
	.endif
	.globl gText_Rom_270D59
	.set gText_Rom_270D59, gText_ApprenticeWhichMonFirst15 + 0x8b

	@ data/text/apprentice.inc:574 gText_ApprenticeMonFirstThanks15
	.globl gText_ApprenticeMonFirstThanks15
gText_ApprenticeMonFirstThanks15: @ 0x08270D5D
	.string "{STR_VAR_1}……\nうそでは ないだろうね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしだが がんばって みよう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks15) > 0x4e
	.error "gText_ApprenticeMonFirstThanks15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks15) < 0x4e
	.space 0x4e - (. - gText_ApprenticeMonFirstThanks15)
	.endif

	@ data/text/apprentice.inc:577 gText_ApprenticeWhichMon0
	.globl gText_ApprenticeWhichMon0
gText_ApprenticeWhichMon0: @ 0x08270DAB
	.string "グスン……\nあっ {PLAYER}さん!\lちょうど よかったよう\lぼく きめられない ことが あって……\pあのね ポケモンをね\nどっちを つかうか きめられないんです\p{STR_VAR_1} と {STR_VAR_2}で\nまよって いるんだけど……\l{PLAYER}さんは どっち だったら\lぼくでも かてそう って おもいますか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMon0) > 0x89
	.error "gText_ApprenticeWhichMon0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon0) < 0x89
	.space 0x89 - (. - gText_ApprenticeWhichMon0)
	.endif

	@ data/text/apprentice.inc:580 gText_ApprenticeMonThanks0
	.globl gText_ApprenticeMonThanks0
gText_ApprenticeMonThanks0: @ 0x08270E34
	.string "グスっ わ わかりました!\nあ ごめんなさい うれしくて なみだが……\pぼく がんばって {STR_VAR_1}を\nつかまえてみます!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_ApprenticeMonThanks0) > 0x4d
	.error "gText_ApprenticeMonThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks0) < 0x4d
	.space 0x4d - (. - gText_ApprenticeMonThanks0)
	.endif

	@ data/text/apprentice.inc:583 gText_ApprenticeWhichMon1
	.globl gText_ApprenticeWhichMon1
gText_ApprenticeWhichMon1: @ 0x08270E81
	.string "あっ! {PLAYER}さんだー!\nわーい ちょうど よかった\lきょうも ボクの そうだんに のってね!\pあのね ボクね\n{STR_VAR_1}と {STR_VAR_2}の どっちを\lつかうか まよっちゃったの\pどっちを そだてようかなあ\n{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMon1) > 0x6e
	.error "gText_ApprenticeWhichMon1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon1) < 0x6e
	.space 0x6e - (. - gText_ApprenticeWhichMon1)
	.endif

	@ data/text/apprentice.inc:586 gText_ApprenticeMonThanks1
	.globl gText_ApprenticeMonThanks1
gText_ApprenticeMonThanks1: @ 0x08270EEF
	.string "へえ\n{STR_VAR_1}が いいのか!\lじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_ApprenticeMonThanks1) > 0x23
	.error "gText_ApprenticeMonThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks1) < 0x23
	.space 0x23 - (. - gText_ApprenticeMonThanks1)
	.endif

	@ data/text/apprentice.inc:589 gText_ApprenticeWhichMon2
	.globl gText_ApprenticeWhichMon2
gText_ApprenticeWhichMon2: @ 0x08270F12
	.string "{PLAYER}さん こんにちは!\nちょっと しつもん させて ください!\p{STR_VAR_1} と {STR_VAR_2} で\nどっちを つかうか なやんでるんです!\pどっちの ポケモンが\nつよいと おもいますか?{EOS}"
	.if (. - gText_ApprenticeWhichMon2) > 0x56
	.error "gText_ApprenticeWhichMon2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon2) < 0x56
	.space 0x56 - (. - gText_ApprenticeWhichMon2)
	.endif

	@ data/text/apprentice.inc:592 gText_ApprenticeMonThanks2
	.globl gText_ApprenticeMonThanks2
gText_ApprenticeMonThanks2: @ 0x08270F68
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\nつよい {STR_VAR_1}を つかまえるぞ!\pじゃあ また!{EOS}"
	.if (. - gText_ApprenticeMonThanks2) > 0x30
	.error "gText_ApprenticeMonThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks2) < 0x30
	.space 0x30 - (. - gText_ApprenticeMonThanks2)
	.endif

	@ data/text/apprentice.inc:595 gText_ApprenticeWhichMon3
	.globl gText_ApprenticeWhichMon3
gText_ApprenticeWhichMon3: @ 0x08270F98
	.string "{PLAYER}さん……!\nあの あたしの ことなんて\lどうせ わすれて しまいました よね\p……それでも いいです から\nそうだんに のって ください……\pあたし そだてたい ポケモン ひとつ\nじぶんで きめられなくって……\l{STR_VAR_1} か {STR_VAR_2}\lどちらかに する までは きまったけど\lそこで まよってしまって……\p{PLAYER}さん いやかも しれませんが\nあたしの かわりに きめてください!{EOS}"
	.if (. - gText_ApprenticeWhichMon3) > 0xbb
	.error "gText_ApprenticeWhichMon3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon3) < 0xbb
	.space 0xbb - (. - gText_ApprenticeWhichMon3)
	.endif

	@ data/text/apprentice.inc:598 gText_ApprenticeMonThanks3
	.globl gText_ApprenticeMonThanks3
gText_ApprenticeMonThanks3: @ 0x08271053
	.string "あたし なんかの いうこと\n{STR_VAR_1}が きいて くれるか……\pでも やって みます!\pそのまえに つかまえられるか……\nいえ! がんばって みます\pありがとう ございます!{EOS}"
	.if (. - gText_ApprenticeMonThanks3) > 0x55
	.error "gText_ApprenticeMonThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks3) < 0x55
	.space 0x55 - (. - gText_ApprenticeMonThanks3)
	.endif

	@ data/text/apprentice.inc:601 gText_ApprenticeWhichMon4
	.globl gText_ApprenticeWhichMon4
gText_ApprenticeWhichMon4: @ 0x082710A8
	.string "{PLAYER}{KUN} よかった\nさがしに いこうと おもってたのよ!\pねえ わたしが つかう ポケモン\nあなたが きめて くれない?\pそうね……\n{STR_VAR_1}と {STR_VAR_2}だったら\lどっちが いいと おもう?{EOS}"
	.if (. - gText_ApprenticeWhichMon4) > 0x5c
	.error "gText_ApprenticeWhichMon4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon4) < 0x5c
	.space 0x5c - (. - gText_ApprenticeWhichMon4)
	.endif

	@ data/text/apprentice.inc:604 gText_ApprenticeMonThanks4 (+1 aliases)
	.globl gText_ApprenticeMonThanks4
gText_ApprenticeMonThanks4: @ 0x08271104
	.string "{STR_VAR_1}ね ありがと!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!{EOS}"
	.if (. - gText_ApprenticeMonThanks4) > 0x3e
	.error "gText_ApprenticeMonThanks4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks4) < 0x3e
	.space 0x3e - (. - gText_ApprenticeMonThanks4)
	.endif

	@ data/text/apprentice.inc:607 gText_ApprenticeWhichMon5
	.globl gText_ApprenticeWhichMon5
gText_ApprenticeWhichMon5: @ 0x08271142
	.string "あっれー\n{PLAYER}{KUN} じゃない げんき?\lオレは あいかわらず いそがしくてさ!\pポケモンも がんばりたいんだ けど\nどいつを つかうかも きまんなくてねー\pあのさ!\n{STR_VAR_1}って つよそう じゃん?\lでも {STR_VAR_2}も すてがたいよねー\p{PLAYER}{KUN} アドバイス してよ!\nどっちの ポケモンが イイかな?{EOS}"
	.if (. - gText_ApprenticeWhichMon5) > 0x93
	.error "gText_ApprenticeWhichMon5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon5) < 0x93
	.space 0x93 - (. - gText_ApprenticeWhichMon5)
	.endif

	@ data/text/apprentice.inc:610 gText_ApprenticeMonThanks5
	.globl gText_ApprenticeMonThanks5
gText_ApprenticeMonThanks5: @ 0x082711D5
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を つかまえて みるぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!{EOS}"
	.if (. - gText_ApprenticeMonThanks5) > 0x4e
	.error "gText_ApprenticeMonThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks5) < 0x4e
	.space 0x4e - (. - gText_ApprenticeMonThanks5)
	.endif

	@ data/text/apprentice.inc:613 gText_ApprenticeWhichMon6
	.globl gText_ApprenticeWhichMon6
gText_ApprenticeWhichMon6: @ 0x08271223
	.string "あっ わーい\n{PLAYER}さん じゃない!\lわたし さっそく ともだちに\lしりあいだって じまん しちゃったよ!\pねえねえ きょうも アドバイス おねがい!\nかんたんな こと だから ねっ!\pジャーン では しつもんです!\nわたしが そだてる なら!\l{STR_VAR_1}と {STR_VAR_2} さあどっち?{EOS}"
	.if (. - gText_ApprenticeWhichMon6) > 0x88
	.error "gText_ApprenticeWhichMon6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon6) < 0x88
	.space 0x88 - (. - gText_ApprenticeWhichMon6)
	.endif

	@ data/text/apprentice.inc:616 gText_ApprenticeMonThanks6
	.globl gText_ApprenticeMonThanks6
gText_ApprenticeMonThanks6: @ 0x082712AB
	.string "へっえー!\n{STR_VAR_1} と きますかぁ!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!{EOS}"
	.if (. - gText_ApprenticeMonThanks6) > 0x4a
	.error "gText_ApprenticeMonThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks6) < 0x4a
	.space 0x4a - (. - gText_ApprenticeMonThanks6)
	.endif

	@ data/text/apprentice.inc:619 gText_ApprenticeWhichMon7
	.globl gText_ApprenticeWhichMon7
gText_ApprenticeWhichMon7: @ 0x082712F5
	.string "まあ {PLAYER}さんでは?\nごきげんよう……!\pあなたに でしいり して わたくし\nすこし じしんが ついて まいりました!\lポケモンを さっそく そだてたいと\lおもって おりますの!\pそれでね {PLAYER}さんに\nわたしの ポケモンを\lきめていただく わけには まいりませんか?\p{STR_VAR_1}と {STR_VAR_2}……\nどちらの ポケモンが よろしいでしょう?{EOS}"
	.if (. - gText_ApprenticeWhichMon7) > 0xa4
	.error "gText_ApprenticeWhichMon7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon7) < 0xa4
	.space 0xa4 - (. - gText_ApprenticeWhichMon7)
	.endif
