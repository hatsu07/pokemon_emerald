	@ data/text/apprentice.inc:589 gText_ApprenticeWhichMon2
	.globl gText_Rom_270F12
gText_Rom_270F12: @ 0x08270F12
	.string "{PLAYER}さん こんにちは!\nちょっと しつもん させて ください!\p{STR_VAR_1} と {STR_VAR_2} で\nどっちを つかうか なやんでるんです!\pどっちの ポケモンが\nつよいと おもいますか?$"
	.if (. - gText_Rom_270F12) > 0x56
	.error "gText_Rom_270F12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F12) < 0x56
	.space 0x56 - (. - gText_Rom_270F12)
	.endif

	@ data/text/apprentice.inc:592 gText_ApprenticeMonThanks2
	.globl gText_Rom_270F68
gText_Rom_270F68: @ 0x08270F68
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\nつよい {STR_VAR_1}を つかまえるぞ!\pじゃあ また!$"
	.if (. - gText_Rom_270F68) > 0x30
	.error "gText_Rom_270F68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F68) < 0x30
	.space 0x30 - (. - gText_Rom_270F68)
	.endif

	@ data/text/apprentice.inc:595 gText_ApprenticeWhichMon3
	.globl gText_Rom_270F98
gText_Rom_270F98: @ 0x08270F98
	.string "{PLAYER}さん……!\nあの あたしの ことなんて\lどうせ わすれて しまいました よね\p……それでも いいです から\nそうだんに のって ください……\pあたし そだてたい ポケモン ひとつ\nじぶんで きめられなくって……\l{STR_VAR_1} か {STR_VAR_2}\lどちらかに する までは きまったけど\lそこで まよってしまって……\p{PLAYER}さん いやかも しれませんが\nあたしの かわりに きめてください!$"
	.if (. - gText_Rom_270F98) > 0xbb
	.error "gText_Rom_270F98 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_270F98) < 0xbb
	.space 0xbb - (. - gText_Rom_270F98)
	.endif

	@ data/text/apprentice.inc:598 gText_ApprenticeMonThanks3
	.globl gText_Rom_271053
gText_Rom_271053: @ 0x08271053
	.string "あたし なんかの いうこと\n{STR_VAR_1}が きいて くれるか……\pでも やって みます!\pそのまえに つかまえられるか……\nいえ! がんばって みます\pありがとう ございます!$"
	.if (. - gText_Rom_271053) > 0x55
	.error "gText_Rom_271053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271053) < 0x55
	.space 0x55 - (. - gText_Rom_271053)
	.endif

	@ data/text/apprentice.inc:601 gText_ApprenticeWhichMon4
	.globl gText_Rom_2710A8
gText_Rom_2710A8: @ 0x082710A8
	.string "{PLAYER}{KUN} よかった\nさがしに いこうと おもってたのよ!\pねえ わたしが つかう ポケモン\nあなたが きめて くれない?\pそうね……\n{STR_VAR_1}と {STR_VAR_2}だったら\lどっちが いいと おもう?$"
	.if (. - gText_Rom_2710A8) > 0x5c
	.error "gText_Rom_2710A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2710A8) < 0x5c
	.space 0x5c - (. - gText_Rom_2710A8)
	.endif

	@ data/text/apprentice.inc:604 gText_ApprenticeMonThanks4 (+1 aliases)
	.globl gText_Rom_271104
gText_Rom_271104: @ 0x08271104
	.string "{STR_VAR_1}ね ありがと!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!$"
	.if (. - gText_Rom_271104) > 0x3e
	.error "gText_Rom_271104 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271104) < 0x3e
	.space 0x3e - (. - gText_Rom_271104)
	.endif

	@ data/text/apprentice.inc:607 gText_ApprenticeWhichMon5
	.globl gText_Rom_271142
gText_Rom_271142: @ 0x08271142
	.string "あっれー\n{PLAYER}{KUN} じゃない げんき?\lオレは あいかわらず いそがしくてさ!\pポケモンも がんばりたいんだ けど\nどいつを つかうかも きまんなくてねー\pあのさ!\n{STR_VAR_1}って つよそう じゃん?\lでも {STR_VAR_2}も すてがたいよねー\p{PLAYER}{KUN} アドバイス してよ!\nどっちの ポケモンが イイかな?$"
	.if (. - gText_Rom_271142) > 0x93
	.error "gText_Rom_271142 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271142) < 0x93
	.space 0x93 - (. - gText_Rom_271142)
	.endif

	@ data/text/apprentice.inc:610 gText_ApprenticeMonThanks5
	.globl gText_Rom_2711D5
gText_Rom_2711D5: @ 0x082711D5
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を つかまえて みるぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!$"
	.if (. - gText_Rom_2711D5) > 0x4e
	.error "gText_Rom_2711D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2711D5) < 0x4e
	.space 0x4e - (. - gText_Rom_2711D5)
	.endif

	@ data/text/apprentice.inc:613 gText_ApprenticeWhichMon6
	.globl gText_Rom_271223
gText_Rom_271223: @ 0x08271223
	.string "あっ わーい\n{PLAYER}さん じゃない!\lわたし さっそく ともだちに\lしりあいだって じまん しちゃったよ!\pねえねえ きょうも アドバイス おねがい!\nかんたんな こと だから ねっ!\pジャーン では しつもんです!\nわたしが そだてる なら!\l{STR_VAR_1}と {STR_VAR_2} さあどっち?$"
	.if (. - gText_Rom_271223) > 0x88
	.error "gText_Rom_271223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271223) < 0x88
	.space 0x88 - (. - gText_Rom_271223)
	.endif

	@ data/text/apprentice.inc:616 gText_ApprenticeMonThanks6
	.globl gText_Rom_2712AB
gText_Rom_2712AB: @ 0x082712AB
	.string "へっえー!\n{STR_VAR_1} と きますかぁ!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!$"
	.if (. - gText_Rom_2712AB) > 0x4a
	.error "gText_Rom_2712AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2712AB) < 0x4a
	.space 0x4a - (. - gText_Rom_2712AB)
	.endif

	@ data/text/apprentice.inc:619 gText_ApprenticeWhichMon7
	.globl gText_Rom_2712F5
gText_Rom_2712F5: @ 0x082712F5
	.string "まあ {PLAYER}さんでは?\nごきげんよう……!\pあなたに でしいり して わたくし\nすこし じしんが ついて まいりました!\lポケモンを さっそく そだてたいと\lおもって おりますの!\pそれでね {PLAYER}さんに\nわたしの ポケモンを\lきめていただく わけには まいりませんか?\p{STR_VAR_1}と {STR_VAR_2}……\nどちらの ポケモンが よろしいでしょう?$"
	.if (. - gText_Rom_2712F5) > 0xa4
	.error "gText_Rom_2712F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2712F5) < 0xa4
	.space 0xa4 - (. - gText_Rom_2712F5)
	.endif

	@ data/text/apprentice.inc:622 gText_ApprenticeMonThanks7
	.globl gText_Rom_271399
gText_Rom_271399: @ 0x08271399
	.string "{STR_VAR_1} ですのね!\nさっそく さがして きますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!$"
	.if (. - gText_Rom_271399) > 0x3f
	.error "gText_Rom_271399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271399) < 0x3f
	.space 0x3f - (. - gText_Rom_271399)
	.endif

	@ data/text/apprentice.inc:625 gText_ApprenticeWhichMon8
	.globl gText_Rom_2713D8
gText_Rom_2713D8: @ 0x082713D8
	.string "キャー {PLAYER}さんに また あえた!\nかっ かんげきっ……!\pそそそ そうだわっ!\nせっかく あえたん ですもの\lこの チャンスを のがす ては ないわっ!\p{PLAYER}さん おねがいが!\nわたしの ポケモンを きめて くださいっ!\p{STR_VAR_1}と {STR_VAR_2}と\nどちらが いいか きめて ほしいのですっ!$"
	.if (. - gText_Rom_2713D8) > 0x8e
	.error "gText_Rom_2713D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2713D8) < 0x8e
	.space 0x8e - (. - gText_Rom_2713D8)
	.endif

	@ data/text/apprentice.inc:628 gText_ApprenticeMonThanks8
	.globl gText_Rom_271466
gText_Rom_271466: @ 0x08271466
	.string "うわぁぁ きめて もらっちゃったあ!\n{STR_VAR_1} ですねっ!\lがんばって そだてるで あります!\pでは また こんど\nいろいろと おしえて くださいね!$"
	.if (. - gText_Rom_271466) > 0x4a
	.error "gText_Rom_271466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271466) < 0x4a
	.space 0x4a - (. - gText_Rom_271466)
	.endif

	@ data/text/apprentice.inc:631 gText_ApprenticeWhichMon9
	.globl gText_Rom_2714B0
gText_Rom_2714B0: @ 0x082714B0
	.string "ヘイ ヘイ {PLAYER}{KUN}!\nおじさんの ポケモン ティーチャー!\pハロウ きみを さがしてたんだよ\nアドバイスを おねがいするよ!\pおじさんが つかう ポケモン\nどっちが いいかな?\l{STR_VAR_1}か {STR_VAR_2}か\lパーっと きめちゃって くれ!$"
	.if (. - gText_Rom_2714B0) > 0x72
	.error "gText_Rom_2714B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2714B0) < 0x72
	.space 0x72 - (. - gText_Rom_2714B0)
	.endif

	@ data/text/apprentice.inc:634 gText_ApprenticeMonThanks9
	.globl gText_Rom_271522
gText_Rom_271522: @ 0x08271522
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガーっと つかまえて くるよ!\pそれじゃあ これからも よろしくね\nアディオース!$"
	.if (. - gText_Rom_271522) > 0x42
	.error "gText_Rom_271522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271522) < 0x42
	.space 0x42 - (. - gText_Rom_271522)
	.endif

	@ data/text/apprentice.inc:637 gText_ApprenticeWhichMon10
	.globl gText_Rom_271564
gText_Rom_271564: @ 0x08271564
	.string "{PLAYER}{KUN} たいへんだ たいへんだ!\nまぼろしの ポケモン つかまえちゃった!\l……なんて うそさ! わっはっは\pじつは おいら ポケモン つかまえるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを つかまえたら いいか\lししょうが きめて くれない かな?\pどっちが いいかな?\n{STR_VAR_1}と {STR_VAR_2}だと……$"
	.if (. - gText_Rom_271564) > 0xa9
	.error "gText_Rom_271564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271564) < 0xa9
	.space 0xa9 - (. - gText_Rom_271564)
	.endif

	@ data/text/apprentice.inc:640 gText_ApprenticeMonThanks10
	.globl gText_Rom_27160D
gText_Rom_27160D: @ 0x0827160D
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー$"
	.if (. - gText_Rom_27160D) > 0x5d
	.error "gText_Rom_27160D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27160D) < 0x5d
	.space 0x5d - (. - gText_Rom_27160D)
	.endif

	@ data/text/apprentice.inc:643 gText_ApprenticeWhichMon11
	.globl gText_Rom_27166A
gText_Rom_27166A: @ 0x0827166A
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わし\lきみは とうぜん おぼえてるだろ?\pきょうも わしの しつもん いってみよう!\nポケモンに かんする そうだんだよ!\p{STR_VAR_1} と {STR_VAR_2}\nわしが つかまえるなら さあ どっち?$"
	.if (. - gText_Rom_27166A) > 0x7b
	.error "gText_Rom_27166A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27166A) < 0x7b
	.space 0x7b - (. - gText_Rom_27166A)
	.endif

	@ data/text/apprentice.inc:646 gText_ApprenticeMonThanks11
	.globl gText_Rom_2716E5
gText_Rom_2716E5: @ 0x082716E5
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで さがしてくるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!$"
	.if (. - gText_Rom_2716E5) > 0x37
	.error "gText_Rom_2716E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2716E5) < 0x37
	.space 0x37 - (. - gText_Rom_2716E5)
	.endif

	@ data/text/apprentice.inc:649 gText_ApprenticeWhichMon12
	.globl gText_Rom_27171C
gText_Rom_27171C: @ 0x0827171C
	.string "ゥワォ {PLAYER}さんじゃなーい!?\nどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pオスっ ひさしぶり ですっ!\nそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\lオレの ポケモン なにに したらいいかな!\p{STR_VAR_1}と {STR_VAR_2}\nどっちが いいか さあ きめて!$"
	.if (. - gText_Rom_27171C) > 0x95
	.error "gText_Rom_27171C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27171C) < 0x95
	.space 0x95 - (. - gText_Rom_27171C)
	.endif

	@ data/text/apprentice.inc:652 gText_ApprenticeMonThanks12
	.globl gText_Rom_2717B1
gText_Rom_2717B1: @ 0x082717B1
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく さがしてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!$"
	.if (. - gText_Rom_2717B1) > 0x3c
	.error "gText_Rom_2717B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717B1) < 0x3c
	.space 0x3c - (. - gText_Rom_2717B1)
	.endif

	@ data/text/apprentice.inc:655 gText_ApprenticeWhichMon13
	.globl gText_Rom_2717ED
gText_Rom_2717ED: @ 0x082717ED
	.string "{PLAYER}{KUN}かぁ\nおれ あたま いたくてさ……\pどの ポケモンに するか\nなやみ すぎちゃったん だよね きっと\lというわけ だからさ\lかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\n{STR_VAR_1}と {STR_VAR_2} だったら\lどっちが あってると おもうかい?$"
	.if (. - gText_Rom_2717ED) > 0x7e
	.error "gText_Rom_2717ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717ED) < 0x7e
	.space 0x7e - (. - gText_Rom_2717ED)
	.endif

	@ data/text/apprentice.inc:658 gText_ApprenticeMonThanks13
	.globl gText_Rom_27186B
gText_Rom_27186B: @ 0x0827186B
	.string "ん わかった {STR_VAR_1}な!\nじゃあ たいちょうの いいときに\lさがしてみるよ!\pこれからも おれを よろしく たのむよ!$"
	.if (. - gText_Rom_27186B) > 0x3b
	.error "gText_Rom_27186B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27186B) < 0x3b
	.space 0x3b - (. - gText_Rom_27186B)
	.endif

	@ data/text/apprentice.inc:661 gText_ApprenticeWhichMon14
	.globl gText_Rom_2718A6
gText_Rom_2718A6: @ 0x082718A6
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lちょっと…… そうだん させて くれよ\pは はずかしいん だけどさ!\nつかいたい ポケモンで なやんでててさ\l{STR_VAR_1}と {STR_VAR_2}だったら\lどっちを つかったら いい かな……?$"
	.if (. - gText_Rom_2718A6) > 0x7f
	.error "gText_Rom_2718A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2718A6) < 0x7f
	.space 0x7f - (. - gText_Rom_2718A6)
	.endif

	@ data/text/apprentice.inc:664 gText_ApprenticeMonThanks14
	.globl gText_Rom_271925
gText_Rom_271925: @ 0x08271925
	.string "よ よし!\n{STR_VAR_1}で がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね$"
	.if (. - gText_Rom_271925) > 0x4c
	.error "gText_Rom_271925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271925) < 0x4c
	.space 0x4c - (. - gText_Rom_271925)
	.endif

	@ data/text/apprentice.inc:667 gText_ApprenticeWhichMon15
	.globl gText_Rom_271971
gText_Rom_271971: @ 0x08271971
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pいや ほんもの なら いいんだ\nついでに でしの わたしに\lじょげんを おねがい したい!\pわたしが つかう ポケモンの ことだが\n{STR_VAR_1}と {STR_VAR_2}であれば\lどちらが わたしに ふさわしい かな?$"
	.if (. - gText_Rom_271971) > 0x80
	.error "gText_Rom_271971 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271971) < 0x80
	.space 0x80 - (. - gText_Rom_271971)
	.endif

	@ data/text/apprentice.inc:670 gText_ApprenticeMonThanks15
	.globl gText_Rom_2719F1
gText_Rom_2719F1: @ 0x082719F1
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたし でも\lなんとか つかい こなせると いいな\pでは いずれまた あおう!$"
	.if (. - gText_Rom_2719F1) > 0x53
	.error "gText_Rom_2719F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2719F1) < 0x53
	.space 0x53 - (. - gText_Rom_2719F1)
	.endif

	@ data/text/apprentice.inc:673 gText_ApprenticeWhichMove0
	.globl gText_Rom_271A44
gText_Rom_271A44: @ 0x08271A44
	.string "うわーん {PLAYER}さんだ!\nぐすん ひっく\lぼく なやんで いるんですよう!\lぼくの {STR_VAR_1}のね わざが\lなかなか きまらないん です……\pあのう あのう!\n{PLAYER}さん きめて もらえませんか?\p{STR_VAR_1}の わざ\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが いいんでしょう……?$"
	.if (. - gText_Rom_271A44) > 0x7e
	.error "gText_Rom_271A44 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271A44) < 0x7e
	.space 0x7e - (. - gText_Rom_271A44)
	.endif

	@ data/text/apprentice.inc:676 gText_ApprenticeMoveThanks0
	.globl gText_Rom_271AC2
gText_Rom_271AC2: @ 0x08271AC2
	.string "{STR_VAR_1} ですね!\nうぅ うわああぁん!\pあ! ごめんなさい\n{PLAYER}さんが わざを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!$"
	.if (. - gText_Rom_271AC2) > 0x5f
	.error "gText_Rom_271AC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271AC2) < 0x5f
	.space 0x5f - (. - gText_Rom_271AC2)
	.endif

	@ data/text/apprentice.inc:679 gText_ApprenticeWhichMove1
	.globl gText_Rom_271B21
gText_Rom_271B21: @ 0x08271B21
	.string "{PLAYER}せんせい こんにちは!\nまた おしえて ほしいことが あるの!\pぼくの {STR_VAR_1}に\nかっこいい わざを おしえたいの!\lおすすめは どっちかな?\p{STR_VAR_2}か {STR_VAR_3}が\nいいんだけど……$"
	.if (. - gText_Rom_271B21) > 0x5a
	.error "gText_Rom_271B21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271B21) < 0x5a
	.space 0x5a - (. - gText_Rom_271B21)
	.endif

	@ data/text/apprentice.inc:682 gText_ApprenticeMoveThanks1
	.globl gText_Rom_271B7B
gText_Rom_271B7B: @ 0x08271B7B
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク それで いくね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!$"
	.if (. - gText_Rom_271B7B) > 0x3c
	.error "gText_Rom_271B7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271B7B) < 0x3c
	.space 0x3c - (. - gText_Rom_271B7B)
	.endif

	@ data/text/apprentice.inc:685 gText_ApprenticeWhichMove2
	.globl gText_Rom_271BB7
gText_Rom_271BB7: @ 0x08271BB7
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の こと なんだけど\lわざの ことで なやんでるんです\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つよいのか……\p{STR_VAR_1}には どっちの わざが\nあってると おもいますか?$"
	.if (. - gText_Rom_271BB7) > 0x63
	.error "gText_Rom_271BB7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271BB7) < 0x63
	.space 0x63 - (. - gText_Rom_271BB7)
	.endif

	@ data/text/apprentice.inc:688 gText_ApprenticeMoveThanks2
	.globl gText_Rom_271C1A
gText_Rom_271C1A: @ 0x08271C1A
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\n{STR_VAR_1}を おぼえさせるぞ!\pじゃあ また!$"
	.if (. - gText_Rom_271C1A) > 0x2d
	.error "gText_Rom_271C1A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271C1A) < 0x2d
	.space 0x2d - (. - gText_Rom_271C1A)
	.endif

	@ data/text/apprentice.inc:691 gText_ApprenticeWhichMove3
	.globl gText_Rom_271C47
gText_Rom_271C47: @ 0x08271C47
	.string "ああ {PLAYER}さん!\nあたし あたし ほんと ダメなんです!\pポケモンを いざ そだてようと しても\n……わざ ひとつ まともに きめられなくて\lどうしようも ありません……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます……\lでも あたし……\pおねがいです {PLAYER}さん\nあたしの {STR_VAR_1}の わざ\lきめて いただけませんか?\p{STR_VAR_2}と {STR_VAR_3}か\nどちらかを えらんで くださるだけでも!$"
	.if (. - gText_Rom_271C47) > 0xc3
	.error "gText_Rom_271C47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271C47) < 0xc3
	.space 0xc3 - (. - gText_Rom_271C47)
	.endif

	@ data/text/apprentice.inc:694 gText_ApprenticeMoveThanks3
	.globl gText_Rom_271D0A
gText_Rom_271D0A: @ 0x08271D0A
	.string "わかりました!\pあたし なんかの ために\n{STR_VAR_1}を おぼえて くれるか……\lいえ! がんばって みます\pありがとう ございます!$"
	.if (. - gText_Rom_271D0A) > 0x40
	.error "gText_Rom_271D0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271D0A) < 0x40
	.space 0x40 - (. - gText_Rom_271D0A)
	.endif

	@ data/text/apprentice.inc:697 gText_ApprenticeWhichMove4
	.globl gText_Rom_271D4A
gText_Rom_271D4A: @ 0x08271D4A
	.string "あら! {PLAYER}{KUN}\nあいたいと おもって いたの!\lわたしの {STR_VAR_1}に ふさわしい わざは\lなにかなー って まよってて……\lあなたが きめて くれない?\pそうね……\n{STR_VAR_2}と {STR_VAR_3}だったら\lどっちが いいと おもう?$"
	.if (. - gText_Rom_271D4A) > 0x6b
	.error "gText_Rom_271D4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271D4A) < 0x6b
	.space 0x6b - (. - gText_Rom_271D4A)
	.endif

	@ data/text/apprentice.inc:604 gText_ApprenticeMonThanks4 (+1 aliases)
	.globl gText_Rom_271DB5
gText_Rom_271DB5: @ 0x08271DB5
	.string "{STR_VAR_1}ね ありがと!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!$"
	.if (. - gText_Rom_271DB5) > 0x3e
	.error "gText_Rom_271DB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271DB5) < 0x3e
	.space 0x3e - (. - gText_Rom_271DB5)
	.endif

	@ data/text/apprentice.inc:703 gText_ApprenticeWhichMove5
	.globl gText_Rom_271DF3
gText_Rom_271DF3: @ 0x08271DF3
	.string "あー いそがしい いそがしい!\nおっと きみは {PLAYER}{KUN}!\lちょうしは どう?\pこっちはさ! けさ おきてから\nジョギング スイミング クッキング\lいそがしいの なんのって……!\pオレの {STR_VAR_1}に\nおしえさせる わざも きまんなくてねー\pあのさ!\n{STR_VAR_2} って よさそうじゃん?\lでも {STR_VAR_3} も イイよね!\p{PLAYER}{KUN}の アドバイス たのむよ!\nどっちの わざが イイかな?$"
	.if (. - gText_Rom_271DF3) > 0xb9
	.error "gText_Rom_271DF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271DF3) < 0xb9
	.space 0xb9 - (. - gText_Rom_271DF3)
	.endif

	@ data/text/apprentice.inc:706 gText_ApprenticeMoveThanks5
	.globl gText_Rom_271EAC
gText_Rom_271EAC: @ 0x08271EAC
	.string "オーケー わかった!\nじゃ スケジュール あけて\lおぼえさせて みるぜ!\pほんと きみって いい せんせい だぜ\nサンキュー! じゃ またな!$"
	.if (. - gText_Rom_271EAC) > 0x48
	.error "gText_Rom_271EAC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271EAC) < 0x48
	.space 0x48 - (. - gText_Rom_271EAC)
	.endif

	@ data/text/apprentice.inc:709 gText_ApprenticeWhichMove6
	.globl gText_Rom_271EF4
gText_Rom_271EF4: @ 0x08271EF4
	.string "おおっ ラッキー!\n{PLAYER}さんに あえましたー!\lさっそく ききたいことが あるのー!\pジャーン では\nほんじつの そうだんでーす!\pわたしの {STR_VAR_1}には\n{STR_VAR_2}と {STR_VAR_3}\lおにあいの わざは さあどっち?$"
	.if (. - gText_Rom_271EF4) > 0x64
	.error "gText_Rom_271EF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271EF4) < 0x64
	.space 0x64 - (. - gText_Rom_271EF4)
	.endif

	@ data/text/apprentice.inc:712 gText_ApprenticeMoveThanks6
	.globl gText_Rom_271F58
gText_Rom_271F58: @ 0x08271F58
	.string "ははぁーん\n{STR_VAR_1} が イイですか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!$"
	.if (. - gText_Rom_271F58) > 0x4a
	.error "gText_Rom_271F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271F58) < 0x4a
	.space 0x4a - (. - gText_Rom_271F58)
	.endif

	@ data/text/apprentice.inc:715 gText_ApprenticeWhichMove7
	.globl gText_Rom_271FA2
gText_Rom_271FA2: @ 0x08271FA2
	.string "ごきげんよう {PLAYER}さん……!\nあのね きょうも\lわたくし そうだんが あるのです\lわたくしの かわいい\l{STR_VAR_1}ちゃんの ことですの\p{STR_VAR_1}ちゃんに ピッタリの わざ……\n{STR_VAR_2}と {STR_VAR_3}の\lどちらを おしえたら よろしいでしょう?$"
	.if (. - gText_Rom_271FA2) > 0x70
	.error "gText_Rom_271FA2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271FA2) < 0x70
	.space 0x70 - (. - gText_Rom_271FA2)
	.endif

	@ data/text/apprentice.inc:718 gText_ApprenticeMoveThanks7
	.globl gText_Rom_272012
gText_Rom_272012: @ 0x08272012
	.string "{STR_VAR_1} ですのね!\nさっそく そのように しますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!$"
	.if (. - gText_Rom_272012) > 0x40
	.error "gText_Rom_272012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272012) < 0x40
	.space 0x40 - (. - gText_Rom_272012)
	.endif

	@ data/text/apprentice.inc:721 gText_ApprenticeWhichMove8
	.globl gText_Rom_272052
