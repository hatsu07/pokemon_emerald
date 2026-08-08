
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