gText_Rom_272052: @ 0x08272052
	.string "キャァァ {PLAYER}さんが いるーっ!\nかっ かんげきっ……!\lこまった ときは {PLAYER}さんですっ!\pほんじつは わざの オススメを\nおしえて ほしいのですっ!\lわたしの {STR_VAR_1}の わざを\lきめて くださいっ!\pどっちが いいですかっ?\n{STR_VAR_2}と {STR_VAR_3}!$"
	.if (. - gText_Rom_272052) > 0x7a
	.error "gText_Rom_272052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272052) < 0x7a
	.space 0x7a - (. - gText_Rom_272052)
	.endif

	@ data/text/apprentice.inc:724 gText_ApprenticeMoveThanks8
	.globl gText_Rom_2720CC
gText_Rom_2720CC: @ 0x082720CC
	.string "ああぁ ありがとう ございますっ!\n{STR_VAR_1} ですねっ\lりょうかいで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!$"
	.if (. - gText_Rom_2720CC) > 0x44
	.error "gText_Rom_2720CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2720CC) < 0x44
	.space 0x44 - (. - gText_Rom_2720CC)
	.endif

	@ data/text/apprentice.inc:727 gText_ApprenticeWhichMove9
	.globl gText_Rom_272110
gText_Rom_272110: @ 0x08272110
	.string "ハロウ {PLAYER}{KUN} ハロウ!\nおじさん きょうも きみに\lアドバイスを もらいたいんだ プリーズ!\pマイ ポケモン {STR_VAR_1}の\nベストな わざは なんだろう?\lババーっと かてちゃいそうな わざ!\p{STR_VAR_2} かな?\nオア {STR_VAR_3} かな?$"
	.if (. - gText_Rom_272110) > 0x71
	.error "gText_Rom_272110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272110) < 0x71
	.space 0x71 - (. - gText_Rom_272110)
	.endif

	@ data/text/apprentice.inc:730 gText_ApprenticeMoveThanks9
	.globl gText_Rom_272181
gText_Rom_272181: @ 0x08272181
	.string "あはぁ {STR_VAR_1}ねー\nオーケイ オーケイ!\lおじさん ザザーっと おぼえさせるよ!\pそれじゃあ これからも よろしくね\nアディオース!$"
	.if (. - gText_Rom_272181) > 0x42
	.error "gText_Rom_272181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272181) < 0x42
	.space 0x42 - (. - gText_Rom_272181)
	.endif

	@ data/text/apprentice.inc:733 gText_ApprenticeWhichMove10
	.globl gText_Rom_2721C3
gText_Rom_2721C3: @ 0x082721C3
	.string "{PLAYER}{KUN} たいへんだぞ!\nおいらの ポケモンが なんと\lわざを 6つ おぼえたんだ!\p……なんてね ウソだよ! ははは!\pじつは おいら ポケモンの わざ きめるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ ししょうが\lオススメのわざ きめて くれない かな?\p{STR_VAR_2} と {STR_VAR_3}\n{STR_VAR_1}なら どっちが あうかい?$"
	.if (. - gText_Rom_2721C3) > 0xa0
	.error "gText_Rom_2721C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2721C3) < 0xa0
	.space 0xa0 - (. - gText_Rom_2721C3)
	.endif

	@ data/text/apprentice.inc:736 gText_ApprenticeMoveThanks10
	.globl gText_Rom_272263
gText_Rom_272263: @ 0x08272263
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうわざに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー$"
	.if (. - gText_Rom_272263) > 0x5d
	.error "gText_Rom_272263 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272263) < 0x5d
	.space 0x5d - (. - gText_Rom_272263)
	.endif

	@ data/text/apprentice.inc:739 gText_ApprenticeWhichMove11
	.globl gText_Rom_2722C0
gText_Rom_2722C0: @ 0x082722C0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし きょうの わしの そうだん\nいってみようぜー!\lわざに かんする そうだんだよ!\p{STR_VAR_2}と {STR_VAR_3}\n{STR_VAR_1}が おぼえるなら どっちだ?$"
	.if (. - gText_Rom_2722C0) > 0x6d
	.error "gText_Rom_2722C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2722C0) < 0x6d
	.space 0x6d - (. - gText_Rom_2722C0)
	.endif

	@ data/text/apprentice.inc:742 gText_ApprenticeMoveThanks11
	.globl gText_Rom_27232D
gText_Rom_27232D: @ 0x0827232D
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで おぼえさせるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!$"
	.if (. - gText_Rom_27232D) > 0x37
	.error "gText_Rom_27232D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27232D) < 0x37
	.space 0x37 - (. - gText_Rom_27232D)
	.endif

	@ data/text/apprentice.inc:745 gText_ApprenticeWhichMove12
	.globl gText_Rom_272364
gText_Rom_272364: @ 0x08272364
	.string "イエァ {PLAYER}さんじゃないのー?\nどうする オレ? また はなしかける!?\lってもう はなしかけてる!?\lって {PLAYER}さん あきれてる!?\lしかたねー そうだん してみる!?\pきょうも そうだんに のってェ!\nって きいてる!? きいてる!!\pおれの {STR_VAR_1}の わざ\nどうしたら いいかな? きめてエェ!\l{STR_VAR_2}!? {STR_VAR_3}!?$"
	.if (. - gText_Rom_272364) > 0xa0
	.error "gText_Rom_272364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272364) < 0xa0
	.space 0xa0 - (. - gText_Rom_272364)
	.endif

	@ data/text/apprentice.inc:748 gText_ApprenticeMoveThanks12
	.globl gText_Rom_272404
gText_Rom_272404: @ 0x08272404
	.string "{STR_VAR_1}で オーライ!\nじゃ さっそく おぼえさせるぜェ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!$"
	.if (. - gText_Rom_272404) > 0x3e
	.error "gText_Rom_272404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272404) < 0x3e
	.space 0x3e - (. - gText_Rom_272404)
	.endif

	@ data/text/apprentice.inc:751 gText_ApprenticeWhichMove13
	.globl gText_Rom_272442
gText_Rom_272442: @ 0x08272442
	.string "ガハゴホ あ {PLAYER}{KUN}\nカゼ ひいちゃったよ おれ……\pポケモンに おしえる わざを\nきめたいんだけど ムリっぽいん だよね\lというわけ だからさ かわりに たのむよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが あってると おもうかい?$"
	.if (. - gText_Rom_272442) > 0x7e
	.error "gText_Rom_272442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272442) < 0x7e
	.space 0x7e - (. - gText_Rom_272442)
	.endif

	@ data/text/apprentice.inc:754 gText_ApprenticeMoveThanks13
	.globl gText_Rom_2724C0
gText_Rom_2724C0: @ 0x082724C0
	.string "ん わかった {STR_VAR_1}な!\nじゃあ カゼが なおったら\lゴホ おしえて みるよ!\pこれからも おれを よろしく たのむよ!$"
	.if (. - gText_Rom_2724C0) > 0x3c
	.error "gText_Rom_2724C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724C0) < 0x3c
	.space 0x3c - (. - gText_Rom_2724C0)
	.endif

	@ data/text/apprentice.inc:757 gText_ApprenticeWhichMove14
	.globl gText_Rom_2724FC
gText_Rom_2724FC: @ 0x082724FC
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lまた…… そうだん させて くれよ\pは はずかしながらさ\nポケモンに おしえる わざがさ\lきまんないんだ アドバイス くれよ!\pポケモンは {STR_VAR_1}なんだ\nだったら どっちが いい かな……?\n{STR_VAR_2}…… {STR_VAR_3}……$"
	.if (. - gText_Rom_2724FC) > 0x92
	.error "gText_Rom_2724FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724FC) < 0x92
	.space 0x92 - (. - gText_Rom_2724FC)
	.endif

	@ data/text/apprentice.inc:760 gText_ApprenticeMoveThanks14
	.globl gText_Rom_27258E
gText_Rom_27258E: @ 0x0827258E
	.string "よ よし {STR_VAR_1}\nいって みるよ!\pそんな わざを おしえるなんて\nて てれるな……\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね$"
	.if (. - gText_Rom_27258E) > 0x49
	.error "gText_Rom_27258E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27258E) < 0x49
	.space 0x49 - (. - gText_Rom_27258E)
	.endif

	@ data/text/apprentice.inc:763 gText_ApprenticeWhichMove15
	.globl gText_Rom_2725D7
gText_Rom_2725D7: @ 0x082725D7
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\lさいきん はやりの モノマネ では?\pいやいや! ほんもの ならいいんだ!\nきを わるく しないでくれ!\lそして ついでに でしの わたしに\lじょげんを おねがい したい\lわたしの {STR_VAR_1}の ことだ!\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つかえたら いいかね?$"
	.if (. - gText_Rom_2725D7) > 0x9d
	.error "gText_Rom_2725D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2725D7) < 0x9d
	.space 0x9d - (. - gText_Rom_2725D7)
	.endif

	@ data/text/apprentice.inc:766 gText_ApprenticeMoveThanks15
	.globl gText_Rom_272674
gText_Rom_272674: @ 0x08272674
	.string "{STR_VAR_1}……\nまちがいなく そうなの かね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lおぼえて くれると いいな\pでは いずれまた あおう!$"
	.if (. - gText_Rom_272674) > 0x5b
	.error "gText_Rom_272674 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272674) < 0x5b
	.space 0x5b - (. - gText_Rom_272674)
	.endif

	@ data/text/apprentice.inc:769 gText_ApprenticePickWinSpeech0
	.globl gText_Rom_2726CF
gText_Rom_2726CF: @ 0x082726CF
	.string "ああっ {PLAYER}さん\n{PLAYER}さんだ! わわーん!\lぐすん ひっく きいて ください\pぼくっ ぼく しょうぶ するとき\nものすごく きんちょう して\lかっても ないちゃうん です……\pなにか かっこいい こと いえたら\nいいなと おもうんです けど……\pあのう あのう {PLAYER}さん\nもし よかったら……\lぼく なかなくて いいように\lなにか かったときに いう ことばを\lかんがえて もらえませんか?$"
	.if (. - gText_Rom_2726CF) > 0xc4
	.error "gText_Rom_2726CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2726CF) < 0xc4
	.space 0xc4 - (. - gText_Rom_2726CF)
	.endif

	@ data/text/apprentice.inc:772 gText_ApprenticeWinSpeechThanks0
	.globl gText_Rom_272793
gText_Rom_272793: @ 0x08272793
	.string "{STR_VAR_1}\p…… うぉぉーん!\nすごく かっこいいよう!\pあ ごめんなさい\nうれしすぎて なみだが……\p……グスン {PLAYER}さん!\nいつも いつも ありがとう ございました!\lぼく {PLAYER}さんの ためにも\lがんばって たたかい つづけます!\pでは {PLAYER}さん!\nこんどは…… どこかで たたかいましょう!$"
	.if (. - gText_Rom_272793) > 0x92
	.error "gText_Rom_272793 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272793) < 0x92
	.space 0x92 - (. - gText_Rom_272793)
	.endif

	@ data/text/apprentice.inc:775 gText_ApprenticePickWinSpeech1
	.globl gText_Rom_272825
gText_Rom_272825: @ 0x08272825
	.string "{PLAYER}せんせい こんにちは!\nぼく きめたい ことが あるの!\pあのね!\nぼく しょうぶに かった とき\lなにか かっこいい セリフを いいたいの!\pせんせい おすすめの\nかっこいい セリフって あるかな?$"
	.if (. - gText_Rom_272825) > 0x67
	.error "gText_Rom_272825 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272825) < 0x67
	.space 0x67 - (. - gText_Rom_272825)
	.endif

	@ data/text/apprentice.inc:778 gText_ApprenticeWinSpeechThanks1
	.globl gText_Rom_27288C
gText_Rom_27288C: @ 0x0827288C
	.string "{STR_VAR_1}\pうわあー いーね!\nじゃあ ボク それで いくね!\pせんせい いままで ありがとう!\nボク これから いろんな ところで\lがんばる ことに する!\pこんど あうときは しょうぶ だよ!$"
	.if (. - gText_Rom_27288C) > 0x60
	.error "gText_Rom_27288C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27288C) < 0x60
	.space 0x60 - (. - gText_Rom_27288C)
	.endif

	@ data/text/apprentice.inc:781 gText_ApprenticePickWinSpeech2
	.globl gText_Rom_2728EC
gText_Rom_2728EC: @ 0x082728EC
	.string "{PLAYER}さん こんにちは!\nポケモンの じゅんびは\pばんぜん なんですけど\nひとつ きに なってるんです\pポケモントレーナーって\nしょうぶに かった ときに かけごえ が\pあると いいかなーって おもうんです\nなにか いいの かんがえて ください!$"
	.if (. - gText_Rom_2728EC) > 0x7b
	.error "gText_Rom_2728EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2728EC) < 0x7b
	.space 0x7b - (. - gText_Rom_2728EC)
	.endif

	@ data/text/apprentice.inc:784 gText_ApprenticeWinSpeechThanks2
	.globl gText_Rom_272967
gText_Rom_272967: @ 0x08272967
	.string "{STR_VAR_1}\p……かっこいいですね!\nそれ つかわせて いただきます!\pじゃあ ぼくは これから\nいろんな ところで しょうぶ してきます!\pいつか {PLAYER}さんと\nしょうぶ する ひが\lくるかも しれませんね!\pでは こんどは しょうぶの ば で\nおあい しましょう!$"
	.if (. - gText_Rom_272967) > 0x82
	.error "gText_Rom_272967 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272967) < 0x82
	.space 0x82 - (. - gText_Rom_272967)
	.endif

	@ data/text/apprentice.inc:787 gText_ApprenticePickWinSpeech3
	.globl gText_Rom_2729E9
gText_Rom_2729E9: @ 0x082729E9
	.string "あっ {PLAYER}さん……!\nあたし ほんと ダメな おんなのこです!\pせっかく……\nせっかく しょうぶに かっても\lことば ひとつ でてこなくって……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます!\lでも あたし どうしても……\pおねがい! です {PLAYER}さん\nかったとき って\lなんて いうべき なんでしょうか……?$"
	.if (. - gText_Rom_2729E9) > 0xa3
	.error "gText_Rom_2729E9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2729E9) < 0xa3
	.space 0xa3 - (. - gText_Rom_2729E9)
	.endif

	@ data/text/apprentice.inc:790 gText_ApprenticeWinSpeechThanks3
	.globl gText_Rom_272A8C
gText_Rom_272A8C: @ 0x08272A8C
	.string "{STR_VAR_1}\pすごいわ……\pあ あたしなんかが\nそんな こと いって いいのか……\lいえ! がんばって みます\p{PLAYER}さん!\pいままで あたしなんかの ために\nありがとう…… ございました……!\lあたし いまから がんばってきます!\pあたしの こと なんて\nすぐに わすれて しまうと おもうけど\lでも どこかで おあい しましょう!$"
	.if (. - gText_Rom_272A8C) > 0xa3
	.error "gText_Rom_272A8C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272A8C) < 0xa3
	.space 0xa3 - (. - gText_Rom_272A8C)
	.endif

	@ data/text/apprentice.inc:793 gText_ApprenticePickWinSpeech4
	.globl gText_Rom_272B2F
gText_Rom_272B2F: @ 0x08272B2F
	.string "あら {PLAYER}{KUN}?\nちょっと きいて ほしいんだけど!\pじぶんでも わかって いるけど\nわたし すこし くちが わるくて……\lしょうぶに かったときに\lなんか えらそうに しちゃうのよね!\pだけど きらわれたく ないから\nわたしに まけた あいてに\lやさしい ことばを かけて あげたいのよ!\pでも ぜんぜん おもいつかなくて!\nあなたが かんがえて くれない?$"
	.if (. - gText_Rom_272B2F) > 0xb5
	.error "gText_Rom_272B2F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272B2F) < 0xb5
	.space 0xb5 - (. - gText_Rom_272B2F)
	.endif

	@ data/text/apprentice.inc:796 gText_ApprenticeWinSpeechThanks4
	.globl gText_Rom_272BE4
gText_Rom_272BE4: @ 0x08272BE4
	.string "{STR_VAR_1}\pわるく ないわね!\nうん それで いくことに するわ!\pじゃあ…… いままで\n{PLAYER}さんに おそわった\lいろいろな ことを むねに\lわたし がんばって くる!\lいろいろと なまいき いって\lごめんなさい!\pつぎに あう ときは しょうぶよ!\nじゃあね!$"
	.if (. - gText_Rom_272BE4) > 0x81
	.error "gText_Rom_272BE4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272BE4) < 0x81
	.space 0x81 - (. - gText_Rom_272BE4)
	.endif

	@ data/text/apprentice.inc:799 gText_ApprenticePickWinSpeech5
	.globl gText_Rom_272C65
gText_Rom_272C65: @ 0x08272C65
	.string "あー いそがしい いそがしい!\nおっと さがしてたよ {PLAYER}{KUN}\lきょうも げんきかい?\pこっちはさー! あいかわらず\nランニング ファイティング マッピングと\lなんで こんなに いそがしいんだ?\pでもさ! いそがしい からって\nしょうぶに かった ときに\lなにも いわないで\lたちさっちゃ しつれいだろ?\pでさ!\nかっこよく たちさる オレを\lえんしゅつする いい ことば ないかな?\l{PLAYER}{KUN} なんか たのむよ!$"
	.if (. - gText_Rom_272C65) > 0xd0
	.error "gText_Rom_272C65 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272C65) < 0xd0
	.space 0xd0 - (. - gText_Rom_272C65)
	.endif

	@ data/text/apprentice.inc:802 gText_ApprenticeWinSpeechThanks5
	.globl gText_Rom_272D35
gText_Rom_272D35: @ 0x08272D35
	.string "{STR_VAR_1}\pオーケー わかった!\nそのぐらい いう じかんは つくれるぜ!\lほんと きみ みたいな\lいい せんせいに であえて よかったぜ!\pオレは これから じかんを つくって\nポケモンしょうぶを してくるよ!\lいままで サンキュー {PLAYER}{KUN}!\pいつか オレと しょうぶ しようぜ!$"
	.if (. - gText_Rom_272D35) > 0x8c
	.error "gText_Rom_272D35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272D35) < 0x8c
	.space 0x8c - (. - gText_Rom_272D35)
	.endif

	@ data/text/apprentice.inc:805 gText_ApprenticePickWinSpeech6
	.globl gText_Rom_272DC1
gText_Rom_272DC1: @ 0x08272DC1
	.string "やったねーっ\n{PLAYER}さんに あえちゃった!\lさっそく そうだんが あるのよ!\pジャーン\nでは さいごの そうだん でーす!\pわたしが しょうぶで かった とき\nかっこよく キメたいと したら\lさあ なんて いえばいい?$"
	.if (. - gText_Rom_272DC1) > 0x6d
	.error "gText_Rom_272DC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272DC1) < 0x6d
	.space 0x6d - (. - gText_Rom_272DC1)
	.endif

	@ data/text/apprentice.inc:808 gText_ApprenticeWinSpeechThanks6
	.globl gText_Rom_272E2E
gText_Rom_272E2E: @ 0x08272E2E
	.string "{STR_VAR_1}\pいっ イイ!\nシブイ! それいただき!\p……ねえ わたし\nそろそろ いちにんまえに なったよね!\pあのね これから いろんなひとと\nたたかって みようと おもうの!\p{PLAYER}さんの アドバイス\nすっごく たすかったよー!\lいつか しょうぶする ときが くるかもね\lいままで ほんと ありがとー!$"
	.if (. - gText_Rom_272E2E) > 0x95
	.error "gText_Rom_272E2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272E2E) < 0x95
	.space 0x95 - (. - gText_Rom_272E2E)
	.endif

	@ data/text/apprentice.inc:811 gText_ApprenticePickWinSpeech7
	.globl gText_Rom_272EC3
gText_Rom_272EC3: @ 0x08272EC3
	.string "まあ {PLAYER}さん\nあえて よかった ですわ……!\pわたくし ポケモンの ほうは\nもう しんぱい ないのです けれど\lわたくし じしんの ほうが……\pその あの ポケモントレーナーさんは\nいつも しょうぶに かったとき\lことばを かけて くださいますね?\pぜひ! わたくしも あれを\nやってみたいのです!\lおねがいです! なにか\lかったときの ことば きめて ください!$"
	.if (. - gText_Rom_272EC3) > 0xb8
	.error "gText_Rom_272EC3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272EC3) < 0xb8
	.space 0xb8 - (. - gText_Rom_272EC3)
	.endif

	@ data/text/apprentice.inc:814 gText_ApprenticeWinSpeechThanks7
	.globl gText_Rom_272F7B
gText_Rom_272F7B: @ 0x08272F7B
	.string "{STR_VAR_1}\pですのね……!\pああ! なんだか わたくし\nうまれかわれる きが しますわ……!\lさっそく そのことば つかってみますわ!\pそれでは ここで おわかれです……\n{PLAYER}さんの ごしどう\lわたくし けっして わすれずに\lみなさまと たたかって まいります!\pまた いずれ……\nごきげんよう!$"
	.if (. - gText_Rom_272F7B) > 0x92
	.error "gText_Rom_272F7B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272F7B) < 0x92
	.space 0x92 - (. - gText_Rom_272F7B)
	.endif

	@ data/text/apprentice.inc:817 gText_ApprenticePickWinSpeech8
	.globl gText_Rom_27300D
gText_Rom_27300D: @ 0x0827300D
	.string "キャァー!\n{PLAYER}さんを はっけんーっ!\lかっ かんげきっ……!\pあのっ そうだんが あります!\pこのあいだ ポケモンしょうぶに\nかったは いいんですけど!\lわたし かんげき しすぎちゃって\lなんにも いえなく なっちゃって……!\pそこで {PLAYER}さん!\nわたしが かった ときの きめぜりふ!\lかんがえて ほしいのですっ!$"
	.if (. - gText_Rom_27300D) > 0xa0
	.error "gText_Rom_27300D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27300D) < 0xa0
	.space 0xa0 - (. - gText_Rom_27300D)
	.endif

	@ data/text/apprentice.inc:820 gText_ApprenticeWinSpeechThanks8
	.globl gText_Rom_2730AD
gText_Rom_2730AD: @ 0x082730AD
	.string "{STR_VAR_1}\pう うわああぁぁあ!\nこの ことばを わたしが!\lかっ かんげき………っ!!\pあああ ありがとう ございますっ!\nもう おもいのこす ことは ありませんっ!\lわたし これから たびだって\lいろいろな ひとと しょうぶ してみます!\pなにもかも {PLAYER}さんの\nおかげで あります!\lほんとうに ありがとう ございますっ!\pそれでは それでは\nいつか しょうぶの ばで あいましょう!$"
	.if (. - gText_Rom_2730AD) > 0xc1
	.error "gText_Rom_2730AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2730AD) < 0xc1
	.space 0xc1 - (. - gText_Rom_2730AD)
	.endif

	@ data/text/apprentice.inc:823 gText_ApprenticePickWinSpeech9
	.globl gText_Rom_27316E
gText_Rom_27316E: @ 0x0827316E
	.string "ハッローウ\nハロウ {PLAYER}{KUN}!\pおじさん そろそろ あちこちで\nしょうぶが したく なって きたよ!\lそこで そのまえに きみに\lアドバイスを もらいたいんだ プリーズ!\pおじさんが もし しょうぶに かったら\nあいての トレーナーに むかって\lじまん するような ことばって ないかな?$"
	.if (. - gText_Rom_27316E) > 0x91
	.error "gText_Rom_27316E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27316E) < 0x91
	.space 0x91 - (. - gText_Rom_27316E)
	.endif

	@ data/text/apprentice.inc:827 gText_ApprenticeWinSpeechThanks9
	.globl gText_Rom_2731FF
gText_Rom_2731FF: @ 0x082731FF
	.string "{STR_VAR_1}\pあはぁ それいいね\nオーケイ オーケイ!\lおじさん ババーっと いってみるよ!\pそれじゃあ おわかれだ!\nいままで いろいろ ありがとうね\lいつか しょうぶも してくれよ!\pアディオース!$"
	.if (. - gText_Rom_2731FF) > 0x62
	.error "gText_Rom_2731FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2731FF) < 0x62
	.space 0x62 - (. - gText_Rom_2731FF)
	.endif

	@ data/text/apprentice.inc:830 gText_ApprenticePickWinSpeech10
	.globl gText_Rom_273261
gText_Rom_273261: @ 0x08273261
	.string "{PLAYER}{KUN} たいへんだーっ!\pおいら しょうぶに かつと\n1じかんも えばっちゃうんだ!\p……なんてね ウソなんだよ! うっはは\pじつは おいら ひとと はなし するの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらが しょうぶに かったときに\lいう ことばを\lししょうが きめて くれない かな?$"
	.if (. - gText_Rom_273261) > 0x9b
	.error "gText_Rom_273261 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273261) < 0x9b
	.space 0x9b - (. - gText_Rom_273261)
	.endif

	@ data/text/apprentice.inc:833 gText_ApprenticeWinSpeechThanks10
	.globl gText_Rom_2732FC
gText_Rom_2732FC: @ 0x082732FC
	.string "{STR_VAR_1}\pこう いえば いいのね!\nじゃあ それだけは やめておこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pずっとずっと ありがとう ししょう!\nおいら やっと トレーナーって もんが\lわかった きがするよ!\pいまから いろんな やつと\nしょうぶして かって くるぞ!\lししょう とも しょうぶ するかもな!\pそれじゃな!\nさらばだ ししょう!$"
	.if (. - gText_Rom_2732FC) > 0xbd
	.error "gText_Rom_2732FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2732FC) < 0xbd
	.space 0xbd - (. - gText_Rom_2732FC)
	.endif

	@ data/text/apprentice.inc:836 gText_ApprenticePickWinSpeech11
	.globl gText_Rom_2733B9
gText_Rom_2733B9: @ 0x082733B9
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし さいごの わしの そうだん\nいってみようぜー!\lことばに かんする そうだんだよ!\pわしが もし しょうぶで かったら\nどういう ことばで キメたら いいかな?$"
	.if (. - gText_Rom_2733B9) > 0x7d
	.error "gText_Rom_2733B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2733B9) < 0x7d
	.space 0x7d - (. - gText_Rom_2733B9)
	.endif

	@ data/text/apprentice.inc:839 gText_ApprenticeWinSpeechThanks11
	.globl gText_Rom_273436
gText_Rom_273436: @ 0x08273436
	.string "{STR_VAR_1}\pなるほどーっ! ようよう!\nそんなら ノリノリで それ つかうぜ!\pそろそろ わしも すだつと するか\nノリノリで たたかい まくるぜ!\lいろいろと ありがとうな!\pお・つ・か・れ・さ・ま!\nはーい おつかれさま ごきげんよう!$"
	.if (. - gText_Rom_273436) > 0x76
	.error "gText_Rom_273436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273436) < 0x76
	.space 0x76 - (. - gText_Rom_273436)
	.endif

	@ data/text/apprentice.inc:842 gText_ApprenticePickWinSpeech12
	.globl gText_Rom_2734AC
gText_Rom_2734AC: @ 0x082734AC
	.string "オーイェッ {PLAYER}さあん!\nどうする オレ? きょうも きいてみる?\lってもう きこうとしてる!?\pそもそも {PLAYER}さんって\nいつも きいてる!? きいてる!!\lじゃ そうだんに のってェ!\pおれが かった ときに さけぶ\nカッコイイ キメキメの\lすんごい セリフ……\lなんか かんがえてエエェ!$"
	.if (. - gText_Rom_2734AC) > 0x93
	.error "gText_Rom_2734AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2734AC) < 0x93
	.space 0x93 - (. - gText_Rom_2734AC)
	.endif

	@ data/text/apprentice.inc:845 gText_ApprenticeWinSpeechThanks12
	.globl gText_Rom_27353F
gText_Rom_27353F: @ 0x0827353F
	.string "{STR_VAR_1}\pオーラーイ オーライ!\nじゃ さっそく それでいくぜェ!\pってオレ もう\nきくことが なくなったぜ!\lしかたねー これで おわかれする!?\lとかいって どこかで ちゃっかり\lまた あえちゃったり するかも!?\pまー とりあえずは おわかれだぜ!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lじゃあな {PLAYER}さん! スキだぜェ!$"
	.if (. - gText_Rom_27353F) > 0xa7
	.error "gText_Rom_27353F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27353F) < 0xa7
	.space 0xa7 - (. - gText_Rom_27353F)
	.endif

	@ data/text/apprentice.inc:848 gText_ApprenticePickWinSpeech13
	.globl gText_Rom_2735E6
gText_Rom_2735E6: @ 0x082735E6
	.string "{PLAYER}{KUN} おれは\nもう ダメだよ……\lはなみずが とまらなくってさ……\pしょうぶに かった ときに\nなにか かっこいいこと いおうとして\lあたまで かんがえてたら……\pわれながら ジーンと なけちゃって\nはなみずが でたんだよね きっと!\lというわけ だからさ\l{PLAYER}{KUN} かんがえてよ!\pしょうぶに かったら\nおれ なんて いえば いいかな?$"
	.if (. - gText_Rom_2735E6) > 0xac
	.error "gText_Rom_2735E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2735E6) < 0xac
	.space 0xac - (. - gText_Rom_2735E6)
	.endif

	@ data/text/apprentice.inc:851 gText_ApprenticeWinSpeechThanks13
	.globl gText_Rom_273692
gText_Rom_273692: @ 0x08273692
	.string "{STR_VAR_1}\p…… …… ……いいよ\nそれ いいよ!\lダメだ なみだが また とまらないよ\pでも なみだと はなみずを こらえて\nそのセリフ つかわせて もらうよ!\pおれは もう {PLAYER}{KUN}に\nききたい ことは なくなった!\lこれからは ライバルだよ!\pん いままで ありがとうな!$"
	.if (. - gText_Rom_273692) > 0x89
	.error "gText_Rom_273692 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273692) < 0x89
	.space 0x89 - (. - gText_Rom_273692)
	.endif

	@ data/text/apprentice.inc:854 gText_ApprenticePickWinSpeech14
	.globl gText_Rom_27371B
gText_Rom_27371B: @ 0x0827371B
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pまた…… そうだん させて くれよ\nこ これで さいごに するからさ\pあのさ はずかしいん だけどさ\nもし もし しょうぶに かったら!\lワシは なんて いったら いいんだろう……?$"
	.if (. - gText_Rom_27371B) > 0x85
	.error "gText_Rom_27371B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27371B) < 0x85
	.space 0x85 - (. - gText_Rom_27371B)
	.endif

	@ data/text/apprentice.inc:857 gText_ApprenticeWinSpeechThanks14
	.globl gText_Rom_2737A0
gText_Rom_2737A0: @ 0x082737A0
	.string "{STR_VAR_1}\pよ よし それ\nいって みるよ!\lは はずかしいな いえるかな……\pありがとう {PLAYER}{KUN}\nさようならだ!\l{PLAYER}{KUN}に いわれた こと\lぜんぶ まもって ワシ がんばるよ!$"
	.if (. - gText_Rom_2737A0) > 0x59
	.error "gText_Rom_2737A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2737A0) < 0x59
	.space 0x59 - (. - gText_Rom_2737A0)
	.endif

	@ data/text/apprentice.inc:860 gText_ApprenticePickWinSpeech15
	.globl gText_Rom_2737F9
gText_Rom_2737F9: @ 0x082737F9
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\l{PLAYER}{KUN} ぬいぐるみ では?\pいや! いやいやいやいや!\nすまない ほんものなら いいんだ\lまあ そう おこらないで くれ!\lそれでもって じょげんを おねがいする\lことばに かんする ことだ!\pもし わたしが しょうぶに かったら\nぜんたい なんと いえば いいかね?$"
	.if (. - gText_Rom_2737F9) > 0xa4
	.error "gText_Rom_2737F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2737F9) < 0xa4
	.space 0xa4 - (. - gText_Rom_2737F9)
	.endif

	@ data/text/apprentice.inc:863 gText_ApprenticeWinSpeechThanks15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_27389D
gText_Rom_27389D: @ 0x0827389D
	.string "{STR_VAR_1}\p…… …… ……\nしょうぶに かったら\p{STR_VAR_1}\p…… ほんき なのかね?\pいや ほんき なら いいんだ!\nどうも ありがとう\lこんな わたしでも いつか\lつかえる ときが くれば いいな\pでは そろそろ\nほしい じょげんも なくなってきた\l{PLAYER}{KUN}とは おわかれして\lひとりで がんばって みようかと おもう\pでは ありがとう!\nうたがって すまなかった!$"
	.if (. - gText_Rom_27389D) != 0xb5
	.error "gText_Rom_27389D must retain its original byte length"
	.endif
	.globl gText_Rom_27394D
	.set gText_Rom_27394D, gText_Rom_27389D + 0xb0

	@ src/battle_dome.c:861 battle_dome_line_861
	.globl gText_Rom_273952
gText_Rom_273952: @ 0x08273952
	.string "こんたいかいの ゆうしょうこうほ ナンバー1!$"
	.if (. - gText_Rom_273952) > 0x18
	.error "gText_Rom_273952 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273952) < 0x18
	.space 0x18 - (. - gText_Rom_273952)
	.endif

	@ src/battle_dome.c:862 battle_dome_line_862
	.globl gText_Rom_27396A
gText_Rom_27396A: @ 0x0827396A
	.string "けっしょうまでは かくじつと いわれる チーム。$"
	.if (. - gText_Rom_27396A) > 0x19
	.error "gText_Rom_27396A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27396A) < 0x19
	.space 0x19 - (. - gText_Rom_27396A)
	.endif

	@ src/battle_dome.c:863 battle_dome_line_863
	.globl gText_Rom_273983
gText_Rom_273983: @ 0x08273983
	.string "ベスト3に はいる ちからを もった チーム。$"
	.if (. - gText_Rom_273983) > 0x18
	.error "gText_Rom_273983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273983) < 0x18
	.space 0x18 - (. - gText_Rom_273983)
	.endif

	@ src/battle_dome.c:864 battle_dome_line_864
	.globl gText_Rom_27399B
gText_Rom_27399B: @ 0x0827399B
	.string "こんたいかい ゆうしょうこうほの 1チーム。$"
	.if (. - gText_Rom_27399B) > 0x17
	.error "gText_Rom_27399B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27399B) < 0x17
	.space 0x17 - (. - gText_Rom_27399B)
	.endif

	@ src/battle_dome.c:865 battle_dome_line_865
	.globl gText_Rom_2739B2
gText_Rom_2739B2: @ 0x082739B2
	.string "トップクラスの ちからを そなえた チーム。$"
	.if (. - gText_Rom_2739B2) > 0x17
	.error "gText_Rom_2739B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739B2) < 0x17
	.space 0x17 - (. - gText_Rom_2739B2)
	.endif

	@ src/battle_dome.c:866 battle_dome_line_866
	.globl gText_Rom_2739C9
gText_Rom_2739C9: @ 0x082739C9
	.string "こんたいかい ちゅうもくの ダークホース!$"
	.if (. - gText_Rom_2739C9) > 0x16
	.error "gText_Rom_2739C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739C9) < 0x16
	.space 0x16 - (. - gText_Rom_2739C9)
	.endif

	@ src/battle_dome.c:867 battle_dome_line_867
	.globl gText_Rom_2739DF
gText_Rom_2739DF: @ 0x082739DF
	.string "へいきんより すこし ちからが うえの チーム。$"
	.if (. - gText_Rom_2739DF) > 0x19
	.error "gText_Rom_2739DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739DF) < 0x19
	.space 0x19 - (. - gText_Rom_2739DF)
	.endif

	@ src/battle_dome.c:868 battle_dome_line_868
	.globl gText_Rom_2739F8
gText_Rom_2739F8: @ 0x082739F8
	.string "こんたいかいの へいきんてきな チーム。$"
	.if (. - gText_Rom_2739F8) > 0x15
	.error "gText_Rom_2739F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2739F8) < 0x15
	.space 0x15 - (. - gText_Rom_2739F8)
	.endif

	@ src/battle_dome.c:869 battle_dome_line_869
	.globl gText_Rom_273A0D
gText_Rom_273A0D: @ 0x08273A0D
	.string "へいきん レベルの ちからを もった チーム。$"
	.if (. - gText_Rom_273A0D) > 0x18
	.error "gText_Rom_273A0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A0D) < 0x18
	.space 0x18 - (. - gText_Rom_273A0D)
	.endif

	@ src/battle_dome.c:870 battle_dome_line_870
	.globl gText_Rom_273A25
gText_Rom_273A25: @ 0x08273A25
	.string "へいきんより やや ちからが おちる チーム。$"
	.if (. - gText_Rom_273A25) > 0x18
	.error "gText_Rom_273A25 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A25) < 0x18
	.space 0x18 - (. - gText_Rom_273A25)
	.endif

	@ src/battle_dome.c:871 battle_dome_line_871
	.globl gText_Rom_273A3D
gText_Rom_273A3D: @ 0x08273A3D
	.string "まず 1しょうが もくひょうと なる チーム。$"
	.if (. - gText_Rom_273A3D) > 0x18
	.error "gText_Rom_273A3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A3D) < 0x18
	.space 0x18 - (. - gText_Rom_273A3D)
	.endif

	@ src/battle_dome.c:872 battle_dome_line_872
	.globl gText_Rom_273A55
gText_Rom_273A55: @ 0x08273A55
	.string "1しょう できれば じょうじょうの チーム。$"
	.if (. - gText_Rom_273A55) > 0x17
	.error "gText_Rom_273A55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A55) < 0x17
	.space 0x17 - (. - gText_Rom_273A55)
	.endif

	@ src/battle_dome.c:873 battle_dome_line_873
	.globl gText_Rom_273A6C
gText_Rom_273A6C: @ 0x08273A6C
	.string "ぜんたいの なかで したの レベルの チーム。$"
	.if (. - gText_Rom_273A6C) > 0x18
	.error "gText_Rom_273A6C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A6C) < 0x18
	.space 0x18 - (. - gText_Rom_273A6C)
	.endif

	@ src/battle_dome.c:874 battle_dome_line_874
	.globl gText_Rom_273A84
gText_Rom_273A84: @ 0x08273A84
	.string "じつりょくは かなり したの レベルの チーム。$"
	.if (. - gText_Rom_273A84) > 0x19
	.error "gText_Rom_273A84 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A84) < 0x19
	.space 0x19 - (. - gText_Rom_273A84)
	.endif

	@ src/battle_dome.c:875 battle_dome_line_875
	.globl gText_Rom_273A9D
gText_Rom_273A9D: @ 0x08273A9D
	.string "ゆうしょうは かなり むずかしい チーム。$"
	.if (. - gText_Rom_273A9D) > 0x16
	.error "gText_Rom_273A9D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273A9D) < 0x16
	.space 0x16 - (. - gText_Rom_273A9D)
	.endif

	@ src/battle_dome.c:876 battle_dome_line_876
	.globl gText_Rom_273AB3
gText_Rom_273AB3: @ 0x08273AB3
	.string "ゆうしょうから もっとも とおい チーム。$"
	.if (. - gText_Rom_273AB3) > 0x16
	.error "gText_Rom_273AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AB3) < 0x16
	.space 0x16 - (. - gText_Rom_273AB3)
	.endif

	@ src/battle_dome.c:877 battle_dome_line_877
	.globl gText_Rom_273AC9
gText_Rom_273AC9: @ 0x08273AC9
	.string "かんぜん むてきの スーパースター!!$"
	.if (. - gText_Rom_273AC9) > 0x14
	.error "gText_Rom_273AC9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AC9) < 0x14
	.space 0x14 - (. - gText_Rom_273AC9)
	.endif

	@ src/battle_dome.c:883 battle_dome_line_883
	.globl gText_Rom_273ADD
gText_Rom_273ADD: @ 0x08273ADD
	.string "ときには はめつ かくごで たたかいを いどむ。$"
	.if (. - gText_Rom_273ADD) > 0x19
	.error "gText_Rom_273ADD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273ADD) < 0x19
	.space 0x19 - (. - gText_Rom_273ADD)
	.endif

	@ src/battle_dome.c:884 battle_dome_line_884
	.globl gText_Rom_273AF6
gText_Rom_273AF6: @ 0x08273AF6
	.string "ちょうきせんでの ねばりが とても とくい。$"
	.if (. - gText_Rom_273AF6) > 0x17
	.error "gText_Rom_273AF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273AF6) < 0x17
	.space 0x17 - (. - gText_Rom_273AF6)
	.endif

	@ src/battle_dome.c:885 battle_dome_line_885
	.globl gText_Rom_273B0D
gText_Rom_273B0D: @ 0x08273B0D
	.string "あいてに おうじて たさいな わざで たたかう。$"
	.if (. - gText_Rom_273B0D) > 0x19
	.error "gText_Rom_273B0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B0D) < 0x19
	.space 0x19 - (. - gText_Rom_273B0D)
	.endif

	@ src/battle_dome.c:886 battle_dome_line_886
	.globl gText_Rom_273B26
gText_Rom_273B26: @ 0x08273B26
	.string "かちパターンを もっていて はまると つよい。$"
	.if (. - gText_Rom_273B26) > 0x18
	.error "gText_Rom_273B26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B26) < 0x18
	.space 0x18 - (. - gText_Rom_273B26)
	.endif

	@ src/battle_dome.c:887 battle_dome_line_887
	.globl gText_Rom_273B3E
gText_Rom_273B3E: @ 0x08273B3E
	.string "とても めずらしい わざを ときどき つかう。$"
	.if (. - gText_Rom_273B3E) > 0x18
	.error "gText_Rom_273B3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B3E) < 0x18
	.space 0x18 - (. - gText_Rom_273B3E)
	.endif

	@ src/battle_dome.c:888 battle_dome_line_888
	.globl gText_Rom_273B56
gText_Rom_273B56: @ 0x08273B56
	.string "いひょうを つく わざで たたかいを みだす。$"
	.if (. - gText_Rom_273B56) > 0x18
	.error "gText_Rom_273B56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B56) < 0x18
	.space 0x18 - (. - gText_Rom_273B56)
	.endif

	@ src/battle_dome.c:889 battle_dome_line_889
	.globl gText_Rom_273B6E
gText_Rom_273B6E: @ 0x08273B6E
	.string "つねに たいりょくに きを くばって たたかう。$"
	.if (. - gText_Rom_273B6E) > 0x19
	.error "gText_Rom_273B6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B6E) < 0x19
	.space 0x19 - (. - gText_Rom_273B6E)
	.endif

	@ src/battle_dome.c:890 battle_dome_line_890
	.globl gText_Rom_273B87
gText_Rom_273B87: @ 0x08273B87
	.string "ちからを ためて いっきに せめるのが とくい。$"
	.if (. - gText_Rom_273B87) > 0x19
	.error "gText_Rom_273B87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273B87) < 0x19
	.space 0x19 - (. - gText_Rom_273B87)
	.endif

	@ src/battle_dome.c:891 battle_dome_line_891
	.globl gText_Rom_273BA0
gText_Rom_273BA0: @ 0x08273BA0
	.string "あいての ちからを おとすのが とくい。$"
	.if (. - gText_Rom_273BA0) > 0x15
	.error "gText_Rom_273BA0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BA0) < 0x15
	.space 0x15 - (. - gText_Rom_273BA0)
	.endif

	@ src/battle_dome.c:892 battle_dome_line_892
	.globl gText_Rom_273BB5
gText_Rom_273BB5: @ 0x08273BB5
	.string "うんに まかせた たたかいかたを このむ。$"
	.if (. - gText_Rom_273BB5) > 0x16
	.error "gText_Rom_273BB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BB5) < 0x16
	.space 0x16 - (. - gText_Rom_273BB5)
	.endif

	@ src/battle_dome.c:893 battle_dome_line_893
	.globl gText_Rom_273BCB
gText_Rom_273BCB: @ 0x08273BCB
	.string "おうじゃの ふうかく ただよう せめを する。$"
	.if (. - gText_Rom_273BCB) > 0x18
	.error "gText_Rom_273BCB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BCB) < 0x18
	.space 0x18 - (. - gText_Rom_273BCB)
	.endif

	@ src/battle_dome.c:894 battle_dome_line_894
	.globl gText_Rom_273BE3
gText_Rom_273BE3: @ 0x08273BE3
	.string "PPの すくない おおわざで しょうぶする。$"
	.if (. - gText_Rom_273BE3) > 0x17
	.error "gText_Rom_273BE3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BE3) < 0x17
	.space 0x17 - (. - gText_Rom_273BE3)
	.endif

	@ src/battle_dome.c:895 battle_dome_line_895
	.globl gText_Rom_273BFA
gText_Rom_273BFA: @ 0x08273BFA
	.string "よわらせてから こうげきを するのが とくい。$"
	.if (. - gText_Rom_273BFA) > 0x18
	.error "gText_Rom_273BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BFA) < 0x18
	.space 0x18 - (. - gText_Rom_273BFA)
	.endif

	@ src/battle_dome.c:896 battle_dome_line_896
	.globl gText_Rom_273C12
gText_Rom_273C12: @ 0x08273C12
	.string "あらゆる こうげきに たえながら たたかう。$"
	.if (. - gText_Rom_273C12) > 0x17
	.error "gText_Rom_273C12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C12) < 0x17
	.space 0x17 - (. - gText_Rom_273C12)
	.endif

	@ src/battle_dome.c:897 battle_dome_line_897
	.globl gText_Rom_273C29
gText_Rom_273C29: @ 0x08273C29
	.string "あいての こころを かきみだすのが とくい。$"
	.if (. - gText_Rom_273C29) > 0x17
	.error "gText_Rom_273C29 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C29) < 0x17
	.space 0x17 - (. - gText_Rom_273C29)
	.endif

	@ src/battle_dome.c:898 battle_dome_line_898
	.globl gText_Rom_273C40
gText_Rom_273C40: @ 0x08273C40
	.string "つよくて あつかいやすい わざを つかう。$"
	.if (. - gText_Rom_273C40) > 0x16
	.error "gText_Rom_273C40 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C40) < 0x16
	.space 0x16 - (. - gText_Rom_273C40)
	.endif

	@ src/battle_dome.c:899 battle_dome_line_899
	.globl gText_Rom_273C56
gText_Rom_273C56: @ 0x08273C56
	.string "きょうりょくな わざで どんどん おしまくる。$"
	.if (. - gText_Rom_273C56) > 0x18
	.error "gText_Rom_273C56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C56) < 0x18
	.space 0x18 - (. - gText_Rom_273C56)
	.endif

	@ src/battle_dome.c:900 battle_dome_line_900
	.globl gText_Rom_273C6E
gText_Rom_273C6E: @ 0x08273C6E
	.string "こうげきを うまく かわしながら たたかう。$"
	.if (. - gText_Rom_273C6E) > 0x17
	.error "gText_Rom_273C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C6E) < 0x17
	.space 0x17 - (. - gText_Rom_273C6E)
	.endif

	@ src/battle_dome.c:901 battle_dome_line_901
	.globl gText_Rom_273C85
gText_Rom_273C85: @ 0x08273C85
	.string "あいてが いやがる たたかいが とくい。$"
	.if (. - gText_Rom_273C85) > 0x15
	.error "gText_Rom_273C85 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C85) < 0x15
	.space 0x15 - (. - gText_Rom_273C85)
	.endif

	@ src/battle_dome.c:902 battle_dome_line_902
	.globl gText_Rom_273C9A
gText_Rom_273C9A: @ 0x08273C9A
	.string "にんきの ある わざを たくさん つかう。$"
	.if (. - gText_Rom_273C9A) > 0x16
	.error "gText_Rom_273C9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273C9A) < 0x16
	.space 0x16 - (. - gText_Rom_273C9A)
	.endif

	@ src/battle_dome.c:903 battle_dome_line_903
	.globl gText_Rom_273CB0
gText_Rom_273CB0: @ 0x08273CB0
	.string "きょうりょくな コンボになる わざを もつ。$"
	.if (. - gText_Rom_273CB0) > 0x17
	.error "gText_Rom_273CB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CB0) < 0x17
	.space 0x17 - (. - gText_Rom_273CB0)
	.endif

	@ src/battle_dome.c:904 battle_dome_line_904
	.globl gText_Rom_273CC7
gText_Rom_273CC7: @ 0x08273CC7
	.string "てがたい わざで きっちりと こうげきする。$"
	.if (. - gText_Rom_273CC7) > 0x17
	.error "gText_Rom_273CC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CC7) < 0x17
	.space 0x17 - (. - gText_Rom_273CC7)
	.endif

	@ src/battle_dome.c:905 battle_dome_line_905
	.globl gText_Rom_273CDE
gText_Rom_273CDE: @ 0x08273CDE
	.string "はでな わざを つかって どんどん せめる。$"
	.if (. - gText_Rom_273CDE) > 0x17
	.error "gText_Rom_273CDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CDE) < 0x17
	.space 0x17 - (. - gText_Rom_273CDE)
	.endif

	@ src/battle_dome.c:906 battle_dome_line_906
	.globl gText_Rom_273CF5
gText_Rom_273CF5: @ 0x08273CF5
	.string "まもりより とにかく せめを だいじに する。$"
	.if (. - gText_Rom_273CF5) > 0x18
	.error "gText_Rom_273CF5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273CF5) < 0x18
	.space 0x18 - (. - gText_Rom_273CF5)
	.endif

	@ src/battle_dome.c:907 battle_dome_line_907
	.globl gText_Rom_273D0D
gText_Rom_273D0D: @ 0x08273D0D
	.string "せめるより まもりを だいじに する。$"
	.if (. - gText_Rom_273D0D) > 0x14
	.error "gText_Rom_273D0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D0D) < 0x14
	.space 0x14 - (. - gText_Rom_273D0D)
	.endif

	@ src/battle_dome.c:908 battle_dome_line_908
	.globl gText_Rom_273D21
gText_Rom_273D21: @ 0x08273D21
	.string "つよいわざで しょうぶの しかけが はやい。$"
	.if (. - gText_Rom_273D21) > 0x17
	.error "gText_Rom_273D21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D21) < 0x17
	.space 0x17 - (. - gText_Rom_273D21)
	.endif

	@ src/battle_dome.c:909 battle_dome_line_909
	.globl gText_Rom_273D38
gText_Rom_273D38: @ 0x08273D38
	.string "ついかこうかが ある わざを よく つかう。$"
	.if (. - gText_Rom_273D38) > 0x17
	.error "gText_Rom_273D38 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D38) < 0x17
	.space 0x17 - (. - gText_Rom_273D38)
	.endif

	@ src/battle_dome.c:910 battle_dome_line_910
	.globl gText_Rom_273D4F
gText_Rom_273D4F: @ 0x08273D4F
	.string "バランスよく いろいろな わざで たちむかう。$"
	.if (. - gText_Rom_273D4F) > 0x18
	.error "gText_Rom_273D4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D4F) < 0x18
	.space 0x18 - (. - gText_Rom_273D4F)
	.endif

	@ src/battle_dome.c:911 battle_dome_line_911
	.globl gText_Rom_273D67
gText_Rom_273D67: @ 0x08273D67
	.string "ダミーメッセージ1です。$"
	.if (. - gText_Rom_273D67) > 0xd
	.error "gText_Rom_273D67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D67) < 0xd
	.space 0xd - (. - gText_Rom_273D67)
	.endif

	@ src/battle_dome.c:912 battle_dome_line_912
	.globl gText_Rom_273D74
gText_Rom_273D74: @ 0x08273D74
	.string "ダミーメッセージ2です。$"
	.if (. - gText_Rom_273D74) > 0xd
	.error "gText_Rom_273D74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D74) < 0xd
	.space 0xd - (. - gText_Rom_273D74)
	.endif

	@ src/battle_dome.c:913 battle_dome_line_913
	.globl gText_Rom_273D81
gText_Rom_273D81: @ 0x08273D81
	.string "ダミーメッセージ3です。$"
	.if (. - gText_Rom_273D81) > 0xd
	.error "gText_Rom_273D81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D81) < 0xd
	.space 0xd - (. - gText_Rom_273D81)
	.endif

	@ src/battle_dome.c:914 battle_dome_line_914
	.globl gText_Rom_273D8E
gText_Rom_273D8E: @ 0x08273D8E
	.string "ダミーメッセージ4です。$"
	.if (. - gText_Rom_273D8E) > 0xd
	.error "gText_Rom_273D8E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273D8E) < 0xd
	.space 0xd - (. - gText_Rom_273D8E)
	.endif

	@ src/battle_dome.c:920 battle_dome_line_920
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273D9B
gText_Rom_273D9B: @ 0x08273D9B
	.string "HPと こうげきに ちからを いれている。$"
	.if (. - gText_Rom_273D9B) != 0x16
	.error "gText_Rom_273D9B must retain its original byte length"
	.endif
	.globl gText_Rom_273D9F
	.set gText_Rom_273D9F, gText_Rom_273D9B + 0x4

	@ src/battle_dome.c:921 battle_dome_line_921
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DB1
gText_Rom_273DB1: @ 0x08273DB1
	.string "HPと ぼうぎょに ちからを いれている。$"
	.if (. - gText_Rom_273DB1) != 0x16
	.error "gText_Rom_273DB1 must retain its original byte length"
	.endif
	.globl gText_Rom_273DB5
	.set gText_Rom_273DB5, gText_Rom_273DB1 + 0x4

	@ src/battle_dome.c:922 battle_dome_line_922
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DC7
gText_Rom_273DC7: @ 0x08273DC7
	.string "HPと すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273DC7) != 0x16
	.error "gText_Rom_273DC7 must retain its original byte length"
	.endif
	.globl gText_Rom_273DCB
	.set gText_Rom_273DCB, gText_Rom_273DC7 + 0x4

	@ src/battle_dome.c:923 battle_dome_line_923
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DDD
gText_Rom_273DDD: @ 0x08273DDD
	.string "HPと とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273DDD) != 0x16
	.error "gText_Rom_273DDD must retain its original byte length"
	.endif
	.globl gText_Rom_273DE1
	.set gText_Rom_273DE1, gText_Rom_273DDD + 0x4

	@ src/battle_dome.c:924 battle_dome_line_924
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273DF3
gText_Rom_273DF3: @ 0x08273DF3
	.string "HPと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273DF3) != 0x16
	.error "gText_Rom_273DF3 must retain its original byte length"
	.endif
	.globl gText_Rom_273DF7
	.set gText_Rom_273DF7, gText_Rom_273DF3 + 0x4

	@ src/battle_dome.c:925 battle_dome_line_925
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E09
gText_Rom_273E09: @ 0x08273E09
	.string "こうげきと ぼうぎょに ちからを いれている。$"
	.if (. - gText_Rom_273E09) != 0x18
	.error "gText_Rom_273E09 must retain its original byte length"
	.endif
	.globl gText_Rom_273E0F
	.set gText_Rom_273E0F, gText_Rom_273E09 + 0x6

	@ src/battle_dome.c:926 battle_dome_line_926
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E21
gText_Rom_273E21: @ 0x08273E21
	.string "こうげきと すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273E21) != 0x18
	.error "gText_Rom_273E21 must retain its original byte length"
	.endif
	.globl gText_Rom_273E27
	.set gText_Rom_273E27, gText_Rom_273E21 + 0x6

	@ src/battle_dome.c:927 battle_dome_line_927
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E39
gText_Rom_273E39: @ 0x08273E39
	.string "こうげきと とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273E39) != 0x18
	.error "gText_Rom_273E39 must retain its original byte length"
	.endif
	.globl gText_Rom_273E3F
	.set gText_Rom_273E3F, gText_Rom_273E39 + 0x6

	@ src/battle_dome.c:928 battle_dome_line_928
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E51
gText_Rom_273E51: @ 0x08273E51
	.string "こうげきと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273E51) != 0x18
	.error "gText_Rom_273E51 must retain its original byte length"
	.endif
	.globl gText_Rom_273E57
	.set gText_Rom_273E57, gText_Rom_273E51 + 0x6

	@ src/battle_dome.c:929 battle_dome_line_929
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E69
gText_Rom_273E69: @ 0x08273E69
	.string "ぼうぎょと すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273E69) != 0x18
	.error "gText_Rom_273E69 must retain its original byte length"
	.endif
	.globl gText_Rom_273E6F
	.set gText_Rom_273E6F, gText_Rom_273E69 + 0x6

	@ src/battle_dome.c:930 battle_dome_line_930
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E81
gText_Rom_273E81: @ 0x08273E81
	.string "ぼうぎょと とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273E81) != 0x18
	.error "gText_Rom_273E81 must retain its original byte length"
	.endif
	.globl gText_Rom_273E87
	.set gText_Rom_273E87, gText_Rom_273E81 + 0x6

	@ src/battle_dome.c:931 battle_dome_line_931
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273E99
gText_Rom_273E99: @ 0x08273E99
	.string "ぼうぎょと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273E99) != 0x18
	.error "gText_Rom_273E99 must retain its original byte length"
	.endif
	.globl gText_Rom_273E9F
	.set gText_Rom_273E9F, gText_Rom_273E99 + 0x6

	@ src/battle_dome.c:932 battle_dome_line_932
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EB1
gText_Rom_273EB1: @ 0x08273EB1
	.string "すばやさと とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273EB1) != 0x18
	.error "gText_Rom_273EB1 must retain its original byte length"
	.endif
	.globl gText_Rom_273EB7
	.set gText_Rom_273EB7, gText_Rom_273EB1 + 0x6

	@ src/battle_dome.c:933 battle_dome_line_933
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EC9
gText_Rom_273EC9: @ 0x08273EC9
	.string "すばやさと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273EC9) != 0x18
	.error "gText_Rom_273EC9 must retain its original byte length"
	.endif
	.globl gText_Rom_273ECF
	.set gText_Rom_273ECF, gText_Rom_273EC9 + 0x6

	@ src/battle_dome.c:934 battle_dome_line_934
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_273EE1
gText_Rom_273EE1: @ 0x08273EE1
	.string "とくこうと とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273EE1) != 0x18
	.error "gText_Rom_273EE1 must retain its original byte length"
	.endif
	.globl gText_Rom_273EE7
	.set gText_Rom_273EE7, gText_Rom_273EE1 + 0x6

	@ src/battle_dome.c:935 battle_dome_line_935
	.globl gText_Rom_273EF9
gText_Rom_273EF9: @ 0x08273EF9
	.string "HPに ちからを いれている。$"
	.if (. - gText_Rom_273EF9) > 0x10
	.error "gText_Rom_273EF9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273EF9) < 0x10
	.space 0x10 - (. - gText_Rom_273EF9)
	.endif

	@ src/battle_dome.c:936 battle_dome_line_936
	.globl gText_Rom_273F09
gText_Rom_273F09: @ 0x08273F09
	.string "こうげきに ちからを いれている。$"
	.if (. - gText_Rom_273F09) > 0x12
	.error "gText_Rom_273F09 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F09) < 0x12
	.space 0x12 - (. - gText_Rom_273F09)
	.endif

	@ src/battle_dome.c:937 battle_dome_line_937
	.globl gText_Rom_273F1B
gText_Rom_273F1B: @ 0x08273F1B
	.string "ぼうぎょに ちからを いれている。$"
	.if (. - gText_Rom_273F1B) > 0x12
	.error "gText_Rom_273F1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F1B) < 0x12
	.space 0x12 - (. - gText_Rom_273F1B)
	.endif

	@ src/battle_dome.c:938 battle_dome_line_938
	.globl gText_Rom_273F2D
gText_Rom_273F2D: @ 0x08273F2D
	.string "すばやさに ちからを いれている。$"
	.if (. - gText_Rom_273F2D) > 0x12
	.error "gText_Rom_273F2D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F2D) < 0x12
	.space 0x12 - (. - gText_Rom_273F2D)
	.endif

	@ src/battle_dome.c:939 battle_dome_line_939
	.globl gText_Rom_273F3F
gText_Rom_273F3F: @ 0x08273F3F
	.string "とくこうに ちからを いれている。$"
	.if (. - gText_Rom_273F3F) > 0x12
	.error "gText_Rom_273F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F3F) < 0x12
	.space 0x12 - (. - gText_Rom_273F3F)
	.endif

	@ src/battle_dome.c:940 battle_dome_line_940
	.globl gText_Rom_273F51
gText_Rom_273F51: @ 0x08273F51
	.string "とくぼうに ちからを いれている。$"
	.if (. - gText_Rom_273F51) > 0x12
	.error "gText_Rom_273F51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F51) < 0x12
	.space 0x12 - (. - gText_Rom_273F51)
	.endif

	@ src/battle_dome.c:941 battle_dome_line_941
	.globl gText_Rom_273F63
gText_Rom_273F63: @ 0x08273F63
	.string "HPと こうげきに ちからを いれていない!$"
	.if (. - gText_Rom_273F63) > 0x17
	.error "gText_Rom_273F63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F63) < 0x17
	.space 0x17 - (. - gText_Rom_273F63)
	.endif

	@ src/battle_dome.c:942 battle_dome_line_942
	.globl gText_Rom_273F7A
gText_Rom_273F7A: @ 0x08273F7A
	.string "HPと ぼうぎょに ちからを いれていない!$"
	.if (. - gText_Rom_273F7A) > 0x17
	.error "gText_Rom_273F7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F7A) < 0x17
	.space 0x17 - (. - gText_Rom_273F7A)
	.endif

	@ src/battle_dome.c:943 battle_dome_line_943
	.globl gText_Rom_273F91
gText_Rom_273F91: @ 0x08273F91
	.string "HPと すばやさに ちからを いれていない!$"
	.if (. - gText_Rom_273F91) > 0x17
	.error "gText_Rom_273F91 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273F91) < 0x17
	.space 0x17 - (. - gText_Rom_273F91)
	.endif

	@ src/battle_dome.c:944 battle_dome_line_944
	.globl gText_Rom_273FA8
gText_Rom_273FA8: @ 0x08273FA8
	.string "HPと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_273FA8) > 0x17
	.error "gText_Rom_273FA8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FA8) < 0x17
	.space 0x17 - (. - gText_Rom_273FA8)
	.endif

	@ src/battle_dome.c:945 battle_dome_line_945
	.globl gText_Rom_273FBF
gText_Rom_273FBF: @ 0x08273FBF
	.string "HPと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_273FBF) > 0x17
	.error "gText_Rom_273FBF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FBF) < 0x17
	.space 0x17 - (. - gText_Rom_273FBF)
	.endif

	@ src/battle_dome.c:946 battle_dome_line_946
	.globl gText_Rom_273FD6
gText_Rom_273FD6: @ 0x08273FD6
	.string "こうげきと ぼうぎょに ちからを いれていない!$"
	.if (. - gText_Rom_273FD6) > 0x19
	.error "gText_Rom_273FD6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FD6) < 0x19
	.space 0x19 - (. - gText_Rom_273FD6)
	.endif

	@ src/battle_dome.c:947 battle_dome_line_947
	.globl gText_Rom_273FEF
gText_Rom_273FEF: @ 0x08273FEF
	.string "こうげきと すばやさに ちからを いれていない!$"
	.if (. - gText_Rom_273FEF) > 0x19
	.error "gText_Rom_273FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273FEF) < 0x19
	.space 0x19 - (. - gText_Rom_273FEF)
	.endif

	@ src/battle_dome.c:948 battle_dome_line_948
	.globl gText_Rom_274008
gText_Rom_274008: @ 0x08274008
	.string "こうげきと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_274008) > 0x19
	.error "gText_Rom_274008 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274008) < 0x19
	.space 0x19 - (. - gText_Rom_274008)
	.endif

	@ src/battle_dome.c:949 battle_dome_line_949
	.globl gText_Rom_274021
gText_Rom_274021: @ 0x08274021
	.string "こうげきと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_274021) > 0x19
	.error "gText_Rom_274021 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274021) < 0x19
	.space 0x19 - (. - gText_Rom_274021)
	.endif

	@ src/battle_dome.c:950 battle_dome_line_950
	.globl gText_Rom_27403A
gText_Rom_27403A: @ 0x0827403A
	.string "ぼうぎょと すばやさに ちからを いれていない!$"
	.if (. - gText_Rom_27403A) > 0x19
	.error "gText_Rom_27403A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27403A) < 0x19
	.space 0x19 - (. - gText_Rom_27403A)
	.endif

	@ src/battle_dome.c:951 battle_dome_line_951
	.globl gText_Rom_274053
gText_Rom_274053: @ 0x08274053
	.string "ぼうぎょと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_274053) > 0x19
	.error "gText_Rom_274053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274053) < 0x19
	.space 0x19 - (. - gText_Rom_274053)
	.endif

	@ src/battle_dome.c:952 battle_dome_line_952
	.globl gText_Rom_27406C
gText_Rom_27406C: @ 0x0827406C
	.string "ぼうぎょと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_27406C) > 0x19
	.error "gText_Rom_27406C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27406C) < 0x19
	.space 0x19 - (. - gText_Rom_27406C)
	.endif

	@ src/battle_dome.c:953 battle_dome_line_953
	.globl gText_Rom_274085
gText_Rom_274085: @ 0x08274085
	.string "すばやさと とくこうに ちからを いれていない!$"
	.if (. - gText_Rom_274085) > 0x19
	.error "gText_Rom_274085 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274085) < 0x19
	.space 0x19 - (. - gText_Rom_274085)
	.endif

	@ src/battle_dome.c:954 battle_dome_line_954
	.globl gText_Rom_27409E
gText_Rom_27409E: @ 0x0827409E
	.string "すばやさと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_27409E) > 0x19
	.error "gText_Rom_27409E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27409E) < 0x19
	.space 0x19 - (. - gText_Rom_27409E)
	.endif

	@ src/battle_dome.c:955 battle_dome_line_955
	.globl gText_Rom_2740B7
gText_Rom_2740B7: @ 0x082740B7
	.string "とくこうと とくぼうに ちからを いれていない!$"
	.if (. - gText_Rom_2740B7) > 0x19
	.error "gText_Rom_2740B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740B7) < 0x19
	.space 0x19 - (. - gText_Rom_2740B7)
	.endif

	@ src/battle_dome.c:956 battle_dome_line_956
	.globl gText_Rom_2740D0
gText_Rom_2740D0: @ 0x082740D0
	.string "HPには ちからを いれていない!$"
	.if (. - gText_Rom_2740D0) > 0x12
	.error "gText_Rom_2740D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740D0) < 0x12
	.space 0x12 - (. - gText_Rom_2740D0)
	.endif

	@ src/battle_dome.c:957 battle_dome_line_957
	.globl gText_Rom_2740E2
gText_Rom_2740E2: @ 0x082740E2
	.string "こうげきには ちからを いれていない!$"
	.if (. - gText_Rom_2740E2) > 0x14
	.error "gText_Rom_2740E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740E2) < 0x14
	.space 0x14 - (. - gText_Rom_2740E2)
	.endif

	@ src/battle_dome.c:958 battle_dome_line_958
	.globl gText_Rom_2740F6
gText_Rom_2740F6: @ 0x082740F6
	.string "ぼうぎょには ちからを いれていない!$"
	.if (. - gText_Rom_2740F6) > 0x14
	.error "gText_Rom_2740F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2740F6) < 0x14
	.space 0x14 - (. - gText_Rom_2740F6)
	.endif

	@ src/battle_dome.c:959 battle_dome_line_959
	.globl gText_Rom_27410A
gText_Rom_27410A: @ 0x0827410A
	.string "すばやさには ちからを いれていない!$"
	.if (. - gText_Rom_27410A) > 0x14
	.error "gText_Rom_27410A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27410A) < 0x14
	.space 0x14 - (. - gText_Rom_27410A)
	.endif

	@ src/battle_dome.c:960 battle_dome_line_960
	.globl gText_Rom_27411E
gText_Rom_27411E: @ 0x0827411E
	.string "とくこうには ちからを いれていない!$"
	.if (. - gText_Rom_27411E) > 0x14
	.error "gText_Rom_27411E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27411E) < 0x14
	.space 0x14 - (. - gText_Rom_27411E)
	.endif

	@ src/battle_dome.c:961 battle_dome_line_961
	.globl gText_Rom_274132
gText_Rom_274132: @ 0x08274132
	.string "とくぼうには ちからを いれていない!$"
	.if (. - gText_Rom_274132) > 0x14
	.error "gText_Rom_274132 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274132) < 0x14
	.space 0x14 - (. - gText_Rom_274132)
	.endif

	@ src/battle_dome.c:962 battle_dome_line_962
	.globl gText_Rom_274146
gText_Rom_274146: @ 0x08274146
	.string "バランスよく ポケモンを そだてている。$"
	.if (. - gText_Rom_274146) > 0x15
	.error "gText_Rom_274146 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274146) < 0x15
	.space 0x15 - (. - gText_Rom_274146)
	.endif

	@ src/battle_dome.c:1001 battle_dome_line_1001
	.globl gText_Rom_27415B
gText_Rom_27415B: @ 0x0827415B
	.string "これより たいけつ!$"
	.if (. - gText_Rom_27415B) > 0xb
	.error "gText_Rom_27415B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27415B) < 0xb
	.space 0xb - (. - gText_Rom_27415B)
	.endif

	@ src/battle_dome.c:1002 battle_dome_line_1002
	.globl gText_Rom_274166
gText_Rom_274166: @ 0x08274166
	.string "{STR_VAR_2} などで {STR_VAR_1}が しょうり!$"
	.if (. - gText_Rom_274166) > 0x11
	.error "gText_Rom_274166 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274166) < 0x11
	.space 0x11 - (. - gText_Rom_274166)
	.endif

	@ src/battle_dome.c:1003 battle_dome_line_1003
	.globl gText_Rom_274177
gText_Rom_274177: @ 0x08274177
	.string "{STR_VAR_2} などで {STR_VAR_1} ゆうしょう!$"
	.if (. - gText_Rom_274177) > 0x11
	.error "gText_Rom_274177 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274177) < 0x11
	.space 0x11 - (. - gText_Rom_274177)
	.endif

	@ src/battle_dome.c:1004 battle_dome_line_1004
	.globl gText_Rom_274188
gText_Rom_274188: @ 0x08274188
	.string "あいての リタイアで {STR_VAR_1}が しょうり!$"
	.if (. - gText_Rom_274188) > 0x15
	.error "gText_Rom_274188 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274188) < 0x15
	.space 0x15 - (. - gText_Rom_274188)
	.endif

	@ src/battle_dome.c:1005 battle_dome_line_1005
	.globl gText_Rom_27419D
gText_Rom_27419D: @ 0x0827419D
	.string "あいての リタイアで {STR_VAR_1} ゆうしょう!$"
	.if (. - gText_Rom_27419D) > 0x15
	.error "gText_Rom_27419D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27419D) < 0x15
	.space 0x15 - (. - gText_Rom_27419D)
	.endif

	@ src/battle_dome.c:1006 battle_dome_line_1006
	.globl gText_Rom_2741B2
gText_Rom_2741B2: @ 0x082741B2
	.string "わざを つかわずに {STR_VAR_1}が しょうり!$"
	.if (. - gText_Rom_2741B2) > 0x14
	.error "gText_Rom_2741B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741B2) < 0x14
	.space 0x14 - (. - gText_Rom_2741B2)
	.endif

	@ src/battle_dome.c:1007 battle_dome_line_1007
	.globl gText_Rom_2741C6
gText_Rom_2741C6: @ 0x082741C6
	.string "わざを つかわずに {STR_VAR_1} ゆうしょう!$"
	.if (. - gText_Rom_2741C6) > 0x14
	.error "gText_Rom_2741C6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741C6) < 0x14
	.space 0x14 - (. - gText_Rom_2741C6)
	.endif

	@ src/battle_dome.c:982 battle_dome_line_982
	.globl gText_Rom_2741DA
gText_Rom_2741DA: @ 0x082741DA
	.string " 1かいせん だい1しあい$"
	.if (. - gText_Rom_2741DA) > 0xe
	.error "gText_Rom_2741DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741DA) < 0xe
	.space 0xe - (. - gText_Rom_2741DA)
	.endif

	@ src/battle_dome.c:983 battle_dome_line_983
	.globl gText_Rom_2741E8
gText_Rom_2741E8: @ 0x082741E8
	.string " 1かいせん だい2しあい$"
	.if (. - gText_Rom_2741E8) > 0xe
	.error "gText_Rom_2741E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741E8) < 0xe
	.space 0xe - (. - gText_Rom_2741E8)
	.endif

	@ src/battle_dome.c:984 battle_dome_line_984
	.globl gText_Rom_2741F6
gText_Rom_2741F6: @ 0x082741F6
	.string " 1かいせん だい3しあい$"
	.if (. - gText_Rom_2741F6) > 0xe
	.error "gText_Rom_2741F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2741F6) < 0xe
	.space 0xe - (. - gText_Rom_2741F6)
	.endif

	@ src/battle_dome.c:985 battle_dome_line_985
	.globl gText_Rom_274204
gText_Rom_274204: @ 0x08274204
	.string " 1かいせん だい4しあい$"
	.if (. - gText_Rom_274204) > 0xe
	.error "gText_Rom_274204 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274204) < 0xe
	.space 0xe - (. - gText_Rom_274204)
	.endif

	@ src/battle_dome.c:986 battle_dome_line_986
	.globl gText_Rom_274212
gText_Rom_274212: @ 0x08274212
	.string " 1かいせん だい5しあい$"
	.if (. - gText_Rom_274212) > 0xe
	.error "gText_Rom_274212 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274212) < 0xe
	.space 0xe - (. - gText_Rom_274212)
	.endif

	@ src/battle_dome.c:987 battle_dome_line_987
	.globl gText_Rom_274220
gText_Rom_274220: @ 0x08274220
	.string " 1かいせん だい6しあい$"
	.if (. - gText_Rom_274220) > 0xe
	.error "gText_Rom_274220 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274220) < 0xe
	.space 0xe - (. - gText_Rom_274220)
	.endif

	@ src/battle_dome.c:988 battle_dome_line_988
	.globl gText_Rom_27422E
gText_Rom_27422E: @ 0x0827422E
	.string " 1かいせん だい7しあい$"
	.if (. - gText_Rom_27422E) > 0xe
	.error "gText_Rom_27422E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27422E) < 0xe
	.space 0xe - (. - gText_Rom_27422E)
	.endif

	@ src/battle_dome.c:989 battle_dome_line_989
	.globl gText_Rom_27423C
gText_Rom_27423C: @ 0x0827423C
	.string " 1かいせん だい8しあい$"
	.if (. - gText_Rom_27423C) > 0xe
	.error "gText_Rom_27423C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27423C) < 0xe
	.space 0xe - (. - gText_Rom_27423C)
	.endif

	@ src/battle_dome.c:990 battle_dome_line_990
	.globl gText_Rom_27424A
gText_Rom_27424A: @ 0x0827424A
	.string " 2かいせん だい1しあい$"
	.if (. - gText_Rom_27424A) > 0xe
	.error "gText_Rom_27424A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27424A) < 0xe
	.space 0xe - (. - gText_Rom_27424A)
	.endif

	@ src/battle_dome.c:991 battle_dome_line_991
	.globl gText_Rom_274258
gText_Rom_274258: @ 0x08274258
	.string " 2かいせん だい2しあい$"
	.if (. - gText_Rom_274258) > 0xe
	.error "gText_Rom_274258 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274258) < 0xe
	.space 0xe - (. - gText_Rom_274258)
	.endif

	@ src/battle_dome.c:992 battle_dome_line_992
	.globl gText_Rom_274266
gText_Rom_274266: @ 0x08274266
	.string " 2かいせん だい3しあい$"
	.if (. - gText_Rom_274266) > 0xe
	.error "gText_Rom_274266 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274266) < 0xe
	.space 0xe - (. - gText_Rom_274266)
	.endif

	@ src/battle_dome.c:993 battle_dome_line_993
	.globl gText_Rom_274274
gText_Rom_274274: @ 0x08274274
	.string " 2かいせん だい4しあい$"
	.if (. - gText_Rom_274274) > 0xe
	.error "gText_Rom_274274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274274) < 0xe
	.space 0xe - (. - gText_Rom_274274)
	.endif

	@ src/battle_dome.c:994 battle_dome_line_994
	.globl gText_Rom_274282
gText_Rom_274282: @ 0x08274282
	.string "じゅんけっしょう だい1しあい$"
	.if (. - gText_Rom_274282) > 0x10
	.error "gText_Rom_274282 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274282) < 0x10
	.space 0x10 - (. - gText_Rom_274282)
	.endif

	@ src/battle_dome.c:995 battle_dome_line_995
	.globl gText_Rom_274292
gText_Rom_274292: @ 0x08274292
	.string "じゅんけっしょう だい2しあい$"
	.if (. - gText_Rom_274292) > 0x10
	.error "gText_Rom_274292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274292) < 0x10
	.space 0x10 - (. - gText_Rom_274292)
	.endif

	@ src/battle_dome.c:996 battle_dome_line_996
	.globl gText_Rom_2742A2
gText_Rom_2742A2: @ 0x082742A2
	.string "    けっしょうせん$"
	.if (. - gText_Rom_2742A2) > 0xc
	.error "gText_Rom_2742A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2742A2) < 0xc
	.space 0xc - (. - gText_Rom_2742A2)
	.endif
	.incbin "baserom.gba", 0x2742ae, 0x457

	@ data/text/blend_master.inc:1 BerryBlender_Text_BlendWithTheBlendMaster
	.globl gText_Rom_274705
gText_Rom_274705: @ 0x08274705
	.string "めいじん『いかにも!\nわしが ブレンドめいじん じゃ!\pいっしょに まわして\nわしの すごい わざを みるがよい$"
	.if (. - gText_Rom_274705) > 0x39
	.error "gText_Rom_274705 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274705) < 0x39
	.space 0x39 - (. - gText_Rom_274705)
	.endif

	@ data/text/blend_master.inc:7 BerryBlender_Text_SeeMyMasteryInAction
	.globl gText_Rom_27473E
gText_Rom_27473E: @ 0x0827473E
	.string "めいじん『ふむむむっ! おぬし\nわしの すごい わざを みたいのじゃな?$"
	.if (. - gText_Rom_27473E) > 0x25
	.error "gText_Rom_27473E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27473E) < 0x25
	.space 0x25 - (. - gText_Rom_27473E)
	.endif

	@ data/text/blend_master.inc:11 BerryBlender_Text_TooBusyNowIsee
	.globl gText_Rom_274763
gText_Rom_274763: @ 0x08274763
	.string "ふむむむっ!\pいまは いそがしいのじゃな!\pあんしん するのじゃ!\nわしは きょう ずっと ここに おる\lようが すんだら すぐに くるのじゃぞ!$"
	.if (. - gText_Rom_274763) > 0x4a
	.error "gText_Rom_274763 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274763) < 0x4a
	.space 0x4a - (. - gText_Rom_274763)
	.endif

	@ data/text/blend_master.inc:18 BerryBlender_Text_BlendMasterNoBerries
	.globl gText_Rom_2747AD
gText_Rom_2747AD: @ 0x082747AD
	.string "ふむむむっ!\pおぬし きのみを もっておらんぞ!\pわしは きょう ずっと ここに おるから\nはやく きのみを みつけて くるのじゃぞ!$"
	.if (. - gText_Rom_2747AD) > 0x44
	.error "gText_Rom_2747AD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747AD) < 0x44
	.space 0x44 - (. - gText_Rom_2747AD)
	.endif

	@ data/text/blend_master.inc:24 BerryBlender_Text_BlendMasterKnowHowToMakePokeblocks
	.globl gText_Rom_2747F1
gText_Rom_2747F1: @ 0x082747F1
	.string "そうじゃろう!\nそうじゃろう!\pとろころで おぬし……\nむろん ポロックの つくりかたは\lしっておる じゃろうな?$"
	.if (. - gText_Rom_2747F1) > 0x3a
	.error "gText_Rom_2747F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2747F1) < 0x3a
	.space 0x3a - (. - gText_Rom_2747F1)
	.endif

	@ data/text/blend_master.inc:31 BerryBlender_Text_BlendMasterExplainBerryBlending
	.globl gText_Rom_27482B
gText_Rom_27482B: @ 0x0827482B
	.string "ふむむむっ!\pまあ かんたんな ことじゃ!\pきのみ ブレンダーの マークが\nじぶんの ところに きたら\lボタンを おせば いいだけじゃ!\pわしの かんぺきな おしかたを みれば\nすぐに わかるはずじゃ!$"
	.if (. - gText_Rom_27482B) > 0x66
	.error "gText_Rom_27482B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27482B) < 0x66
	.space 0x66 - (. - gText_Rom_27482B)
	.endif

	@ data/text/blend_master.inc:40 BerryBlender_Text_BlendMasterLetsBerryBlender
	.globl gText_Rom_274891
gText_Rom_274891: @ 0x08274891
	.string "よしっ!\pでは はじめるぞ!\pめいじんと いっしょに\nレッツ きのみブレンダー!$"
	.if (. - gText_Rom_274891) > 0x29
	.error "gText_Rom_274891 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274891) < 0x29
	.space 0x29 - (. - gText_Rom_274891)
	.endif

	@ data/text/blend_master.inc:46 BerryBlender_Text_BlendMasterNoPokeblockCase
	.globl gText_Rom_2748BA
gText_Rom_2748BA: @ 0x082748BA
	.string "ふむむむっ!\pおぬし ポロックケースを\nまだ もっておらん ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックケースを もらってから\lまた くるのじゃ!$"
	.if (. - gText_Rom_2748BA) > 0x54
	.error "gText_Rom_2748BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2748BA) < 0x54
	.space 0x54 - (. - gText_Rom_2748BA)
	.endif

	@ data/text/blend_master.inc:54 BerryBlender_Text_BlendMasterPokeblockCaseFull
	.globl gText_Rom_27490E
gText_Rom_27490E: @ 0x0827490E
	.string "ふむむむっ!\pおぬし ポロックケースが\nいっぱいの ようじゃぞ!\pわしは きょう ずっと ここに おるから\nポロックを へらしてから\lまた くるのじゃ!$"
	.if (. - gText_Rom_27490E) > 0x4d
	.error "gText_Rom_27490E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27490E) < 0x4d
	.space 0x4d - (. - gText_Rom_27490E)
	.endif

	@ data/text/blend_master.inc:62 BerryBlender_Text_WhoaAwesome
	.globl gText_Rom_27495B
gText_Rom_27495B: @ 0x0827495B
	.string "すげぇー!$"
	.if (. - gText_Rom_27495B) > 0x6
	.error "gText_Rom_27495B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27495B) < 0x6
	.space 0x6 - (. - gText_Rom_27495B)
	.endif

	@ data/text/blend_master.inc:65 BerryBlender_Text_WickedlyFast
	.globl gText_Rom_274961
gText_Rom_274961: @ 0x08274961
	.string "はぇー!$"
	.if (. - gText_Rom_274961) > 0x5
	.error "gText_Rom_274961 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274961) < 0x5
	.space 0x5 - (. - gText_Rom_274961)
	.endif

	@ data/text/blend_master.inc:68 BerryBlender_Text_WhatAnExpert
	.globl gText_Rom_274966
gText_Rom_274966: @ 0x08274966
	.string "うめぇー!$"
	.if (. - gText_Rom_274966) > 0x6
	.error "gText_Rom_274966 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274966) < 0x6
	.space 0x6 - (. - gText_Rom_274966)
	.endif

	@ data/text/blend_master.inc:71 BerryBlender_Text_MadeAmazingPokeblocksWithMaster
	.globl gText_Rom_27496C
gText_Rom_27496C: @ 0x0827496C
	.string "めいじんと いっしょに やったら\nとっても すごい ポロック できたの$"
	.if (. - gText_Rom_27496C) > 0x24
	.error "gText_Rom_27496C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27496C) < 0x24
	.space 0x24 - (. - gText_Rom_27496C)
	.endif

	@ data/text/blend_master.inc:75 BerryBlender_Text_QualitiesOfBlendMaster
	.globl gText_Rom_274990
gText_Rom_274990: @ 0x08274990
	.string "やじるしを おっていく\nスキのない めの うごき!\pボタンを おすときの\nせいかくな ての うごき!\pこの ふたつを あわせもつ\nめいじんは ホント すごいね!$"
	.if (. - gText_Rom_274990) > 0x51
	.error "gText_Rom_274990 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274990) < 0x51
	.space 0x51 - (. - gText_Rom_274990)
	.endif

	@ data/text/blend_master.inc:83 BerryBlender_Text_MasterWorksOnSkillsInMountains
	.globl gText_Rom_2749E1
gText_Rom_2749E1: @ 0x082749E1
	.string "めいじんは どこかの やまおくで\nしゅぎょう しているらしいの\pそして ときどき\nミナモシティに やってきて\lきのみブレンダーを 1にちじゅう\lするらしいわ$"
	.if (. - gText_Rom_2749E1) > 0x4f
	.error "gText_Rom_2749E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2749E1) < 0x4f
	.space 0x4f - (. - gText_Rom_2749E1)
	.endif

	@ data/text/battle_tent.inc:1 FallarborTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274A30
gText_Rom_274A30: @ 0x08274A30
	.string "バトルテント ハジツゲかいじょうへ\nようこそ おいでなされた!\pこちらでは かちぬきチームバトルの\nあんないを しておりますぞ!$"
	.if (. - gText_Rom_274A30) > 0x41
	.error "gText_Rom_274A30 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A30) < 0x41
	.space 0x41 - (. - gText_Rom_274A30)
	.endif

	@ data/text/battle_tent.inc:7 FallarborTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274A71
gText_Rom_274A71: @ 0x08274A71
	.string "かちぬきチームバトルに\nちょうせん されますかな?$"
	.if (. - gText_Rom_274A71) > 0x1a
	.error "gText_Rom_274A71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A71) < 0x1a
	.space 0x1a - (. - gText_Rom_274A71)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274A8B
gText_Rom_274A8B: @ 0x08274A8B
	.string "またの ちょうせんを\nおまちして おりますぞ!$"
	.if (. - gText_Rom_274A8B) > 0x18
	.error "gText_Rom_274A8B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274A8B) < 0x18
	.space 0x18 - (. - gText_Rom_274A8B)
	.endif

	@ data/text/battle_tent.inc:15 FallarborTown_BattleTentLobby_Text_ExplainFallarborTent
	.globl gText_Rom_274AA3
gText_Rom_274AA3: @ 0x08274AA3
	.string "バトルテント ハジツゲかいじょうでは\nかちぬきチームバトルを\lおこなって おりますぞ!\pさんかする かたには しゅつじょう させる\n3ひきの ポケモンと たたかいに だす\lじゅんばんを きめて いただきますぞ!\pたたかいの あいだは\nこの じゅんばん どおりに\lポケモンを だすことに なりますな!\pたたかいに いちど だした ポケモンは\nけっちゃくが つくまで\lこうたいさせる ことが できませぬ!\pさらに 3ターン いないに\nたたかいの けっちゃくが つかなければ\lはんていと なりますぞ!\pまた とちゅうで ちょうせんを\nちゅうだんしたい ばあいは\lレポートを かかないと\lつづけて ちょうせんが できないので\lおきをつけ くだされ!\pみごと 3にんぬきを なされた あかつきには\nすてきな しょうひんを\lおおくり いたしますぞ!$"
	.if (. - gText_Rom_274AA3) > 0x171
	.error "gText_Rom_274AA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274AA3) < 0x171
	.space 0x171 - (. - gText_Rom_274AA3)
	.endif

	@ data/text/battle_tent.inc:40 FallarborTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_274C14
gText_Rom_274C14: @ 0x08274C14
	.string "バトルテントへ おつれする まえに\nレポートを かきますが よろしいですかな?$"
	.if (. - gText_Rom_274C14) > 0x28
	.error "gText_Rom_274C14 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C14) < 0x28
	.space 0x28 - (. - gText_Rom_274C14)
	.endif

	@ data/text/battle_tent.inc:45 FallarborTown_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_274C3C
gText_Rom_274C3C: @ 0x08274C3C
	.string "レベル50と レベル100の へやが\nありますが どちらに まいられますかな?$"
	.if (. - gText_Rom_274C3C) > 0x28
	.error "gText_Rom_274C3C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C3C) < 0x28
	.space 0x28 - (. - gText_Rom_274C3C)
	.endif

	@ data/text/battle_tent.inc:49 FallarborTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_274C64
gText_Rom_274C64: @ 0x08274C64
	.string "では ちょうせんする ポケモンを\n3ひき おえらび くだされ!$"
	.if (. - gText_Rom_274C64) > 0x20
	.error "gText_Rom_274C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274C64) < 0x20
	.space 0x20 - (. - gText_Rom_274C64)
	.endif

	@ field-script:0x1F54B2 FieldScriptText_274C84
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274C84
gText_Rom_274C84: @ 0x08274C84
	.string "おきゃくじん！！\pさんかできる　ポケモンが\n3ひき　おりませんぬ！\pまた　もたせる　どうぐも\nすべて　ちがう　どうぐに　してくだされ！\pなお　タマゴ{0xFD}{0x02}さんか　させる　ことは　できませぬ！\pじゅんびが　できましたら\nまた　おこし　くだされ！$"
	.if (. - gText_Rom_274C84) != 0x79
	.error "gText_Rom_274C84 must retain its original byte length"
	.endif
	.globl gText_Rom_274CE3
	.set gText_Rom_274CE3, gText_Rom_274C84 + 0x5f

	@ data/text/battle_tent.inc:63 FallarborTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274CFD
gText_Rom_274CFD: @ 0x08274CFD
	.string "おきゃくじん!!\pさんかできる ポケモンが\n3ひき おりませぬ!\pさんかする ためには\nすべて ちがう しゅるいの ポケモンを\l3ひき よういして くだされ\pまた もたせる どうぐも\nすべて ちがう どうぐに してくだされ!\pなお タマゴ{STR_VAR_1}さんか させる ことは できませぬ!\pじゅんびが できましたら\nまた おこし くだされ!$"
	.if (. - gText_Rom_274CFD) != 0xa6
	.error "gText_Rom_274CFD must retain its original byte length"
	.endif
	.globl gText_Rom_274D89
	.set gText_Rom_274D89, gText_Rom_274CFD + 0x8c

	@ data/text/battle_tent.inc:76 FallarborTown_BattleTentLobby_Text_GuideYouToBattleTent
	.globl gText_Rom_274DA3
gText_Rom_274DA3: @ 0x08274DA3
	.string "では バトルテントへ\nおつれいたしますぞ!$"
	.if (. - gText_Rom_274DA3) > 0x16
	.error "gText_Rom_274DA3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274DA3) < 0x16
	.space 0x16 - (. - gText_Rom_274DA3)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:437 BattleFrontier_BattleArenaLobby_Text_DidntSaveBeforeShuttingDown (+1 aliases)
	.globl gText_Rom_274DB9
gText_Rom_274DB9: @ 0x08274DB9
	.string "おきゃくじん!\pぜんかい レポートを かいて\nしゅうりょう しませんでしたな?\pざんねんですが その ばあい\nちょうせんは むこうと なりますぞ!\pまた はじめから\nちょうせん してくだされ!!$"
	.if (. - gText_Rom_274DB9) > 0x62
	.error "gText_Rom_274DB9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274DB9) < 0x62
	.space 0x62 - (. - gText_Rom_274DB9)
	.endif

	@ data/text/battle_tent.inc:89 FallarborTown_BattleTentLobby_Text_BeatThreeTrainers
	.globl gText_Rom_274E1B
gText_Rom_274E1B: @ 0x08274E1B
	.string "3にんぬき たっせい\nおみごとで ございました!$"
	.if (. - gText_Rom_274E1B) > 0x19
	.error "gText_Rom_274E1B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E1B) < 0x19
	.space 0x19 - (. - gText_Rom_274E1B)
	.endif

	@ data/text/battle_tent.inc:93 FallarborTown_BattleTentLobby_Text_WaitWhileSaveGame
	.globl gText_Rom_274E34
gText_Rom_274E34: @ 0x08274E34
	.string "レポートを かきますので\nおまちくだされ!$"
	.if (. - gText_Rom_274E34) > 0x16
	.error "gText_Rom_274E34 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E34) < 0x16
	.space 0x16 - (. - gText_Rom_274E34)
	.endif

	@ data/text/battle_tent.inc:97 FallarborTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_274E4A
gText_Rom_274E4A: @ 0x08274E4A
	.string "3にんぬきを たっせい されましたので\nこの しょうひんを おうけとり くだされ!$"
	.if (. - gText_Rom_274E4A) > 0x2a
	.error "gText_Rom_274E4A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E4A) < 0x2a
	.space 0x2a - (. - gText_Rom_274E4A)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_274E74
gText_Rom_274E74: @ 0x08274E74
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!$"
	.if (. - gText_Rom_274E74) > 0xe
	.error "gText_Rom_274E74 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E74) < 0xe
	.space 0xe - (. - gText_Rom_274E74)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:466 BattleFrontier_BattleArenaLobby_Text_BagFullReturnForPrize (+1 aliases)
	.globl gText_Rom_274E82
gText_Rom_274E82: @ 0x08274E82
	.string "……おおっ!\nどうぐが いっぱいの ようですな!\pどうぐを せいりしてから\nまた おこしくだされ!$"
	.if (. - gText_Rom_274E82) > 0x32
	.error "gText_Rom_274E82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274E82) < 0x32
	.space 0x32 - (. - gText_Rom_274E82)
	.endif

	@ data/text/battle_tent.inc:111 FallarborTown_BattleTentLobby_Text_ThankYouWaitWhileSaving
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274EB4
gText_Rom_274EB4: @ 0x08274EB4
	.string "おつかれさまでした!\pレポートを かきますので\nおまちくだされ!$"
	.if (. - gText_Rom_274EB4) != 0x21
	.error "gText_Rom_274EB4 must retain its original byte length"
	.endif
	.globl gText_Rom_274EBF
	.set gText_Rom_274EBF, gText_Rom_274EB4 + 0xb

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:369 BattleFrontier_BattleArenaLobby_Text_AwaitAnotherChallenge (+5 aliases)
	.globl gText_Rom_274ED5
gText_Rom_274ED5: @ 0x08274ED5
	.string "またの ちょうせんを\nおまちして おりますぞ!$"
	.if (. - gText_Rom_274ED5) > 0x18
	.error "gText_Rom_274ED5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274ED5) < 0x18
	.space 0x18 - (. - gText_Rom_274ED5)
	.endif

	@ field-script:0x1F52EE FieldScriptText_274EED
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_274EED
gText_Rom_274EED: @ 0x08274EED
	.string "おまちしておりました！\pバトルテントに　おつれする　まえに\nレポートを　かきますので　おまちくだされ！$"
	.if (. - gText_Rom_274EED) != 0x34
	.error "gText_Rom_274EED must retain its original byte length"
	.endif
	.globl gText_Rom_274EF9
	.set gText_Rom_274EF9, gText_Rom_274EED + 0xc

	@ data/text/battle_tent.inc:124 VerdanturfTown_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_274F21
gText_Rom_274F21: @ 0x08274F21
	.string "バトルテント\nシダケかいじょうへ ようこそ\pここでは トレーナーの\nしんらいの こころを ためしておる$"
	.if (. - gText_Rom_274F21) > 0x34
	.error "gText_Rom_274F21 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F21) < 0x34
	.space 0x34 - (. - gText_Rom_274F21)
	.endif

	@ data/text/battle_tent.inc:130 VerdanturfTown_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_274F55
gText_Rom_274F55: @ 0x08274F55
	.string "バトルテント シダケかいじょうに\nちょうせん するか?$"
	.if (. - gText_Rom_274F55) > 0x1c
	.error "gText_Rom_274F55 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F55) < 0x1c
	.space 0x1c - (. - gText_Rom_274F55)
	.endif

	@ data/text/battle_tent.inc:134 VerdanturfTown_BattleTentLobby_Text_ExplainVerdanturfTent
	.globl gText_Rom_274F71
gText_Rom_274F71: @ 0x08274F71
	.string "バトルテント シダケかいじょうでの\nたたかいには まもらなければ ならない\lひとつの おきてが ある\pここでは ポケモンは\nいれかえ しか できない!\pそれいがいの めいれいは\nいっさい きんし して おるのだ!\pポケモンには おのれの せいかくの ままに\nかんがえ こうどう して もらう!\pおぬしは じぶんの\nポケモンたちを しんじて\lたたかいを みまもって やれ\pみごと 3にんの トレーナーを\nうちやぶることが できれば\lしょうひんを さしあげよう\pまた とちゅうで ちょうせんを\nちゅうだん したい ときは\lきちんと レポートを かかないと\lつづけて ちょうせん できん からな\lきを つけてくれ……$"
	.if (. - gText_Rom_274F71) > 0x132
	.error "gText_Rom_274F71 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_274F71) < 0x132
	.space 0x132 - (. - gText_Rom_274F71)
	.endif

	@ data/text/battle_tent.inc:156 VerdanturfTown_BattleTentLobby_Text_ReturnFortified
	.globl gText_Rom_2750A3
gText_Rom_2750A3: @ 0x082750A3
	.string "おのれの こころと ポケモンを きたえたら\nまた くるがよい……$"
	.if (. - gText_Rom_2750A3) > 0x21
	.error "gText_Rom_2750A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750A3) < 0x21
	.space 0x21 - (. - gText_Rom_2750A3)
	.endif

	@ data/text/battle_tent.inc:161 VerdanturfTown_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_2750C4
gText_Rom_2750C4: @ 0x082750C4
	.string "レベル50の へやと レベル100の へやが\nあるが どちらに ちょうせん するのだ?$"
	.if (. - gText_Rom_2750C4) > 0x2c
	.error "gText_Rom_2750C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2750C4) < 0x2c
	.space 0x2c - (. - gText_Rom_2750C4)
	.endif

	@ data/text/battle_tent.inc:165 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLv50
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2750F0
gText_Rom_2750F0: @ 0x082750F0
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\l3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pなお タマゴ{STR_VAR_1}ちょうせん させる ことは できん!\pじゅんびを ととのえてから また きなさい$"
	.if (. - gText_Rom_2750F0) != 0x9f
	.error "gText_Rom_2750F0 must retain its original byte length"
	.endif
	.globl gText_Rom_27518B
	.set gText_Rom_27518B, gText_Rom_2750F0 + 0x9b

	@ data/text/battle_tent.inc:177 VerdanturfTown_BattleTentLobby_Text_NotEnoughValidMonsLvOpen
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_27518F
gText_Rom_27518F: @ 0x0827518F
	.string "おぬし……\pちょうせん できる ポケモンが\n3ひき おらんぞ!\pちょうせん するには\nすべて ちがう しゅるいの ポケモンを\p3ひき ようい してくれ\pまた もたせる どうぐも\nすべて ちがう もので なければ いかん\pそして タマゴ{STR_VAR_1}ちょうせん\nさせる ことは できん!\pじゅんびを ととえてから また きなさい$"
	.if (. - gText_Rom_27518F) != 0x9f
	.error "gText_Rom_27518F must retain its original byte length"
	.endif
	.globl gText_Rom_27522A
	.set gText_Rom_27522A, gText_Rom_27518F + 0x9b

	@ data/text/battle_tent.inc:190 VerdanturfTown_BattleTentLobby_Text_SelectThreeMons
	.globl gText_Rom_27522E
gText_Rom_27522E: @ 0x0827522E
	.string "では ちょうせんする ポケモンを\n3ひき えらんでくれ$"
	.if (. - gText_Rom_27522E) > 0x1c
	.error "gText_Rom_27522E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27522E) < 0x1c
	.space 0x1c - (. - gText_Rom_27522E)
	.endif

	@ data/text/battle_tent.inc:194 VerdanturfTown_BattleTentLobby_Text_SaveBeforeChallenge
	.globl gText_Rom_27524A
gText_Rom_27524A: @ 0x0827524A
	.string "バトルテントへ むかうまえに\nレポートを かくが よろしいか?$"
	.if (. - gText_Rom_27524A) > 0x20
	.error "gText_Rom_27524A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27524A) < 0x20
	.space 0x20 - (. - gText_Rom_27524A)
	.endif

	@ data/text/battle_tent.inc:198 VerdanturfTown_BattleTentLobby_Text_NowFollowMe
	.globl gText_Rom_27526A
gText_Rom_27526A: @ 0x0827526A
	.string "それでは\nわしに ついてこい……$"
	.if (. - gText_Rom_27526A) > 0x11
	.error "gText_Rom_27526A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27526A) < 0x11
	.space 0x11 - (. - gText_Rom_27526A)
	.endif

	@ field-script:0x1F6494 FieldScriptText_27527B
	.globl gText_Rom_27527B
gText_Rom_27527B: @ 0x0827527B
	.string "よいものを　みせて　もらった\pそれでは　レポートを　かこう……\nしばし　またれよ……$"
	.if (. - gText_Rom_27527B) > 0x2b
	.error "gText_Rom_27527B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27527B) < 0x2b
	.space 0x2b - (. - gText_Rom_27527B)
	.endif

	@ data/text/battle_tent.inc:207 VerdanturfTown_BattleTentLobby_Text_AchievedThreeWinStreak
	.globl gText_Rom_2752A6
gText_Rom_2752A6: @ 0x082752A6
	.string "3にんぬき たっせい とは……\pおぬしと ポケモンの こころの きずなは\nまことの ようじゃな……$"
	.if (. - gText_Rom_2752A6) > 0x32
	.error "gText_Rom_2752A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752A6) < 0x32
	.space 0x32 - (. - gText_Rom_2752A6)
	.endif

	@ data/text/battle_tent.inc:212 VerdanturfTown_BattleTentLobby_Text_FeatWillBeRecorded
	.globl gText_Rom_2752D8
gText_Rom_2752D8: @ 0x082752D8
	.string "レポートに かくぞ\nしばし またれよ……$"
	.if (. - gText_Rom_2752D8) > 0x15
	.error "gText_Rom_2752D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752D8) < 0x15
	.space 0x15 - (. - gText_Rom_2752D8)
	.endif

	@ data/text/battle_tent.inc:216 VerdanturfTown_BattleTentLobby_Text_PresentYouWithPrize
	.globl gText_Rom_2752ED
gText_Rom_2752ED: @ 0x082752ED
	.string "3にんぬきの あかしに\nこちらを さしあげよう……$"
	.if (. - gText_Rom_2752ED) > 0x1a
	.error "gText_Rom_2752ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2752ED) < 0x1a
	.space 0x1a - (. - gText_Rom_2752ED)
	.endif

	@ data/text/battle_tent.inc:220 SlateportCity_BattleTentLobby_Text_WelcomeToBattleTent
	.globl gText_Rom_275307
gText_Rom_275307: @ 0x08275307
	.string "バトルテント カイナかいじょうへ\nようこそ!\pバトルトレードの\nごあんないは こちらです!$"
	.if (. - gText_Rom_275307) > 0x2e
	.error "gText_Rom_275307 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275307) < 0x2e
	.space 0x2e - (. - gText_Rom_275307)
	.endif

	@ data/text/battle_tent.inc:226 SlateportCity_BattleTentLobby_Text_TakeChallenge
	.globl gText_Rom_275335
gText_Rom_275335: @ 0x08275335
	.string "バトルトレードに\nちょうせん しますか?$"
	.if (. - gText_Rom_275335) > 0x15
	.error "gText_Rom_275335 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275335) < 0x15
	.space 0x15 - (. - gText_Rom_275335)
	.endif

	@ data/text/battle_tent.inc:230 SlateportCity_BattleTentLobby_Text_ExplainSlateportTent
	.globl gText_Rom_27534A
gText_Rom_27534A: @ 0x0827534A
	.string "バトルテント カイナかいじょうでは\nレンタルポケモンを つかった\lバトルトレード という イベントを\lおこなっています!\pまずは バトルトレード せんようの\nポケモン 3ひきを おかし します!\pつぎに そちらの 3ひきの ポケモンを\nつかって シングルバトルを\lおこなって いただきます!\pみごと たたかいに しょうりすると\nたたかった トレーナーと ポケモンを\lトレード することが できます!\pトレードと たたかいを くりかえし\nみごと 3れんしょう したら\lすてきな しょうひんを さしあげます!\pなお とちゅうで ちょうせんを\nちゅうだん したい ときには\lきちんと レポートを かかないと\lつづけて ちょうせんが できません!\pくれぐれも きをつけて くださいね!$"
	.if (. - gText_Rom_27534A) > 0x153
	.error "gText_Rom_27534A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27534A) < 0x153
	.space 0x153 - (. - gText_Rom_27534A)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:354 BattleFrontier_BattleFactoryLobby_Text_LookForwardToNextVisit (+1 aliases)
	.globl gText_Rom_27549D
gText_Rom_27549D: @ 0x0827549D
	.string "またの ごりようを おまちしていますよ!$"
	.if (. - gText_Rom_27549D) > 0x15
	.error "gText_Rom_27549D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27549D) < 0x15
	.space 0x15 - (. - gText_Rom_27549D)
	.endif

	@ data/text/battle_tent.inc:256 SlateportCity_BattleTentLobby_Text_WhichLevelMode
	.globl gText_Rom_2754B2
gText_Rom_2754B2: @ 0x082754B2
	.string "レベル50と レベル100の イベント\nどちらに ちょうせん しますか?$"
	.if (. - gText_Rom_2754B2) > 0x25
	.error "gText_Rom_2754B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754B2) < 0x25
	.space 0x25 - (. - gText_Rom_2754B2)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:361 BattleFrontier_BattleFactoryLobby_Text_OkayToSaveBeforeChallenge (+1 aliases)
	.globl gText_Rom_2754D7
gText_Rom_2754D7: @ 0x082754D7
	.string "では ちょうせんを はじめる まえに\nレポートを かきますが よろしいですか?$"
	.if (. - gText_Rom_2754D7) > 0x28
	.error "gText_Rom_2754D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754D7) < 0x28
	.space 0x28 - (. - gText_Rom_2754D7)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:366 BattleFrontier_BattleFactoryLobby_Text_WillHoldMonsForSafekeeping (+1 aliases)
	.globl gText_Rom_2754FF
gText_Rom_2754FF: @ 0x082754FF
	.string "それでは ポケモンを\nおあずかり します!$"
	.if (. - gText_Rom_2754FF) > 0x16
	.error "gText_Rom_2754FF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2754FF) < 0x16
	.space 0x16 - (. - gText_Rom_2754FF)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:370 BattleFrontier_BattleFactoryLobby_Text_StepThisWay (+1 aliases)
	.globl gText_Rom_275515
gText_Rom_275515: @ 0x08275515
	.string "さあさあ こちらに どうぞ!$"
	.if (. - gText_Rom_275515) > 0xf
	.error "gText_Rom_275515 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275515) < 0xf
	.space 0xf - (. - gText_Rom_275515)
	.endif

	@ data/text/battle_tent.inc:272 SlateportCity_BattleTentLobby_Text_ReturnRentalMonsSaveResults
	.globl gText_Rom_275524
gText_Rom_275524: @ 0x08275524
	.string "おつかれさまでした!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!$"
	.if (. - gText_Rom_275524) > 0x4d
	.error "gText_Rom_275524 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275524) < 0x4d
	.space 0x4d - (. - gText_Rom_275524)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:381 BattleFrontier_BattleFactoryLobby_Text_ReturnMons (+1 aliases)
	.globl gText_Rom_275571
gText_Rom_275571: @ 0x08275571
	.string "レンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!$"
	.if (. - gText_Rom_275571) > 0x25
	.error "gText_Rom_275571 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275571) < 0x25
	.space 0x25 - (. - gText_Rom_275571)
	.endif

	@ data/text/battle_tent.inc:286 SlateportCity_BattleTentLobby_Text_WonThreeMatchesReturnMons
	.globl gText_Rom_275596
gText_Rom_275596: @ 0x08275596
	.string "3れんしょう おめでとう ございます!\pレンタルポケモンと\nおあずかり していた ポケモンを\lこうかん します!\pレポートを かきますので\nしょうしょう おまちください!$"
	.if (. - gText_Rom_275596) > 0x56
	.error "gText_Rom_275596 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275596) < 0x56
	.space 0x56 - (. - gText_Rom_275596)
	.endif

	@ field-script:0x1FB0EE FieldScriptText_2755EC
	.globl gText_Rom_2755EC
gText_Rom_2755EC: @ 0x082755EC
	.string "3れんしょうを　きねんして\nこちらを　さしあげます！$"
	.if (. - gText_Rom_2755EC) > 0x1b
	.error "gText_Rom_2755EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2755EC) < 0x1b
	.space 0x1b - (. - gText_Rom_2755EC)
	.endif

	@ data/text/battle_tent.inc:298 SlateportCity_BattleTentLobby_Text_NoRoomInBagMakeRoom
	.globl gText_Rom_275607
gText_Rom_275607: @ 0x08275607
	.string "おやや?\nどうぐが いっぱい ですねー\pどうぐを せいり してから\nまた きてください!$"
	.if (. - gText_Rom_275607) > 0x2d
	.error "gText_Rom_275607 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275607) < 0x2d
	.space 0x2d - (. - gText_Rom_275607)
	.endif

	@ field-script:0x1FB176 FieldScriptText_275634
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275634
gText_Rom_275634: @ 0x08275634
	.string "おまちして　おりましたよ！\pちょうせんを　さいかいする　まえに\nレポートを　かきます！$"
	.if (. - gText_Rom_275634) != 0x2c
	.error "gText_Rom_275634 must retain its original byte length"
	.endif
	.globl gText_Rom_275642
	.set gText_Rom_275642, gText_Rom_275634 + 0xe

	@ data/text/battle_tent.inc:308 SlateportCity_BattleTentLobby_Text_DidntSaveBeforeQuitting
	.globl gText_Rom_275660
gText_Rom_275660: @ 0x08275660
	.string "おきゃくさまー!!\pぜんかい ちゃんと レポートを かいて\nしゅうりょう しませんでしたね!\pざんねんですが\nちょうせんは むこうと なります!$"
	.if (. - gText_Rom_275660) > 0x49
	.error "gText_Rom_275660 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275660) < 0x49
	.space 0x49 - (. - gText_Rom_275660)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:413 BattleFrontier_BattleFactoryLobby_Text_WellReturnMons (+1 aliases)
	.globl gText_Rom_2756A9
gText_Rom_2756A9: @ 0x082756A9
	.string "おきゃくさまの ポケモンを\nおかえしします!$"
	.if (. - gText_Rom_2756A9) > 0x17
	.error "gText_Rom_2756A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756A9) < 0x17
	.space 0x17 - (. - gText_Rom_2756A9)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:461 BattleFrontier_BattleArenaLobby_Text_ReceivedPrize (+6 aliases)
	.globl gText_Rom_2756C0
gText_Rom_2756C0: @ 0x082756C0
	.string "{PLAYER}は\n{STR_VAR_1}を もらった!$"
	.if (. - gText_Rom_2756C0) > 0xe
	.error "gText_Rom_2756C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756C0) < 0xe
	.space 0xe - (. - gText_Rom_2756C0)
	.endif

	@ data/text/battle_tent.inc:326 SlateportCity_BattleTentLobby_Text_RulesAreListed
	.globl gText_Rom_2756CE
gText_Rom_2756CE: @ 0x082756CE
	.string "バトルトレードの ルールが かかれてる!$"
	.if (. - gText_Rom_2756CE) > 0x15
	.error "gText_Rom_2756CE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756CE) < 0x15
	.space 0x15 - (. - gText_Rom_2756CE)
	.endif

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2756E3
gText_Rom_2756E3: @ 0x082756E3
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_2756E3) > 0x10
	.error "gText_Rom_2756E3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2756E3) < 0x10
	.space 0x10 - (. - gText_Rom_2756E3)
	.endif

	@ data/text/battle_tent.inc:333 SlateportCity_BattleTentLobby_Text_ExplainBasicRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2756F3
gText_Rom_2756F3: @ 0x082756F3
	.string "バトルトレードで つかうことの できる\nポケモンは 3ひき まで です\pレンタルするとき トレードするとき\nどちらの ときも\lおなじ しゅるいの ポケモンを\l2ひき いじょう もつことは できません$"
	.if (. - gText_Rom_2756F3) != 0x64
	.error "gText_Rom_2756F3 must retain its original byte length"
	.endif
	.globl gText_Rom_275753
	.set gText_Rom_275753, gText_Rom_2756F3 + 0x60

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:523 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapPartnerRules (+1 aliases)
	.globl gText_Rom_275757
gText_Rom_275757: @ 0x08275757
	.string "トレードが できる あいては\nあなたが たたかいで\lたおした トレーナーです\pトレードで うけとる ことが できるのは\nトレーナーが つかっていた ポケモンです$"
	.if (. - gText_Rom_275757) > 0x51
	.error "gText_Rom_275757 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275757) < 0x51
	.space 0x51 - (. - gText_Rom_275757)
	.endif

	@ data/text/battle_tent.inc:348 SlateportCity_BattleTentLobby_Text_ExplainSwapNumberRules
	.globl gText_Rom_2757A8
gText_Rom_2757A8: @ 0x082757A8
	.string "いちど たたかいに かつ たびに\n1かい 1ひき だけ ポケモンを\lトレード することが できます\p1かいの ちょうせんで\nトレードが できるのは\l2にんめの トレーナーまで です$"
	.if (. - gText_Rom_2757A8) > 0x5b
	.error "gText_Rom_2757A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2757A8) < 0x5b
	.space 0x5b - (. - gText_Rom_2757A8)
	.endif

	@ data/maps/BattleFrontier_BattleFactoryLobby/scripts.inc:536 BattleFrontier_BattleFactoryLobby_Text_ExplainSwapNotesRules (+1 aliases)
	.globl gText_Rom_275803
gText_Rom_275803: @ 0x08275803
	.string "トレードを おこなう ときには\n2つ ちゅういする ことが あります\pその1 トレードを おこなう ときは\nあいてから うけとる ポケモンの\lつよさは かくにん できません\pその2 ちょうせんを はじめた ときに\nかりた レンタルポケモンの じゅんばんが\lトレードの あとの たたかいにも\lひきつがれます$"
	.if (. - gText_Rom_275803) > 0x99
	.error "gText_Rom_275803 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275803) < 0x99
	.space 0x99 - (. - gText_Rom_275803)
	.endif

	@ data/text/battle_tent.inc:367 SlateportCity_BattleTentLobby_Text_ExplainMonRules
	.globl gText_Rom_27589C
gText_Rom_27589C: @ 0x0827589C
	.string "バトルテント カイナの ポケモンは\nすべて レンタルポケモン です\pレンタルポケモンの レベルは\nすべて 30に なります$"
	.if (. - gText_Rom_27589C) > 0x3e
	.error "gText_Rom_27589C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27589C) < 0x3e
	.space 0x3e - (. - gText_Rom_27589C)
	.endif
	.incbin "baserom.gba", 0x2758da, 0x1e

	@ data/maps/BattleFrontier_BattleArenaLobby/scripts.inc:521 BattleFrontier_BattleArenaLobby_Text_ReadWhichHeading (+7 aliases)
	.globl gText_Rom_2758F8
gText_Rom_2758F8: @ 0x082758F8
	.string "どの せつめいを よみますか?$"
	.if (. - gText_Rom_2758F8) > 0x10
	.error "gText_Rom_2758F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2758F8) < 0x10
	.space 0x10 - (. - gText_Rom_2758F8)
	.endif

	@ data/text/battle_tent.inc:383 VerdanturfTown_BattleTentLobby_Text_ExplainBasicRules
	.globl gText_Rom_275908
gText_Rom_275908: @ 0x08275908
	.string "バトルテント シダケかいじょう では\nポケモンたちが じぶんで\lかんがえ たたかいます\pじゅんすいな やせいの ときとは ちがって\nひとと くらしている ポケモンは\lせいかくに よって どんな こうどうを\lするかが かわるのです$"
	.if (. - gText_Rom_275908) > 0x73
	.error "gText_Rom_275908 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275908) < 0x73
	.space 0x73 - (. - gText_Rom_275908)
	.endif

	@ data/text/battle_tent.inc:393 VerdanturfTown_BattleTentLobby_Text_ExplainNatureRules
	.globl gText_Rom_27597B
gText_Rom_27597B: @ 0x0827597B
	.string "とにかく こうげきが\nすきな せいかく\pじぶんの みを まもることが\nすきな せいかく\pあいてを こまらせたり\nかわったことが すきな せいかく\pポケモンは せいかくに よって\nすきで とくいな わざと\lきらいで にがてな わざが ちがいます$"
	.if (. - gText_Rom_27597B) > 0x7a
	.error "gText_Rom_27597B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27597B) < 0x7a
	.space 0x7a - (. - gText_Rom_27597B)
	.endif

	@ data/text/battle_tent.inc:405 VerdanturfTown_BattleTentLobby_Text_ExplainMoveRules
	.globl gText_Rom_2759F5
gText_Rom_2759F5: @ 0x082759F5
	.string "あいてに むかって じぶんから\nちょくせつ ダメージを あたえる\lこうげきの わざ\pたたかいの じゅんびや キズついた からだの\nかいふくを する ぼうぎょの わざ\pあいての のうりょくを さげたり\nどくや まひに したり など\lすこし かわった ことを する わざ\pポケモンは すべての わざを\nおおきく 3つの しゅるいに わけて\lどんな わざを だすか かんがえて います$"
	.if (. - gText_Rom_2759F5) > 0xbe
	.error "gText_Rom_2759F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2759F5) < 0xbe
	.space 0xbe - (. - gText_Rom_2759F5)
	.endif

	@ data/text/battle_tent.inc:419 VerdanturfTown_BattleTentLobby_Text_ExplainUnderpoweredRules
	.globl gText_Rom_275AB3
gText_Rom_275AB3: @ 0x08275AB3
	.string "トレーナーの めいれいを うけて いない\nポケモンは うまく わざを\lだせない ことが あります\pポケモンは きらいな わざを\nつかうのは とくいでは ありません\pせいかくに あわない わざ ばかりを\nおぼえさせて いると たたかいで\lポケモンが じぶんの ちからを はっき\lできない ことが おおく なります$"
	.if (. - gText_Rom_275AB3) > 0x9c
	.error "gText_Rom_275AB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275AB3) < 0x9c
	.space 0x9c - (. - gText_Rom_275AB3)
	.endif

	@ data/text/battle_tent.inc:431 VerdanturfTown_BattleTentLobby_Text_ExplainWhenInDangerRules
	.globl gText_Rom_275B4F
gText_Rom_275B4F: @ 0x08275B4F
	.string "ポケモンの せいかくの なかには\nピンチに なることで もともとの\lせいかくとは ちがう タイプの\lわざを つかう ように\lなるものが あります\pピンチに なって すこし かわった\nこうどうを はじめた ポケモンには\lじゅうぶん ちゅうい しましょう$"
	.if (. - gText_Rom_275B4F) > 0x7e
	.error "gText_Rom_275B4F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275B4F) < 0x7e
	.space 0x7e - (. - gText_Rom_275B4F)
	.endif

	@ data/text/battle_tent.inc:441 BattleTentLobby_Text_ExplainLevelRules
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_275BCD
gText_Rom_275BCD: @ 0x08275BCD
	.string "バトルテントでは\nあなたの ポケモンの レベルに あわせて\lたいせんする トレーナーの ポケモンの\lレベルが かわります\pただし レベル30より ひくい レベルの\nポケモンを つれた トレーナーが\lとうじょう することは ありません$"
	.if (. - gText_Rom_275BCD) != 0x75
	.error "gText_Rom_275BCD must retain its original byte length"
	.endif
	.globl gText_Rom_275C3E
	.set gText_Rom_275C3E, gText_Rom_275BCD + 0x71

	@ data/text/battle_tent.inc:374 VerdanturfTown_BattleTentLobby_Text_RulesAreListed2 (+1 aliases)
	.globl gText_Rom_275C42
gText_Rom_275C42: @ 0x08275C42
	.string "バトルテント シダケかいじょうの\nルールが かかれている!$"
	.if (. - gText_Rom_275C42) > 0x1e
	.error "gText_Rom_275C42 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C42) < 0x1e
	.space 0x1e - (. - gText_Rom_275C42)
	.endif

	@ data/text/event_ticket_2.inc:1 EventTicket_Text_OldSeaMapTooFar
	.globl gText_Rom_275C60
gText_Rom_275C60: @ 0x08275C60
	.string "なんだ?\nボロっちい ちずを もってきたってのは\lおまえさんか? みせてみな!\p…… …… ……\pこりゃ また ずいぶん とおいなあ\nわりいが ほかを あたったほうが……$"
	.if (. - gText_Rom_275C60) > 0x56
	.error "gText_Rom_275C60 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275C60) < 0x56
	.space 0x56 - (. - gText_Rom_275C60)
	.endif

	@ data/text/event_ticket_2.inc:9 EventTicket_Text_BrineyHoldOnASecond
	.globl gText_Rom_275CB6
gText_Rom_275CB6: @ 0x08275CB6
	.string "ハギ『こら! わしの おんじんの\nねがいを ことわるとは なにごとだ!$"
	.if (. - gText_Rom_275CB6) > 0x24
	.error "gText_Rom_275CB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CB6) < 0x24
	.space 0x24 - (. - gText_Rom_275CB6)
	.endif

	@ data/text/event_ticket_2.inc:13 EventTicket_Text_BrineyLetsSail
	.globl gText_Rom_275CDA
gText_Rom_275CDA: @ 0x08275CDA
	.string "{PLAYER}{KUN} すまなかったね\nこのふねを たよって きて くれたのに……\lもちろん いますぐに しゅっこうだ!\pさあいくぞ!\nかいずに ある しまへ しゅっぱつ!$"
	.if (. - gText_Rom_275CDA) > 0x50
	.error "gText_Rom_275CDA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275CDA) < 0x50
	.space 0x50 - (. - gText_Rom_275CDA)
	.endif

	@ data/text/event_ticket_2.inc:20 EventTicket_Text_OddTicketGetOnBoard
	.globl gText_Rom_275D2A
gText_Rom_275D2A: @ 0x08275D2A
	.string "みょうな チケットを\nもってきたのは おまえさんか?\pおまえが いこうと しているのは\nとおく はなれた ちほうの しま……\lそこには なにが まっているのか\lしって いるやつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!$"
	.if (. - gText_Rom_275D2A) > 0x7b
	.error "gText_Rom_275D2A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275D2A) < 0x7b
	.space 0x7b - (. - gText_Rom_275D2A)
	.endif

	@ data/text/event_ticket_2.inc:30 FarawayIsland_Entrance_Text_SailorReturn
	.globl gText_Rom_275DA5
gText_Rom_275DA5: @ 0x08275DA5
	.string "まったく ハギ せんちょうの\nきまぐれにも まいるよなあ……\pもう ミナモへ かえるのかい?$"
	.if (. - gText_Rom_275DA5) > 0x2f
	.error "gText_Rom_275DA5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DA5) < 0x2f
	.space 0x2f - (. - gText_Rom_275DA5)
	.endif

	@ data/text/event_ticket_2.inc:35 BirthIsland_Harbor_Text_SailorReturn
	.globl gText_Rom_275DD4
gText_Rom_275DD4: @ 0x08275DD4
	.string "ふしぎな かたちの しまだなあ\nもう ミナモへ かえるか?$"
	.if (. - gText_Rom_275DD4) > 0x1e
	.error "gText_Rom_275DD4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DD4) < 0x1e
	.space 0x1e - (. - gText_Rom_275DD4)
	.endif

	@ data/text/event_ticket_2.inc:39 EventTicket_Text_OddTicketsWhereTo
	.globl gText_Rom_275DF2
gText_Rom_275DF2: @ 0x08275DF2
	.string "ヘンテコな チケットを\nいくつも もってきたのは おまえさんか?\p…… …… ……ふむ\pこいつらで いける ところは\nどこも ここから とおい しま\lそこでは なにが おきるのか\lなにが まっているのか\lしっている やつは いねえ……\lううむ ふなのりの ちが さわぐぜ!\pさあ のりな!\nまずは どこから いってみるかい?$"
	.if (. - gText_Rom_275DF2) > 0xa3
	.error "gText_Rom_275DF2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275DF2) < 0xa3
	.space 0xa3 - (. - gText_Rom_275DF2)
	.endif

	@ data/text/event_ticket_2.inc:52 NavelRock_Harbor_Text_SailorReturn
	.globl gText_Rom_275E95
gText_Rom_275E95: @ 0x08275E95
	.string "な…… なんか おくふかくから\nひくい うなりが きこえたような……\pだ だいじょうぶか?\nもう かえった ほうが いいんじゃないか?$"
	.if (. - gText_Rom_275E95) > 0x44
	.error "gText_Rom_275E95 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275E95) < 0x44
	.space 0x44 - (. - gText_Rom_275E95)
	.endif

	@ data/text/event_ticket_2.inc:58 FarawayIsland_Entrance_Text_Sign
	.globl gText_Rom_275ED9
gText_Rom_275ED9: @ 0x08275ED9
	.string "なんねんも まえに かかれたような\nふるい かきおきが ある……\p……がつ 6か\nここに たちいる にんげ……が\lふたたび ……らわれると すれば\lこころ やさし……で あらんことを\p……こに その ねがいを しるし\nこの ……を あとにする\p……ジ$"
	.if (. - gText_Rom_275ED9) > 0x7e
	.error "gText_Rom_275ED9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275ED9) < 0x7e
	.space 0x7e - (. - gText_Rom_275ED9)
	.endif

	@ data/text/event_ticket_2.inc:69 FarawayIsland_Interior_Text_Mew
	.globl gText_Rom_275F57
gText_Rom_275F57: @ 0x08275F57
	.string "ミュー……$"
	.if (. - gText_Rom_275F57) > 0x6
	.error "gText_Rom_275F57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F57) < 0x6
	.space 0x6 - (. - gText_Rom_275F57)
	.endif

	@ data/text/move_tutors.inc:1 MoveTutor_Text_ThisMoveCanOnlyBeLearnedOnce
	.globl gText_Rom_275F5D
gText_Rom_275F5D: @ 0x08275F5D
	.string "この わざを おしえて もらえるのは\nいちど だけですが いいですか?$"
	.if (. - gText_Rom_275F5D) > 0x24
	.error "gText_Rom_275F5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F5D) < 0x24
	.space 0x24 - (. - gText_Rom_275F5D)
	.endif

	@ field-script:0x27683F FieldScriptText_275F81
	.globl gText_Rom_275F81
gText_Rom_275F81: @ 0x08275F81
	.string "ふふーん\nおれの　ポケモンは　すごいのさ！\lどの　ポケモンよりも　かっこいいのさ！\p……って　いばってたら\nかいちょうに　おこられちゃった\pもう　いばらない　ことに　したから\nかわりに　おまえの　ポケモンに\lいばる　わざを　おしえて　やってもいいぜ$"
	.if (. - gText_Rom_275F81) > 0x7d
	.error "gText_Rom_275F81 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275F81) < 0x7d
	.space 0x7d - (. - gText_Rom_275F81)
	.endif

	@ data/text/move_tutors.inc:14 MoveTutor_Text_SwaggerDeclined
	.globl gText_Rom_275FFE
gText_Rom_275FFE: @ 0x08275FFE
	.string "えー\nなんだよ つきあい わるいな$"
	.if (. - gText_Rom_275FFE) > 0x12
	.error "gText_Rom_275FFE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_275FFE) < 0x12
	.space 0x12 - (. - gText_Rom_275FFE)
	.endif

	@ data/text/move_tutors.inc:18 MoveTutor_Text_SwaggerWhichMon
	.globl gText_Rom_276010
gText_Rom_276010: @ 0x08276010
	.string "おう!\nどの ポケモンが いばりたいんだ?$"
	.if (. - gText_Rom_276010) > 0x16
	.error "gText_Rom_276010 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276010) < 0x16
	.space 0x16 - (. - gText_Rom_276010)
	.endif

	@ data/text/move_tutors.inc:22 MoveTutor_Text_SwaggerTaught
	.globl gText_Rom_276026
gText_Rom_276026: @ 0x08276026
	.string "こんどっから いばる かわりに\nじまん するだけに しておくよ……$"
	.if (. - gText_Rom_276026) > 0x22
	.error "gText_Rom_276026 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276026) < 0x22
	.space 0x22 - (. - gText_Rom_276026)
	.endif

	@ data/text/move_tutors.inc:26 MoveTutor_Text_RolloutTeach
	.globl gText_Rom_276048
gText_Rom_276048: @ 0x08276048
	.string "ねえ ここから あっちに むかって\nいちども まがらずに ずーっと\lあるいて いけるって しってた?\lぼく なら ころがって いけるかも……!\pきみの ポケモンも ころがって みる?\nころがる なら おしえて あげられるよ$"
	.if (. - gText_Rom_276048) > 0x70
	.error "gText_Rom_276048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276048) < 0x70
	.space 0x70 - (. - gText_Rom_276048)
	.endif

	@ data/text/move_tutors.inc:34 MoveTutor_Text_RolloutDeclined
	.globl gText_Rom_2760B8
gText_Rom_2760B8: @ 0x082760B8
	.string "えんりょ いらないのに!\nごろ ごろ$"
	.if (. - gText_Rom_2760B8) > 0x13
	.error "gText_Rom_2760B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760B8) < 0x13
	.space 0x13 - (. - gText_Rom_2760B8)
	.endif

	@ data/text/move_tutors.inc:38 MoveTutor_Text_RolloutWhichMon
	.globl gText_Rom_2760CB
gText_Rom_2760CB: @ 0x082760CB
	.string "えへへ いいよ!\nぼく そっくりの ポケモンだと いいな$"
	.if (. - gText_Rom_2760CB) > 0x1d
	.error "gText_Rom_2760CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760CB) < 0x1d
	.space 0x1d - (. - gText_Rom_2760CB)
	.endif

	@ data/text/move_tutors.inc:42 MoveTutor_Text_RolloutTaught
	.globl gText_Rom_2760E8
gText_Rom_2760E8: @ 0x082760E8
	.string "くさに ねころがると しあわせだなー\nごろ ごろ$"
	.if (. - gText_Rom_2760E8) > 0x19
	.error "gText_Rom_2760E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2760E8) < 0x19
	.space 0x19 - (. - gText_Rom_2760E8)
	.endif

	@ data/text/move_tutors.inc:46 MoveTutor_Text_FuryCutterTeach
	.globl gText_Rom_276101
gText_Rom_276101: @ 0x08276101
	.string "おなじ わざをさ\nつづけて なんども だすと\lどんどん つよくなる わざが あるの!\lしかも むしタイプで かっこいいの!\pれんぞくぎりって いうんだけど\nおぼえて みたい?$"
	.if (. - gText_Rom_276101) > 0x58
	.error "gText_Rom_276101 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276101) < 0x58
	.space 0x58 - (. - gText_Rom_276101)
	.endif

	@ data/text/move_tutors.inc:54 MoveTutor_Text_FuryCutterDeclined
	.globl gText_Rom_276159
gText_Rom_276159: @ 0x08276159
	.string "きが あわないねぇ$"
	.if (. - gText_Rom_276159) > 0xa
	.error "gText_Rom_276159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276159) < 0xa
	.space 0xa - (. - gText_Rom_276159)
	.endif

	@ data/text/move_tutors.inc:57 MoveTutor_Text_FuryCutterWhichMon
	.globl gText_Rom_276163
gText_Rom_276163: @ 0x08276163
	.string "わーい!\nじゃ おぼえさせる ポケモンを おしえてね$"
	.if (. - gText_Rom_276163) > 0x1b
	.error "gText_Rom_276163 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276163) < 0x1b
	.space 0x1b - (. - gText_Rom_276163)
	.endif

	@ data/text/move_tutors.inc:61 MoveTutor_Text_FuryCutterTaught
	.globl gText_Rom_27617E
gText_Rom_27617E: @ 0x0827617E
	.string "れんぞくして あたるか どうかの\nスリルが たのしいんだよねぇ$"
	.if (. - gText_Rom_27617E) > 0x20
	.error "gText_Rom_27617E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27617E) < 0x20
	.space 0x20 - (. - gText_Rom_27617E)
	.endif

	@ data/text/move_tutors.inc:65 MoveTutor_MimicTeach
	.globl gText_Rom_27619E
gText_Rom_27619E: @ 0x0827619E
	.string "おお おわかいの!\nわしは こども じゃが\lこのまちの じいちゃんや ばあちゃんの\lはなしかたを ものまね しておるのじゃ!\pどうかね? おわかいの\nおぬしの ポケモンに わしが\lものまねを おしえて やろうかね?$"
	.if (. - gText_Rom_27619E) > 0x6c
	.error "gText_Rom_27619E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27619E) < 0x6c
	.space 0x6c - (. - gText_Rom_27619E)
	.endif

	@ data/text/move_tutors.inc:74 MoveTutor_MimicDeclined
	.globl gText_Rom_27620A
gText_Rom_27620A: @ 0x0827620A
	.string "ちぇっ なーんだ!\nボク ものまね おしえたいのにな!$"
	.if (. - gText_Rom_27620A) > 0x1c
	.error "gText_Rom_27620A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27620A) < 0x1c
	.space 0x1c - (. - gText_Rom_27620A)
	.endif

	@ data/text/move_tutors.inc:78 MoveTutor_Text_MimicWhichMon
	.globl gText_Rom_276226
gText_Rom_276226: @ 0x08276226
	.string "ふぉっ ふぉっ! よかろう!\nおしえさせる ポケモンを みせてみぃ$"
	.if (. - gText_Rom_276226) > 0x22
	.error "gText_Rom_276226 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276226) < 0x22
	.space 0x22 - (. - gText_Rom_276226)
	.endif

	@ data/text/move_tutors.inc:82 MoveTutor_Text_MimicTaught
	.globl gText_Rom_276248
gText_Rom_276248: @ 0x08276248
	.string "ものまねは おくの ふかい わざじゃ!\nボ… わしの ように\lうまく できるかな?$"
	.if (. - gText_Rom_276248) > 0x2a
	.error "gText_Rom_276248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276248) < 0x2a
	.space 0x2a - (. - gText_Rom_276248)
	.endif

	@ data/text/move_tutors.inc:87 MoveTutor_Text_MetronomeTeach
	.globl gText_Rom_276272
gText_Rom_276272: @ 0x08276272
	.string "あーん ほしいものが いっぱい!\nでも おこづかいは なくなっちゃったし……\pゆびを ふれば まほうで\nおこづかい でてくれば いーのにな!\lなんてね エヘヘ……\pしかたが ないから\nあなたの ポケモンに\lゆびをふる でも おしえて あげよっか?$"
	.if (. - gText_Rom_276272) > 0x7c
	.error "gText_Rom_276272 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276272) < 0x7c
	.space 0x7c - (. - gText_Rom_276272)
	.endif

	@ data/text/move_tutors.inc:97 MoveTutor_Text_MetronomeDeclined
	.globl gText_Rom_2762EE
gText_Rom_2762EE: @ 0x082762EE
	.string "そっか\nきが むいたら またおいでよ!$"
	.if (. - gText_Rom_2762EE) > 0x14
	.error "gText_Rom_2762EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2762EE) < 0x14
	.space 0x14 - (. - gText_Rom_2762EE)
	.endif

	@ data/text/move_tutors.inc:101 MoveTutor_Text_MetronomeWhichMon
	.globl gText_Rom_276302
gText_Rom_276302: @ 0x08276302
	.string "うん! じゃ おしえるね\nどのコが いいのかな?$"
	.if (. - gText_Rom_276302) > 0x19
	.error "gText_Rom_276302 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276302) < 0x19
	.space 0x19 - (. - gText_Rom_276302)
	.endif

	@ data/text/move_tutors.inc:105 MoveTutor_Text_MetronomeTaught
	.globl gText_Rom_27631B
gText_Rom_27631B: @ 0x0827631B
	.string "ゆびをふると ステキな ことが\nいっぱい おきるんだよー!\pわたしたちも つかえたら いーのにね!$"
	.if (. - gText_Rom_27631B) > 0x32
	.error "gText_Rom_27631B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27631B) < 0x32
	.space 0x32 - (. - gText_Rom_27631B)
	.endif

	@ data/text/move_tutors.inc:110 MoveTutor_Text_SleepTalkTeach
	.globl gText_Rom_27634D
gText_Rom_27634D: @ 0x0827634D
	.string "ふん…… ばあさんめ\nめざめるパワー などに\lたより おって……\pワシと いっしょに おひるね して\nねごとでも いってたほうが たのしいのに\pもう あんたの ポケモンでも ええわ\nねごとを おぼえて つかってみんか?$"
	.if (. - gText_Rom_27634D) > 0x6e
	.error "gText_Rom_27634D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27634D) < 0x6e
	.space 0x6e - (. - gText_Rom_27634D)
	.endif

	@ data/text/move_tutors.inc:119 MoveTutor_Text_SleepTalkDeclined
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2763BB
gText_Rom_2763BB: @ 0x082763BB
	.string "そうかい そうかい……\nみんな めざめるパワーが だいすきかい$"
	.if (. - gText_Rom_2763BB) != 0x20
	.error "gText_Rom_2763BB must retain its original byte length"
	.endif
	.globl gText_Rom_2763D7
	.set gText_Rom_2763D7, gText_Rom_2763BB + 0x1c

	@ data/text/move_tutors.inc:123 MoveTutor_Text_SleepTalkWhichMon
	.globl gText_Rom_2763DB
gText_Rom_2763DB: @ 0x082763DB
	.string "むぉう! ものわかりの いい こどもよ!\nさて ポケモンは どいつが いいかな?$"
	.if (. - gText_Rom_2763DB) > 0x29
	.error "gText_Rom_2763DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2763DB) < 0x29
	.space 0x29 - (. - gText_Rom_2763DB)
	.endif

	@ data/text/move_tutors.inc:127 MoveTutor_Text_SleepTalkTaught
	.globl gText_Rom_276404
gText_Rom_276404: @ 0x08276404
	.string "ワシ ばあさんの コイン\nいちども あてたことが なくてな……\lねごとでも ええから あたらんかな$"
	.if (. - gText_Rom_276404) > 0x32
	.error "gText_Rom_276404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276404) < 0x32
	.space 0x32 - (. - gText_Rom_276404)
	.endif

	@ field-script:0x276AAF FieldScriptText_276436
	.globl gText_Rom_276436
gText_Rom_276436: @ 0x08276436
	.string "ふう\nこうやって　おくじょうから\lひろい　せかいを　みていると……\pなんにんもの　じぶんが　いて\nいくつもの　じんせいを　たのしめたらなー\lって　おもうの！\lムリな　はなしだけどね　うふふ\pそうだわ　あなたの　ポケモンちゃん！\nみがわりの　わざ　おぼえてみない？$"
	.if (. - gText_Rom_276436) > 0x84
	.error "gText_Rom_276436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276436) < 0x84
	.space 0x84 - (. - gText_Rom_276436)
	.endif

	@ data/text/move_tutors.inc:143 MoveTutor_Text_SubstituteDeclined
	.globl gText_Rom_2764BA
gText_Rom_2764BA: @ 0x082764BA
	.string "あら そう?\nポケモンなら じぶんの ぶんしんを\lつくる ことが できるのに$"
	.if (. - gText_Rom_2764BA) > 0x27
	.error "gText_Rom_2764BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764BA) < 0x27
	.space 0x27 - (. - gText_Rom_2764BA)
	.endif

	@ data/text/move_tutors.inc:148 MoveTutor_Text_SubstituteWhichMon
	.globl gText_Rom_2764E1
gText_Rom_2764E1: @ 0x082764E1
	.string "うふふ\nどの ポケモンちゃんが いいかしら?$"
	.if (. - gText_Rom_2764E1) > 0x17
	.error "gText_Rom_2764E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764E1) < 0x17
	.space 0x17 - (. - gText_Rom_2764E1)
	.endif

	@ data/text/move_tutors.inc:152 MoveTutor_Text_SubstituteTaught
	.globl gText_Rom_2764F8
gText_Rom_2764F8: @ 0x082764F8
	.string "わたしたち にんげんは\nじぶんの じんせいを\lおもいきり たのしまなきゃ ね!\lあなたも そうなるように いのってる!$"
	.if (. - gText_Rom_2764F8) > 0x3c
	.error "gText_Rom_2764F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2764F8) < 0x3c
	.space 0x3c - (. - gText_Rom_2764F8)
	.endif

	@ field-script:0x276B17 FieldScriptText_276534
	.globl gText_Rom_276534
gText_Rom_276534: @ 0x08276534
	.string "もう　できんわ！\pぜったい　ムリだわ！\pかくとうタイプの　オレは\nトクサネの　ジムでは\lぜんぜん　かてんわ！\pちきしょーっ！　ボカ　ボカ！\nボカ　ボカ！　ボカ　ボカ！\pなんだよ\nそんな　めで　みるなよ！\lじめんを　なぐってる　だけだろ！\pそれとも　おまえの　ポケモンに\nばくれつパンチを　おしえて　ほしいのかよ？$"
	.if (. - gText_Rom_276534) > 0x9d
	.error "gText_Rom_276534 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276534) < 0x9d
	.space 0x9d - (. - gText_Rom_276534)
	.endif

	@ data/text/move_tutors.inc:171 MoveTutor_Text_DynamicPunchDeclined
	.globl gText_Rom_2765D1
gText_Rom_2765D1: @ 0x082765D1
	.string "ちきしょー おまえまで\nオレを ばかに するかっ!?\lボカ ボカ!$"
	.if (. - gText_Rom_2765D1) > 0x22
	.error "gText_Rom_2765D1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765D1) < 0x22
	.space 0x22 - (. - gText_Rom_2765D1)
	.endif

	@ data/text/move_tutors.inc:176 MoveTutor_Text_DynamicPunchWhichMon
	.globl gText_Rom_2765F3
gText_Rom_2765F3: @ 0x082765F3
	.string "うぉー! ほんとか! いいやつだな!\nどのポケモンに おしえれば いい?$"
	.if (. - gText_Rom_2765F3) > 0x25
	.error "gText_Rom_2765F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2765F3) < 0x25
	.space 0x25 - (. - gText_Rom_2765F3)
	.endif

	@ data/text/move_tutors.inc:180 MoveTutor_Text_DynamicPunchTaught
	.globl gText_Rom_276618
gText_Rom_276618: @ 0x08276618
	.string "なあ ばくれつパンチ つかって\nトクサネジムで かって きてくれよ!$"
	.if (. - gText_Rom_276618) > 0x23
	.error "gText_Rom_276618 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276618) < 0x23
	.space 0x23 - (. - gText_Rom_276618)
	.endif

	@ field-script:0x276B7F FieldScriptText_27663B
	.globl gText_Rom_27663B
gText_Rom_27663B: @ 0x0827663B
	.string "あーあ\nルネシティの　ジムリーダーって\lすっごく　すてきだから\lライバルが　いっぱい　なのよねー\pこの　あたしが　すてみで　ぶつかっても\nダメだったわ！\pねえ　あなた！\nせっかく　だから　この　あたしの\lじきでんの　すてみタックル！\lあなたの　ポケモンに　おしえさせてよ！$"
	.if (. - gText_Rom_27663B) > 0x89
	.error "gText_Rom_27663B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27663B) < 0x89
	.space 0x89 - (. - gText_Rom_27663B)
	.endif

	@ data/text/move_tutors.inc:195 MoveTutor_Text_DoubleEdgeDeclined
	.globl gText_Rom_2766C4
gText_Rom_2766C4: @ 0x082766C4
	.string "うん もう!\nあなたに まで ふられちゃったわ$"
	.if (. - gText_Rom_2766C4) > 0x18
	.error "gText_Rom_2766C4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766C4) < 0x18
	.space 0x18 - (. - gText_Rom_2766C4)
	.endif

	@ data/text/move_tutors.inc:199 MoveTutor_Text_DoubleEdgeWhichMon
	.globl gText_Rom_2766DC
gText_Rom_2766DC: @ 0x082766DC
	.string "ん じゃあ\nどの ポケモンが いいか きめてよ$"
	.if (. - gText_Rom_2766DC) > 0x18
	.error "gText_Rom_2766DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766DC) < 0x18
	.space 0x18 - (. - gText_Rom_2766DC)
	.endif

	@ data/text/move_tutors.inc:203 MoveTutor_Text_DoubleEdgeTaught
	.globl gText_Rom_2766F4
gText_Rom_2766F4: @ 0x082766F4
	.string "もう いいわっ!\nあたしも こいを すてて\lつよい オンナに なってやるっ!$"
	.if (. - gText_Rom_2766F4) > 0x27
	.error "gText_Rom_2766F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2766F4) < 0x27
	.space 0x27 - (. - gText_Rom_2766F4)
	.endif

	@ data/text/move_tutors.inc:208 MoveTutor_Text_ExplosionTeach
	.globl gText_Rom_27671B
gText_Rom_27671B: @ 0x0827671B
	.string "ぼかぁ こんな イナカで\nいつまでも くすぶっとる つもりは\lまったく ないんじゃあー!\pみとれよ いつか トカイに でて\nドッカーンと はでに やって やるわい!\pおいっ! おまえ きいとったん なら\nけいきよく だいばくはつを おしえさせろ!$"
	.if (. - gText_Rom_27671B) > 0x7c
	.error "gText_Rom_27671B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27671B) < 0x7c
	.space 0x7c - (. - gText_Rom_27671B)
	.endif

	@ data/text/move_tutors.inc:217 MoveTutor_Text_ExplosionDeclined
	.globl gText_Rom_276797
gText_Rom_276797: @ 0x08276797
	.string "がーっ!\nイナカもん だからって ことわるなあ!$"
	.if (. - gText_Rom_276797) > 0x19
	.error "gText_Rom_276797 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276797) < 0x19
	.space 0x19 - (. - gText_Rom_276797)
	.endif

	@ data/text/move_tutors.inc:221 MoveTutor_Text_ExplosionWhichMon
	.globl gText_Rom_2767B0
gText_Rom_2767B0: @ 0x082767B0
	.string "ぃよーし ドッカーンと おぼえさせるか!\nどの ポケモンが ぶちかますんか?$"
	.if (. - gText_Rom_2767B0) > 0x27
	.error "gText_Rom_2767B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767B0) < 0x27
	.space 0x27 - (. - gText_Rom_2767B0)
	.endif

	@ data/text/move_tutors.inc:225 MoveTutor_Text_ExplosionTaught
	.globl gText_Rom_2767D7
gText_Rom_2767D7: @ 0x082767D7
	.string "いつも ポケモンに ばっか\nだいばくはつを おしえとって\lかんじんの ぼくは いつまでも\lばくはつ できん……\pでも ほんとは\nこのまちに いつまでも いたいから\lかも しれん……$"
	.if (. - gText_Rom_2767D7) > 0x5b
	.error "gText_Rom_2767D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2767D7) < 0x5b
	.space 0x5b - (. - gText_Rom_2767D7)
	.endif
	.incbin "baserom.gba", 0x276832, 0x47d
	.globl gUnknown_8276CAF
gUnknown_8276CAF: @ 0x08276CAF
	.incbin "baserom.gba", 0x276caf, 0x5d
	.globl gUnknown_8276D0C
gUnknown_8276D0C: @ 0x08276D0C
	.incbin "baserom.gba", 0x276d0c, 0x1a

	@ field-script:0x276D3F FieldScriptText_276D26
	.globl gText_Rom_276D26
gText_Rom_276D26: @ 0x08276D26
	.string "テストよう　メッセージです！\nかんばん　です$"
	.if (. - gText_Rom_276D26) > 0x17
	.error "gText_Rom_276D26 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276D26) < 0x17
	.space 0x17 - (. - gText_Rom_276D26)
	.endif
	.globl gUnknown_8276D3D
gUnknown_8276D3D: @ 0x08276D3D
	.incbin "baserom.gba", 0x276d3d, 0x22

	@ src/frontier_util.c:116 frontier_util_line_116
	.globl gText_Rom_276D5F
gText_Rom_276D5F: @ 0x08276D5F
	.string "ありがとう……$"
	.if (. - gText_Rom_276D5F) > 0x8
	.error "gText_Rom_276D5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276D5F) < 0x8
	.space 0x8 - (. - gText_Rom_276D5F)
	.endif
	.incbin "baserom.gba", 0x276d67, 0xaf

	@ src/frontier_util.c:223 frontier_util_line_223
	.globl gText_Rom_276E16
gText_Rom_276E16: @ 0x08276E16
	.string "くっ……$"
	.if (. - gText_Rom_276E16) > 0x5
	.error "gText_Rom_276E16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276E16) < 0x5
	.space 0x5 - (. - gText_Rom_276E16)
	.endif
	.incbin "baserom.gba", 0x276e1b, 0x13d
	.globl gUnknown_8276F58
gUnknown_8276F58: @ 0x08276F58

	@ data/text/save.inc:2 gText_ConfirmSave
	.globl gText_Rom_276F58
gText_Rom_276F58: @ 0x08276F58
	.string "ここまでの かつやくを\nポケモンレポートに かきこみますか?$"
	.if (. - gText_Rom_276F58) > 0x1f
	.error "gText_Rom_276F58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F58) < 0x1f
	.space 0x1f - (. - gText_Rom_276F58)
	.endif
	.globl gUnknown_8276F77
gUnknown_8276F77: @ 0x08276F77

	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_Rom_276F77
gText_Rom_276F77: @ 0x08276F77
	.string "まえに かかれた レポートに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_276F77) > 0x20
	.error "gText_Rom_276F77 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F77) < 0x20
	.space 0x20 - (. - gText_Rom_276F77)
	.endif
	.globl gUnknown_8276F97
gUnknown_8276F97: @ 0x08276F97

	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_276F97
gText_Rom_276F97: @ 0x08276F97
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください$"
	.if (. - gText_Rom_276F97) > 0x24
	.error "gText_Rom_276F97 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276F97) < 0x24
	.space 0x24 - (. - gText_Rom_276F97)
	.endif
	.globl gUnknown_8276FBB
gUnknown_8276FBB: @ 0x08276FBB
	.incbin "baserom.gba", 0x276fbb, 0x18
	.globl gUnknown_8276FD3
gUnknown_8276FD3: @ 0x08276FD3

	@ data/text/save.inc:18 gText_DifferentSaveFile
	.globl gText_Rom_276FD3
gText_Rom_276FD3: @ 0x08276FD3
	.string "ちゅうい!!\p『つづきから はじめる』で\nぼうけん していた レポートが\lかかれています!\pそちらで プレイしていた ぼうけんや\nすべての ポケモン どうぐ などが\lきえてしまいます……\pほんとうに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_276FD3) > 0x75
	.error "gText_Rom_276FD3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_276FD3) < 0x75
	.space 0x75 - (. - gText_Rom_276FD3)
	.endif
	.globl gUnknown_8277048
gUnknown_8277048: @ 0x08277048

	@ data/text/save.inc:29 gText_SaveError
	.globl gText_Rom_277048
gText_Rom_277048: @ 0x08277048
	.string "レポートが かけませんでした\pバックアップカートリッジを\nこうかんしてください!$"
	.if (. - gText_Rom_277048) > 0x29
	.error "gText_Rom_277048 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_277048) < 0x29
	.space 0x29 - (. - gText_Rom_277048)
	.endif
	.globl gUnknown_8277071
gUnknown_8277071: @ 0x08277071

	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_277071
gText_Rom_277071: @ 0x08277071
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください$"
	.if (. - gText_Rom_277071) > 0x24
	.error "gText_Rom_277071 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_277071) < 0x24
	.space 0x24 - (. - gText_Rom_277071)
	.endif
	.include "data/text/events/birch_speech.inc"
	.globl gUnknown_82772F0
gUnknown_82772F0: @ 0x082772F0
	.incbin "baserom.gba", 0x2772f0, 0x8
	.globl gUnknown_82772F8
gUnknown_82772F8: @ 0x082772F8
	.incbin "baserom.gba", 0x2772f8, 0x590
	.globl gUnknown_8277888
gUnknown_8277888: @ 0x08277888
	.incbin "baserom.gba", 0x277888, 0x24
	.globl gUnknown_82778AC
gUnknown_82778AC: @ 0x082778AC
	.incbin "baserom.gba", 0x2778ac, 0x5c
	.globl gUnknown_8277908
gUnknown_8277908: @ 0x08277908
	.incbin "baserom.gba", 0x277908, 0xf328
	.globl gUnknown_8286C30
gUnknown_8286C30: @ 0x08286C30
	.incbin "baserom.gba", 0x286c30, 0x388
	.globl gUnknown_8286FB8
gUnknown_8286FB8: @ 0x08286FB8
	.incbin "baserom.gba", 0x286fb8, 0x1e
	.globl gUnknown_8286FD6
gUnknown_8286FD6: @ 0x08286FD6
	.incbin "baserom.gba", 0x286fd6, 0x12
	.globl gUnknown_8286FE8
gUnknown_8286FE8: @ 0x08286FE8
	.incbin "baserom.gba", 0x286fe8, 0x274
	.globl gUnknown_828725C
gUnknown_828725C: @ 0x0828725C
	.incbin "baserom.gba", 0x28725c, 0x91
	.globl gUnknown_82872ED
gUnknown_82872ED: @ 0x082872ED
	.incbin "baserom.gba", 0x2872ed, 0x6fd
	.globl gUnknown_82879EA
gUnknown_82879EA: @ 0x082879EA
	.incbin "baserom.gba", 0x2879ea, 0xa7f
	.globl gUnknown_8288469
gUnknown_8288469: @ 0x08288469
	.incbin "baserom.gba", 0x288469, 0x1a
	.globl gUnknown_8288483
gUnknown_8288483: @ 0x08288483
	.incbin "baserom.gba", 0x288483, 0x21
	.globl gUnknown_82884A4
gUnknown_82884A4: @ 0x082884A4
	.incbin "baserom.gba", 0x2884a4, 0x88e
	.globl gUnknown_8288D32
gUnknown_8288D32: @ 0x08288D32
	.incbin "baserom.gba", 0x288d32, 0xd
	.globl gUnknown_8288D3F
gUnknown_8288D3F: @ 0x08288D3F
	.incbin "baserom.gba", 0x288d3f, 0xd
	.globl gUnknown_8288D4C
gUnknown_8288D4C: @ 0x08288D4C
	.incbin "baserom.gba", 0x288d4c, 0x9
	.globl gUnknown_8288D55
gUnknown_8288D55: @ 0x08288D55
	.incbin "baserom.gba", 0x288d55, 0x160
	.globl gUnknown_8288EB5
gUnknown_8288EB5: @ 0x08288EB5
	.incbin "baserom.gba", 0x288eb5, 0x3d
	.globl gUnknown_8288EF2
gUnknown_8288EF2: @ 0x08288EF2
	.incbin "baserom.gba", 0x288ef2, 0x3
	.globl gUnknown_8288EF5
gUnknown_8288EF5: @ 0x08288EF5
	.incbin "baserom.gba", 0x288ef5, 0x9e
	.globl gUnknown_8288F93
gUnknown_8288F93: @ 0x08288F93
	.incbin "baserom.gba", 0x288f93, 0x2a
	.globl gUnknown_8288FBD
gUnknown_8288FBD: @ 0x08288FBD
	.incbin "baserom.gba", 0x288fbd, 0x52
	.globl gUnknown_828900F
gUnknown_828900F: @ 0x0828900F
	.incbin "baserom.gba", 0x28900f, 0x54
	.globl gUnknown_8289063
gUnknown_8289063: @ 0x08289063
	.incbin "baserom.gba", 0x289063, 0xe
	.globl gUnknown_8289071
gUnknown_8289071: @ 0x08289071
	.incbin "baserom.gba", 0x289071, 0x7
	.globl gUnknown_8289078
gUnknown_8289078: @ 0x08289078
	.incbin "baserom.gba", 0x289078, 0x7
	.globl gUnknown_828907F
gUnknown_828907F: @ 0x0828907F
	.incbin "baserom.gba", 0x28907f, 0x7
	.globl gUnknown_8289086
gUnknown_8289086: @ 0x08289086
	.incbin "baserom.gba", 0x289086, 0x4
	.globl gUnknown_828908A
gUnknown_828908A: @ 0x0828908A
	.incbin "baserom.gba", 0x28908a, 0x9
	.globl gUnknown_8289093
gUnknown_8289093: @ 0x08289093
	.incbin "baserom.gba", 0x289093, 0x6
	.globl gUnknown_8289099
gUnknown_8289099: @ 0x08289099
	.incbin "baserom.gba", 0x289099, 0x4
	.globl gUnknown_828909D
gUnknown_828909D: @ 0x0828909D
	.incbin "baserom.gba", 0x28909d, 0xa4
	.globl gUnknown_8289141
gUnknown_8289141: @ 0x08289141
	.incbin "baserom.gba", 0x289141, 0x4
	.globl gUnknown_8289145
gUnknown_8289145: @ 0x08289145
	.incbin "baserom.gba", 0x289145, 0x6f
	.globl gUnknown_82891B4
gUnknown_82891B4: @ 0x082891B4
	.incbin "baserom.gba", 0x2891b4, 0x1b
	.globl gUnknown_82891CF
gUnknown_82891CF: @ 0x082891CF
	.incbin "baserom.gba", 0x2891cf, 0x82
	.globl gUnknown_8289251
gUnknown_8289251: @ 0x08289251
	.incbin "baserom.gba", 0x289251, 0x9
	.globl gUnknown_828925A
gUnknown_828925A: @ 0x0828925A
	.incbin "baserom.gba", 0x28925a, 0xe
	.globl gUnknown_8289268
gUnknown_8289268: @ 0x08289268
	.incbin "baserom.gba", 0x289268, 0x7
	.globl gUnknown_828926F
gUnknown_828926F: @ 0x0828926F
	.incbin "baserom.gba", 0x28926f, 0x13
	.globl gUnknown_8289282
gUnknown_8289282: @ 0x08289282
	.incbin "baserom.gba", 0x289282, 0x11
	.globl gUnknown_8289293
gUnknown_8289293: @ 0x08289293
	.incbin "baserom.gba", 0x289293, 0xa
	.globl gUnknown_828929D
gUnknown_828929D: @ 0x0828929D
	.incbin "baserom.gba", 0x28929d, 0x5c
	.globl gUnknown_82892F9
gUnknown_82892F9: @ 0x082892F9
	.incbin "baserom.gba", 0x2892f9, 0xb
	.globl gUnknown_8289304
gUnknown_8289304: @ 0x08289304
	.incbin "baserom.gba", 0x289304, 0x48
	.globl gUnknown_828934C
gUnknown_828934C: @ 0x0828934C
	.incbin "baserom.gba", 0x28934c, 0x14
	.globl gUnknown_8289360
gUnknown_8289360: @ 0x08289360
	.incbin "baserom.gba", 0x289360, 0x2b
	.globl gUnknown_828938B
gUnknown_828938B: @ 0x0828938B
	.incbin "baserom.gba", 0x28938b, 0xa
	.globl gUnknown_8289395
gUnknown_8289395: @ 0x08289395
	.incbin "baserom.gba", 0x289395, 0x7
	.globl gUnknown_828939C
gUnknown_828939C: @ 0x0828939C
	.incbin "baserom.gba", 0x28939c, 0xb
	.globl gUnknown_82893A7
gUnknown_82893A7: @ 0x082893A7
	.incbin "baserom.gba", 0x2893a7, 0x4
	.globl gUnknown_82893AB
gUnknown_82893AB: @ 0x082893AB
	.incbin "baserom.gba", 0x2893ab, 0x7
	.globl gUnknown_82893B2
gUnknown_82893B2: @ 0x082893B2
	.incbin "baserom.gba", 0x2893b2, 0xd
	.globl gUnknown_82893BF
gUnknown_82893BF: @ 0x082893BF
	.incbin "baserom.gba", 0x2893bf, 0x7
	.globl gUnknown_82893C6
gUnknown_82893C6: @ 0x082893C6
	.incbin "baserom.gba", 0x2893c6, 0x1b
	.globl gUnknown_82893E1
gUnknown_82893E1: @ 0x082893E1
	.incbin "baserom.gba", 0x2893e1, 0x37
	.globl gUnknown_8289418
gUnknown_8289418: @ 0x08289418
	.incbin "baserom.gba", 0x289418, 0x37
	.globl gUnknown_828944F
gUnknown_828944F: @ 0x0828944F
	.incbin "baserom.gba", 0x28944f, 0x3e
	.globl gUnknown_828948D
gUnknown_828948D: @ 0x0828948D
	.incbin "baserom.gba", 0x28948d, 0x1b
	.globl gUnknown_82894A8
gUnknown_82894A8: @ 0x082894A8
	.incbin "baserom.gba", 0x2894a8, 0x7
	.globl gUnknown_82894AF
gUnknown_82894AF: @ 0x082894AF
	.incbin "baserom.gba", 0x2894af, 0x9c
	.globl gUnknown_828954B
gUnknown_828954B: @ 0x0828954B
	.incbin "baserom.gba", 0x28954b, 0x2
	.globl gUnknown_828954D
gUnknown_828954D: @ 0x0828954D
	.incbin "baserom.gba", 0x28954d, 0x11
	.globl gUnknown_828955E
gUnknown_828955E: @ 0x0828955E
	.incbin "baserom.gba", 0x28955e, 0x7
	.globl gUnknown_8289565
gUnknown_8289565: @ 0x08289565
	.incbin "baserom.gba", 0x289565, 0x7
	.globl gUnknown_828956C
gUnknown_828956C: @ 0x0828956C
	.incbin "baserom.gba", 0x28956c, 0x8e
	.globl gUnknown_82895FA
gUnknown_82895FA: @ 0x082895FA
	.incbin "baserom.gba", 0x2895fa, 0x4
	.globl gUnknown_82895FE
gUnknown_82895FE: @ 0x082895FE
	.incbin "baserom.gba", 0x2895fe, 0x4
	.globl gUnknown_8289602
gUnknown_8289602: @ 0x08289602
	.incbin "baserom.gba", 0x289602, 0xf
	.globl gUnknown_8289611
gUnknown_8289611: @ 0x08289611
	.incbin "baserom.gba", 0x289611, 0xf
	.globl gUnknown_8289620
gUnknown_8289620: @ 0x08289620
	.incbin "baserom.gba", 0x289620, 0x8
	.globl gUnknown_8289628
gUnknown_8289628: @ 0x08289628
	.incbin "baserom.gba", 0x289628, 0x4
	.globl gUnknown_828962C
gUnknown_828962C: @ 0x0828962C
	.incbin "baserom.gba", 0x28962c, 0xb
	.globl gUnknown_8289637
gUnknown_8289637: @ 0x08289637
	.incbin "baserom.gba", 0x289637, 0x8
	.globl gUnknown_828963F
gUnknown_828963F: @ 0x0828963F
	.incbin "baserom.gba", 0x28963f, 0x37
	.globl gUnknown_8289676
gUnknown_8289676: @ 0x08289676
	.incbin "baserom.gba", 0x289676, 0x29
	.globl gUnknown_828969F
gUnknown_828969F: @ 0x0828969F
	.incbin "baserom.gba", 0x28969f, 0x51
	.globl gUnknown_82896F0
gUnknown_82896F0: @ 0x082896F0
	.incbin "baserom.gba", 0x2896f0, 0xe
	.globl gUnknown_82896FE
gUnknown_82896FE: @ 0x082896FE
	.incbin "baserom.gba", 0x2896fe, 0xb
	.globl gUnknown_8289709
gUnknown_8289709: @ 0x08289709
	.incbin "baserom.gba", 0x289709, 0x4
	.globl gUnknown_828970D
gUnknown_828970D: @ 0x0828970D
	.incbin "baserom.gba", 0x28970d, 0x8
	.globl gUnknown_8289715
gUnknown_8289715: @ 0x08289715
	.incbin "baserom.gba", 0x289715, 0x7
	.globl gUnknown_828971C
gUnknown_828971C: @ 0x0828971C
	.incbin "baserom.gba", 0x28971c, 0x18
	.globl gUnknown_8289734
gUnknown_8289734: @ 0x08289734
	.incbin "baserom.gba", 0x289734, 0x1b
	.globl gUnknown_828974F
gUnknown_828974F: @ 0x0828974F
	.incbin "baserom.gba", 0x28974f, 0x7
	.globl gUnknown_8289756
gUnknown_8289756: @ 0x08289756
	.incbin "baserom.gba", 0x289756, 0x7
	.globl gUnknown_828975D
gUnknown_828975D: @ 0x0828975D
	.incbin "baserom.gba", 0x28975d, 0x2a
	.globl gUnknown_8289787
gUnknown_8289787: @ 0x08289787
	.incbin "baserom.gba", 0x289787, 0x14
	.globl gUnknown_828979B
gUnknown_828979B: @ 0x0828979B
	.incbin "baserom.gba", 0x28979b, 0xd
	.globl gUnknown_82897A8
gUnknown_82897A8: @ 0x082897A8
	.incbin "baserom.gba", 0x2897a8, 0x14
	.globl gUnknown_82897BC
gUnknown_82897BC: @ 0x082897BC
	.incbin "baserom.gba", 0x2897bc, 0x9
	.globl gUnknown_82897C5
gUnknown_82897C5: @ 0x082897C5
	.incbin "baserom.gba", 0x2897c5, 0x22
	.globl gUnknown_82897E7
gUnknown_82897E7: @ 0x082897E7
	.incbin "baserom.gba", 0x2897e7, 0xb
	.globl gUnknown_82897F2
gUnknown_82897F2: @ 0x082897F2
	.incbin "baserom.gba", 0x2897f2, 0xd
	.globl gUnknown_82897FF
gUnknown_82897FF: @ 0x082897FF
	.incbin "baserom.gba", 0x2897ff, 0xb
	.globl gUnknown_828980A
gUnknown_828980A: @ 0x0828980A
	.incbin "baserom.gba", 0x28980a, 0x9
	.globl gUnknown_8289813
gUnknown_8289813: @ 0x08289813
	.incbin "baserom.gba", 0x289813, 0x10
	.globl gUnknown_8289823
gUnknown_8289823: @ 0x08289823
	.incbin "baserom.gba", 0x289823, 0xb
	.globl gUnknown_828982E
gUnknown_828982E: @ 0x0828982E
	.incbin "baserom.gba", 0x28982e, 0x9
	.globl gUnknown_8289837
gUnknown_8289837: @ 0x08289837
	.incbin "baserom.gba", 0x289837, 0xe
	.globl gUnknown_8289845
gUnknown_8289845: @ 0x08289845
	.incbin "baserom.gba", 0x289845, 0x43
	.globl gUnknown_8289888
gUnknown_8289888: @ 0x08289888
	.incbin "baserom.gba", 0x289888, 0x7
	.globl gUnknown_828988F
gUnknown_828988F: @ 0x0828988F
	.incbin "baserom.gba", 0x28988f, 0x7
	.globl gUnknown_8289896
gUnknown_8289896: @ 0x08289896
	.incbin "baserom.gba", 0x289896, 0x12
	.globl gUnknown_82898A8
gUnknown_82898A8: @ 0x082898A8
	.incbin "baserom.gba", 0x2898a8, 0x7
	.globl gUnknown_82898AF
gUnknown_82898AF: @ 0x082898AF
	.incbin "baserom.gba", 0x2898af, 0xd
	.globl gUnknown_82898BC
gUnknown_82898BC: @ 0x082898BC
	.incbin "baserom.gba", 0x2898bc, 0xb
	.globl gUnknown_82898C7
gUnknown_82898C7: @ 0x082898C7
	.incbin "baserom.gba", 0x2898c7, 0x11
	.globl gUnknown_82898D8
gUnknown_82898D8: @ 0x082898D8
	.incbin "baserom.gba", 0x2898d8, 0x11
	.globl gUnknown_82898E9
gUnknown_82898E9: @ 0x082898E9
	.incbin "baserom.gba", 0x2898e9, 0x17
	.globl gUnknown_8289900
gUnknown_8289900: @ 0x08289900
	.incbin "baserom.gba", 0x289900, 0xaa
	.globl gUnknown_82899AA
gUnknown_82899AA: @ 0x082899AA
	.incbin "baserom.gba", 0x2899aa, 0xe
	.globl gUnknown_82899B8
gUnknown_82899B8: @ 0x082899B8
	.incbin "baserom.gba", 0x2899b8, 0x14
	.globl gUnknown_82899CC
gUnknown_82899CC: @ 0x082899CC
	.incbin "baserom.gba", 0x2899cc, 0xe
	.globl gUnknown_82899DA
gUnknown_82899DA: @ 0x082899DA
	.incbin "baserom.gba", 0x2899da, 0xa
	.globl gUnknown_82899E4
gUnknown_82899E4: @ 0x082899E4
	.incbin "baserom.gba", 0x2899e4, 0x14
	.globl gUnknown_82899F8
gUnknown_82899F8: @ 0x082899F8
	.incbin "baserom.gba", 0x2899f8, 0x14
	.globl gUnknown_8289A0C
gUnknown_8289A0C: @ 0x08289A0C
	.incbin "baserom.gba", 0x289a0c, 0x25
	.globl gUnknown_8289A31
gUnknown_8289A31: @ 0x08289A31
	.incbin "baserom.gba", 0x289a31, 0xf
	.globl gUnknown_8289A40
gUnknown_8289A40: @ 0x08289A40
	.incbin "baserom.gba", 0x289a40, 0x9
	.globl gUnknown_8289A49
gUnknown_8289A49: @ 0x08289A49
	.incbin "baserom.gba", 0x289a49, 0x69
	.globl gUnknown_8289AB2
gUnknown_8289AB2: @ 0x08289AB2
	.incbin "baserom.gba", 0x289ab2, 0x14
	.globl gUnknown_8289AC6
gUnknown_8289AC6: @ 0x08289AC6
	.incbin "baserom.gba", 0x289ac6, 0x14
	.globl gUnknown_8289ADA
gUnknown_8289ADA: @ 0x08289ADA
	.incbin "baserom.gba", 0x289ada, 0xe
	.globl gUnknown_8289AE8
gUnknown_8289AE8: @ 0x08289AE8
	.incbin "baserom.gba", 0x289ae8, 0xe
	.globl gUnknown_8289AF6
gUnknown_8289AF6: @ 0x08289AF6
	.space 0x1, 0x03
	.globl gUnknown_8289AF7
gUnknown_8289AF7: @ 0x08289AF7
	.incbin "baserom.gba", 0x289af7, 0x22
	.globl gUnknown_8289B19
gUnknown_8289B19: @ 0x08289B19
	.space 0x1, 0x03
	.globl gUnknown_8289B1A
gUnknown_8289B1A: @ 0x08289B1A
	.incbin "baserom.gba", 0x289b1a, 0x15
	.globl gUnknown_8289B2F
gUnknown_8289B2F: @ 0x08289B2F
	.space 0x1, 0x03
	.globl gUnknown_8289B30
gUnknown_8289B30: @ 0x08289B30
	.incbin "baserom.gba", 0x289b30, 0x1f
	.globl gUnknown_8289B4F
gUnknown_8289B4F: @ 0x08289B4F
	.incbin "baserom.gba", 0x289b4f, 0xa
	.globl gUnknown_8289B59
gUnknown_8289B59: @ 0x08289B59
	.incbin "baserom.gba", 0x289b59, 0xc
	.globl gUnknown_8289B65
gUnknown_8289B65: @ 0x08289B65
	.incbin "baserom.gba", 0x289b65, 0xc
	.globl gUnknown_8289B71
gUnknown_8289B71: @ 0x08289B71
	.incbin "baserom.gba", 0x289b71, 0xc
	.globl gUnknown_8289B7D
gUnknown_8289B7D: @ 0x08289B7D
	.incbin "baserom.gba", 0x289b7d, 0xe
	.globl gUnknown_8289B8B
gUnknown_8289B8B: @ 0x08289B8B
	.incbin "baserom.gba", 0x289b8b, 0x1c
	.globl gUnknown_8289BA7
gUnknown_8289BA7: @ 0x08289BA7
	.incbin "baserom.gba", 0x289ba7, 0x10
	.globl gUnknown_8289BB7
gUnknown_8289BB7: @ 0x08289BB7
	.incbin "baserom.gba", 0x289bb7, 0x10
	.globl gUnknown_8289BC7
gUnknown_8289BC7: @ 0x08289BC7
	.incbin "baserom.gba", 0x289bc7, 0xe
	.globl gUnknown_8289BD5
gUnknown_8289BD5: @ 0x08289BD5
	.incbin "baserom.gba", 0x289bd5, 0x7
	.globl gUnknown_8289BDC
gUnknown_8289BDC: @ 0x08289BDC
	.incbin "baserom.gba", 0x289bdc, 0x1b
	.globl gUnknown_8289BF7
gUnknown_8289BF7: @ 0x08289BF7
	.incbin "baserom.gba", 0x289bf7, 0xd
	.globl gUnknown_8289C04
gUnknown_8289C04: @ 0x08289C04
	.incbin "baserom.gba", 0x289c04, 0x3
	.globl gUnknown_8289C07
gUnknown_8289C07: @ 0x08289C07
	.incbin "baserom.gba", 0x289c07, 0x3
	.globl gUnknown_8289C0A
gUnknown_8289C0A: @ 0x08289C0A
	.incbin "baserom.gba", 0x289c0a, 0xa
	.globl gUnknown_8289C14
gUnknown_8289C14: @ 0x08289C14
	.incbin "baserom.gba", 0x289c14, 0x9
	.globl gUnknown_8289C1D
gUnknown_8289C1D: @ 0x08289C1D
	.incbin "baserom.gba", 0x289c1d, 0x10
	.globl gUnknown_8289C2D
gUnknown_8289C2D: @ 0x08289C2D
	.incbin "baserom.gba", 0x289c2d, 0x8
	.globl gUnknown_8289C35
gUnknown_8289C35: @ 0x08289C35
	.incbin "baserom.gba", 0x289c35, 0x2c
	.globl gUnknown_8289C61
gUnknown_8289C61: @ 0x08289C61
	.incbin "baserom.gba", 0x289c61, 0x17
	.globl gUnknown_8289C78
gUnknown_8289C78: @ 0x08289C78
	.incbin "baserom.gba", 0x289c78, 0xb
	.globl gUnknown_8289C83
gUnknown_8289C83: @ 0x08289C83
	.incbin "baserom.gba", 0x289c83, 0xb
	.globl gUnknown_8289C8E
gUnknown_8289C8E: @ 0x08289C8E
	.incbin "baserom.gba", 0x289c8e, 0x6
	.globl gUnknown_8289C94
gUnknown_8289C94: @ 0x08289C94
	.incbin "baserom.gba", 0x289c94, 0x12
	.globl gUnknown_8289CA6
gUnknown_8289CA6: @ 0x08289CA6
	.incbin "baserom.gba", 0x289ca6, 0x6
	.globl gUnknown_8289CAC
gUnknown_8289CAC: @ 0x08289CAC
	.incbin "baserom.gba", 0x289cac, 0x12
	.globl gUnknown_8289CBE
gUnknown_8289CBE: @ 0x08289CBE
	.incbin "baserom.gba", 0x289cbe, 0x6
	.globl gUnknown_8289CC4
gUnknown_8289CC4: @ 0x08289CC4
	.incbin "baserom.gba", 0x289cc4, 0x12
	.globl gUnknown_8289CD6
gUnknown_8289CD6: @ 0x08289CD6
	.incbin "baserom.gba", 0x289cd6, 0x6
	.globl gUnknown_8289CDC
gUnknown_8289CDC: @ 0x08289CDC
	.incbin "baserom.gba", 0x289cdc, 0x12
	.globl gUnknown_8289CEE
gUnknown_8289CEE: @ 0x08289CEE
	.incbin "baserom.gba", 0x289cee, 0x6
	.globl gUnknown_8289CF4
gUnknown_8289CF4: @ 0x08289CF4
	.incbin "baserom.gba", 0x289cf4, 0x12
	.globl gUnknown_8289D06
gUnknown_8289D06: @ 0x08289D06
	.incbin "baserom.gba", 0x289d06, 0x6
	.globl gUnknown_8289D0C
gUnknown_8289D0C: @ 0x08289D0C
	.incbin "baserom.gba", 0x289d0c, 0x10
	.globl gUnknown_8289D1C
gUnknown_8289D1C: @ 0x08289D1C
	.incbin "baserom.gba", 0x289d1c, 0x6
	.globl gUnknown_8289D22
gUnknown_8289D22: @ 0x08289D22
	.incbin "baserom.gba", 0x289d22, 0x14
	.globl gUnknown_8289D36
gUnknown_8289D36: @ 0x08289D36
	.incbin "baserom.gba", 0x289d36, 0x6
	.globl gUnknown_8289D3C
gUnknown_8289D3C: @ 0x08289D3C
	.incbin "baserom.gba", 0x289d3c, 0x10
	.globl gUnknown_8289D4C
gUnknown_8289D4C: @ 0x08289D4C
	.incbin "baserom.gba", 0x289d4c, 0x1d
	.globl gUnknown_8289D69
gUnknown_8289D69: @ 0x08289D69
	.incbin "baserom.gba", 0x289d69, 0x10
	.globl gUnknown_8289D79
gUnknown_8289D79: @ 0x08289D79
	.incbin "baserom.gba", 0x289d79, 0x6
	.globl gUnknown_8289D7F
gUnknown_8289D7F: @ 0x08289D7F
	.incbin "baserom.gba", 0x289d7f, 0x1b
	.globl gUnknown_8289D9A
gUnknown_8289D9A: @ 0x08289D9A
	.incbin "baserom.gba", 0x289d9a, 0x4
	.globl gUnknown_8289D9E
gUnknown_8289D9E: @ 0x08289D9E
	.incbin "baserom.gba", 0x289d9e, 0xe
	.globl gUnknown_8289DAC
gUnknown_8289DAC: @ 0x08289DAC
	.incbin "baserom.gba", 0x289dac, 0x2a
	.globl gUnknown_8289DD6
gUnknown_8289DD6: @ 0x08289DD6
	.incbin "baserom.gba", 0x289dd6, 0x1b
	.globl gUnknown_8289DF1
gUnknown_8289DF1: @ 0x08289DF1
	.incbin "baserom.gba", 0x289df1, 0x10
	.globl gUnknown_8289E01
gUnknown_8289E01: @ 0x08289E01
	.incbin "baserom.gba", 0x289e01, 0x4
	.globl gUnknown_8289E05
gUnknown_8289E05: @ 0x08289E05
	.incbin "baserom.gba", 0x289e05, 0x4
	.globl gUnknown_8289E09
gUnknown_8289E09: @ 0x08289E09
	.incbin "baserom.gba", 0x289e09, 0x3d
	.globl gUnknown_8289E46
gUnknown_8289E46: @ 0x08289E46
	.incbin "baserom.gba", 0x289e46, 0x35
	.globl gUnknown_8289E7B
gUnknown_8289E7B: @ 0x08289E7B
	.incbin "baserom.gba", 0x289e7b, 0xc7
	.globl gUnknown_8289F42
gUnknown_8289F42: @ 0x08289F42
	.incbin "baserom.gba", 0x289f42, 0x7
	.globl gUnknown_8289F49
gUnknown_8289F49: @ 0x08289F49
	.incbin "baserom.gba", 0x289f49, 0x7
	.globl gUnknown_8289F50
gUnknown_8289F50: @ 0x08289F50
	.incbin "baserom.gba", 0x289f50, 0xc
	.globl gUnknown_8289F5C
gUnknown_8289F5C: @ 0x08289F5C
	.incbin "baserom.gba", 0x289f5c, 0x334
	.globl gUnknown_828A290
gUnknown_828A290: @ 0x0828A290
	.incbin "baserom.gba", 0x28a290, 0x34
	.globl gUnknown_828A2C4
gUnknown_828A2C4: @ 0x0828A2C4
	.incbin "baserom.gba", 0x28a2c4, 0x18
	.globl gUnknown_828A2DC
gUnknown_828A2DC: @ 0x0828A2DC
	.incbin "baserom.gba", 0x28a2dc, 0x4
	.globl gUnknown_828A2E0
gUnknown_828A2E0: @ 0x0828A2E0
	.incbin "baserom.gba", 0x28a2e0, 0x2c
	.globl gUnknown_828A30C
gUnknown_828A30C: @ 0x0828A30C
	.incbin "baserom.gba", 0x28a30c, 0x46
	.globl gUnknown_828A352
gUnknown_828A352: @ 0x0828A352
	.incbin "baserom.gba", 0x28a352, 0xa
	.globl gUnknown_828A35C
gUnknown_828A35C: @ 0x0828A35C
	.incbin "baserom.gba", 0x28a35c, 0x2e
	.globl gUnknown_828A38A
gUnknown_828A38A: @ 0x0828A38A
	.incbin "baserom.gba", 0x28a38a, 0xf6
	.globl gUnknown_828A480
gUnknown_828A480: @ 0x0828A480
	.incbin "baserom.gba", 0x28a480, 0x2458
	.globl gUnknown_828C8D8
gUnknown_828C8D8: @ 0x0828C8D8
	.incbin "baserom.gba", 0x28c8d8, 0x9dc
	.globl gUnknown_828D2B4
gUnknown_828D2B4: @ 0x0828D2B4
	.4byte MEScrCmd_nop
	.4byte MEScrCmd_checkcompat
	.4byte MEScrCmd_end
	.4byte MEScrCmd_setmsg
	.4byte MEScrCmd_setstatus
	.4byte MEScrCmd_runscript
	.4byte MEScrCmd_initramscript
	.4byte MEScrCmd_setenigmaberry
	.4byte MEScrCmd_giveribbon
	.4byte MEScrCmd_enableresetrtc
	.4byte MEScrCmd_addrareword
	.4byte MEScrCmd_setrecordmixinggift
	.4byte MEScrCmd_givepokemon
	.4byte MEScrCmd_addtrainer
	.4byte MEScrCmd_givenationaldex
	.4byte MEScrCmd_checksum
	.4byte MEScrCmd_crc
