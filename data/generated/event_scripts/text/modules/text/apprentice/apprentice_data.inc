	@ data/text/apprentice.inc:1 gText_ApprenticeChallenge0
	.globl gText_ApprenticeChallenge0
gText_ApprenticeChallenge0: @ 0x0826CD7D
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばん でしです!\nグスン…… きんちょう するなあ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge0) > 0x22
	.error "gText_ApprenticeChallenge0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge0) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge0)
	.endif

	@ data/text/apprentice.inc:4 gText_ApprenticeChallenge1
	.globl gText_ApprenticeChallenge1
gText_ApprenticeChallenge1: @ 0x0826CD9F
	.string "ぼく {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし なんだ! いくぞー!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge1) > 0x1d
	.error "gText_ApprenticeChallenge1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge1) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge1)
	.endif

	@ data/text/apprentice.inc:7 gText_ApprenticeChallenge2
	.globl gText_ApprenticeChallenge2
gText_ApprenticeChallenge2: @ 0x0826CDBC
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ!\nいざ しょうぶ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge2) > 0x1a
	.error "gText_ApprenticeChallenge2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge2) < 0x1a
	.space 0x1a - (. - gText_ApprenticeChallenge2)
	.endif

	@ data/text/apprentice.inc:10 gText_ApprenticeChallenge3
	.globl gText_ApprenticeChallenge3
gText_ApprenticeChallenge3: @ 0x0826CDD6
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんでしです…\nあたし なんかが かてる かな……?"
	.byte EOS
	.if (. - gText_ApprenticeChallenge3) > 0x23
	.error "gText_ApprenticeChallenge3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge3) < 0x23
	.space 0x23 - (. - gText_ApprenticeChallenge3)
	.endif

	@ data/text/apprentice.inc:13 gText_ApprenticeChallenge4
	.globl gText_ApprenticeChallenge4
gText_ApprenticeChallenge4: @ 0x0826CDF9
	.string "{STR_VAR_1}の {STR_VAR_2}ばん でしなの!\nしょうぶ して あげるわ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge4) > 0x1d
	.error "gText_ApprenticeChallenge4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge4) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge4)
	.endif

	@ data/text/apprentice.inc:16 gText_ApprenticeChallenge5
	.globl gText_ApprenticeChallenge5
gText_ApprenticeChallenge5: @ 0x0826CE16
	.string "いそがしい なか {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってる オレです!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge5) > 0x23
	.error "gText_ApprenticeChallenge5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge5) < 0x23
	.space 0x23 - (. - gText_ApprenticeChallenge5)
	.endif

	@ data/text/apprentice.inc:19 gText_ApprenticeChallenge6
	.globl gText_ApprenticeChallenge6
gText_ApprenticeChallenge6: @ 0x0826CE39
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしトレーナーよ よっろしくぅ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge6) > 0x1d
	.error "gText_ApprenticeChallenge6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge6) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge6)
	.endif

	@ data/text/apprentice.inc:22 gText_ApprenticeChallenge7
	.globl gText_ApprenticeChallenge7
gText_ApprenticeChallenge7: @ 0x0826CE56
	.string "わたくし {STR_VAR_1}さまの {STR_VAR_2}ばんの\nでしで ございますの…… いきますわよ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge7) > 0x25
	.error "gText_ApprenticeChallenge7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge7) < 0x25
	.space 0x25 - (. - gText_ApprenticeChallenge7)
	.endif

	@ data/text/apprentice.inc:25 gText_ApprenticeChallenge8
	.globl gText_ApprenticeChallenge8
gText_ApprenticeChallenge8: @ 0x0826CE7B
	.string "キャー! {STR_VAR_1}せんせいの\n{STR_VAR_2}ばん でし ですっ! がんばります!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge8) > 0x22
	.error "gText_ApprenticeChallenge8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge8) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge8)
	.endif

	@ data/text/apprentice.inc:28 gText_ApprenticeChallenge9
	.globl gText_ApprenticeChallenge9
gText_ApprenticeChallenge9: @ 0x0826CE9D
	.string "いえーい! {STR_VAR_1}さんの\n{STR_VAR_2}ばん でしの おじさんと しょうぶ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge9) > 0x21
	.error "gText_ApprenticeChallenge9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge9) < 0x21
	.space 0x21 - (. - gText_ApprenticeChallenge9)
	.endif

	@ data/text/apprentice.inc:31 gText_ApprenticeChallenge10
	.globl gText_ApprenticeChallenge10
gText_ApprenticeChallenge10: @ 0x0826CEBE
	.string "{STR_VAR_1}の 1000ばんめの でしだ!\nうそ ほんとは {STR_VAR_2}ばん! いくぞ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge10) > 0x25
	.error "gText_ApprenticeChallenge10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge10) < 0x25
	.space 0x25 - (. - gText_ApprenticeChallenge10)
	.endif

	@ data/text/apprentice.inc:34 gText_ApprenticeChallenge11
	.globl gText_ApprenticeChallenge11
gText_ApprenticeChallenge11: @ 0x0826CEE3
	.string "{STR_VAR_1}さんの {STR_VAR_2}ばんの\nでしだぜ! ノリノリで いってみようぜー!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge11) > 0x22
	.error "gText_ApprenticeChallenge11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge11) < 0x22
	.space 0x22 - (. - gText_ApprenticeChallenge11)
	.endif

	@ data/text/apprentice.inc:37 gText_ApprenticeChallenge12
	.globl gText_ApprenticeChallenge12
gText_ApprenticeChallenge12: @ 0x0826CF05
	.string "イヤハァ! {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でしとは オレのことっ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge12) > 0x1f
	.error "gText_ApprenticeChallenge12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge12) < 0x1f
	.space 0x1f - (. - gText_ApprenticeChallenge12)
	.endif

	@ data/text/apprentice.inc:40 gText_ApprenticeChallenge13
	.globl gText_ApprenticeChallenge13
gText_ApprenticeChallenge13: @ 0x0826CF24
	.string "……ゴホっ ゴホっ よろしく!\n{STR_VAR_1}さんの {STR_VAR_2}ばんでしだ!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge13) > 0x1f
	.error "gText_ApprenticeChallenge13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge13) < 0x1f
	.space 0x1f - (. - gText_ApprenticeChallenge13)
	.endif

	@ data/text/apprentice.inc:43 gText_ApprenticeChallenge14
	.globl gText_ApprenticeChallenge14
gText_ApprenticeChallenge14: @ 0x0826CF43
	.string "て てれますが {STR_VAR_1}さんの\n{STR_VAR_2}ばんの でし やってます……!"
	.byte EOS
	.if (. - gText_ApprenticeChallenge14) > 0x20
	.error "gText_ApprenticeChallenge14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge14) < 0x20
	.space 0x20 - (. - gText_ApprenticeChallenge14)
	.endif

	@ data/text/apprentice.inc:46 gText_ApprenticeChallenge15
	.globl gText_ApprenticeChallenge15
gText_ApprenticeChallenge15: @ 0x0826CF63
	.string "うそじゃない! わたしは\n{STR_VAR_1}さんの {STR_VAR_2}ばんの でしだ"
	.byte EOS
	.if (. - gText_ApprenticeChallenge15) > 0x1d
	.error "gText_ApprenticeChallenge15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeChallenge15) < 0x1d
	.space 0x1d - (. - gText_ApprenticeChallenge15)
	.endif

	@ data/text/apprentice.inc:49 gText_ApprenticePleaseTeach0
	.globl gText_ApprenticePleaseTeach0
gText_ApprenticePleaseTeach0: @ 0x0826CF80
	.string "も もしかして {PLAYER}さん……?\lああ! グスっ……\pあ…… ごめんなさい!\nきんちょう して なみだが でちゃった……\pぼくは {STR_VAR_1} って いって\n{PLAYER}さんに あこがれて います!\lい いつか {PLAYER}さんに あって\lポケモンのこと おしえて もらう って\lゆめ みて いたんです……! うう……\pあのう あのう {PLAYER}さん!\nできたら…… ポケモンのこと\lおしえて ください!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach0) > 0xbb
	.error "gText_ApprenticePleaseTeach0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach0) < 0xbb
	.space 0xbb - (. - gText_ApprenticePleaseTeach0)
	.endif

	@ data/text/apprentice.inc:52 gText_ApprenticeRejectTeaching0
	.globl gText_ApprenticeRejectTeaching0
gText_ApprenticeRejectTeaching0: @ 0x0826D03B
	.string "そ そんな……\nう うう うわーん!\pおねがいです…… おねがい ですから……!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching0) > 0x29
	.error "gText_ApprenticeRejectTeaching0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching0) < 0x29
	.space 0x29 - (. - gText_ApprenticeRejectTeaching0)
	.endif

	@ data/text/apprentice.inc:55 gText_ApprenticeWhichLevelMode0
	.globl gText_ApprenticeWhichLevelMode0
gText_ApprenticeWhichLevelMode0: @ 0x0826D064
	.string "えー ほんとですか!\nやった! うれしいよう! うぉぉーん!\pあ…… ごめん なさい\nうれしくて なみだが……\pあのう じゃあ おしえて ください!\nバトルタワーの へや なんですけど\lレベル50と オープンレベルの へや\lぼく だったら どっちが いいのかな……?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode0) > 0x86
	.error "gText_ApprenticeWhichLevelMode0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode0) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhichLevelMode0)
	.endif

	@ data/text/apprentice.inc:58 gText_ApprenticeLevelModeThanks0
	.globl gText_ApprenticeLevelModeThanks0
gText_ApprenticeLevelModeThanks0: @ 0x0826D0EA
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\n{PLAYER}さんが ぼくに へやを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks0) > 0x61
	.error "gText_ApprenticeLevelModeThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks0) < 0x61
	.space 0x61 - (. - gText_ApprenticeLevelModeThanks0)
	.endif

	@ data/text/apprentice.inc:61 gText_ApprenticePleaseTeach1
	.globl gText_ApprenticePleaseTeach1
gText_ApprenticePleaseTeach1: @ 0x0826D14B
	.string "うわー! {PLAYER}さん だよね?\nすごく つよい ひと なんだよね?\pボク {STR_VAR_1}!\nトレーナーに なった ばかり なんだ\pねえ おねがい {PLAYER}さん!\nぼくの せんせいに なって\lトレーナーのこと いっぱい おしえてよ!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach1) > 0x6c
	.error "gText_ApprenticePleaseTeach1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach1) < 0x6c
	.space 0x6c - (. - gText_ApprenticePleaseTeach1)
	.endif

	@ data/text/apprentice.inc:64 gText_ApprenticeRejectTeaching1
	.globl gText_ApprenticeRejectTeaching1
gText_ApprenticeRejectTeaching1: @ 0x0826D1B7
	.string "えー? どうして?\nねーっ いいでしょ いいでしょ\lせんせいに なってよ おねがい!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching1) > 0x2b
	.error "gText_ApprenticeRejectTeaching1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching1) < 0x2b
	.space 0x2b - (. - gText_ApprenticeRejectTeaching1)
	.endif

	@ data/text/apprentice.inc:67 gText_ApprenticeWhichLevelMode1
	.globl gText_ApprenticeWhichLevelMode1
gText_ApprenticeWhichLevelMode1: @ 0x0826D1E2
	.string "わーい やった!\nじゃあねー はじめに ききたい ことはね\lバトルタワーの こと!\pレベル50と オープンレベルの へや\nどっちが ボクに ピッタリ かなあ?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode1) > 0x50
	.error "gText_ApprenticeWhichLevelMode1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode1) < 0x50
	.space 0x50 - (. - gText_ApprenticeWhichLevelMode1)
	.endif

	@ data/text/apprentice.inc:70 gText_ApprenticeLevelModeThanks1
	.globl gText_ApprenticeLevelModeThanks1
gText_ApprenticeLevelModeThanks1: @ 0x0826D232
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク がんばるね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks1) > 0x3a
	.error "gText_ApprenticeLevelModeThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks1) < 0x3a
	.space 0x3a - (. - gText_ApprenticeLevelModeThanks1)
	.endif

	@ data/text/apprentice.inc:73 gText_ApprenticePleaseTeach2
	.globl gText_ApprenticePleaseTeach2
gText_ApprenticePleaseTeach2: @ 0x0826D26C
	.string "あの…… {PLAYER}さん ですか!?\nぼく {STR_VAR_1} って いいます!\pぼく ポケモントレーナーに なりたいんだけど\nどうすれば いいのか わからなくて……\pそれで ゆうめいな {PLAYER}さんに\nどうすれば いいのか きいてみようと\lおもったんです!\pそうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach2) > 0x88
	.error "gText_ApprenticePleaseTeach2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach2) < 0x88
	.space 0x88 - (. - gText_ApprenticePleaseTeach2)
	.endif

	@ data/text/apprentice.inc:76 gText_ApprenticeRejectTeaching2
	.globl gText_ApprenticeRejectTeaching2
gText_ApprenticeRejectTeaching2: @ 0x0826D2F4
	.string "そんなあ!\nぼく どうしても ポケモントレーナーに\lなりたいんです!\pしつもんに こたえて もらえますか?"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching2) > 0x36
	.error "gText_ApprenticeRejectTeaching2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching2) < 0x36
	.space 0x36 - (. - gText_ApprenticeRejectTeaching2)
	.endif

	@ data/text/apprentice.inc:79 gText_ApprenticeWhichLevelMode2
	.globl gText_ApprenticeWhichLevelMode2
gText_ApprenticeWhichLevelMode2: @ 0x0826D32A
	.string "ありがとう ございます!\nじゃあ さっそく さいしょの しつもん!\pバトルタワーって レベル50と オープンと\nふたつの レベルが ありますよね!\pどっちの レベルが\nぼくに あってると おもいますか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode2) > 0x66
	.error "gText_ApprenticeWhichLevelMode2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode2) < 0x66
	.space 0x66 - (. - gText_ApprenticeWhichLevelMode2)
	.endif

	@ data/text/apprentice.inc:82 gText_ApprenticeLevelModeThanks2
	.globl gText_ApprenticeLevelModeThanks2
gText_ApprenticeLevelModeThanks2: @ 0x0826D390
	.string "{STR_VAR_1} ですね! わかりました!\nじゃあ また しつもんが あったら\lここに くるので おしえて ください!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks2) > 0x36
	.error "gText_ApprenticeLevelModeThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks2) < 0x36
	.space 0x36 - (. - gText_ApprenticeLevelModeThanks2)
	.endif

	@ data/text/apprentice.inc:85 gText_ApprenticePleaseTeach3
	.globl gText_ApprenticePleaseTeach3
gText_ApprenticePleaseTeach3: @ 0x0826D3C6
	.string "あれ? え? あなたは……!\nいえ そんなはず ないわ\lあたし なんかが {PLAYER}さんに\lあえるはず なんて ないもん\p……ほんとに {PLAYER}さん なの?\nしんじられない おはなし できるなんて!\lああ こんな いいことが あったら\lあとは わるいこと ばっかり おきるんだわ\p……あ ごめんなさい\nあたし…… {STR_VAR_1} です……\lなんの とりえも ありません\lって じこしょうかい なんて しても\lどうせ すぐ わすれちゃいます よね……\p{PLAYER}さんに あえたら\nトレーナーとして そうだんに のって って\lおねがい しようと おもっていたけど\lどうせ ムリですよね?\p……それとも もしかして\nそうだんに のって もらえたり しますか?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach3) > 0x13a
	.error "gText_ApprenticePleaseTeach3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach3) < 0x13a
	.space 0x13a - (. - gText_ApprenticePleaseTeach3)
	.endif

	@ data/text/apprentice.inc:88 gText_ApprenticeRejectTeaching3
	.globl gText_ApprenticeRejectTeaching3
gText_ApprenticeRejectTeaching3: @ 0x0826D500
	.string "やっぱり…… そうですよね\nあたし なんて ほんとに\lつまらない おんなのこで……\pでも もしかしたら って おもって……\nかんがえなおして なんて くれませんよね?\pけど やっぱり あきらめられない\nうんが いい うちに おねがいしよう!\l……そうだんに のって もらえますか?"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching3) > 0x8d
	.error "gText_ApprenticeRejectTeaching3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching3) < 0x8d
	.space 0x8d - (. - gText_ApprenticeRejectTeaching3)
	.endif

	@ data/text/apprentice.inc:91 gText_ApprenticeWhichLevelMode3
	.globl gText_ApprenticeWhichLevelMode3
gText_ApprenticeWhichLevelMode3: @ 0x0826D58D
	.string "ほんとう ですか? しんじられない!\nあたし なんかの そうだんに\lのってもらえる なんて!\lうれしい です……\pほんとうに くだらないです けど\nあたし には きめられないん です\pバトルタワーって レベルが\nレベル50と オープンレベルと\lふたつ えらべる けど……\pあたし なんか でも がんばれそうな\nレベルって どっちの へや でしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode3) > 0xb0
	.error "gText_ApprenticeWhichLevelMode3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode3) < 0xb0
	.space 0xb0 - (. - gText_ApprenticeWhichLevelMode3)
	.endif

	@ data/text/apprentice.inc:94 gText_ApprenticeLevelModeThanks3
	.globl gText_ApprenticeLevelModeThanks3
gText_ApprenticeLevelModeThanks3: @ 0x0826D63D
	.string "{STR_VAR_1} ですか わかりました!\nほんとうに こんな あたしでも\lだいじょうぶ でしょうか\lがんばって みます ダメかも しれないけど\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks3) > 0x63
	.error "gText_ApprenticeLevelModeThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks3) < 0x63
	.space 0x63 - (. - gText_ApprenticeLevelModeThanks3)
	.endif

	@ data/text/apprentice.inc:97 gText_ApprenticePleaseTeach4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticePleaseTeach4
gText_ApprenticePleaseTeach4: @ 0x0826D6A0
	.string "あっ! {PLAYER}{KUN} でしょ!?\nポケモン つよいって きいてるよ!\pわたしは {STR_VAR_1}\nおともだちに なって あげる!\pあのね トレーナーズスクール で\nおそわった こと だけじゃ\lバトルフロンティア では かてないの!\pそうだんに のってくれても いいわよ\nもちろん オーケー でしょ?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach4) != 0x8e
	.error "gText_ApprenticePleaseTeach4 must retain its original byte length"
	.endif

	@ data/text/apprentice.inc:100 gText_ApprenticeRejectTeaching4
	.globl gText_ApprenticeRejectTeaching4
gText_ApprenticeRejectTeaching4: @ 0x0826D72E
	.string "え? なんで ことわるの?\nあたしの おねがい なんだけど!\lかんがえなおしてよぉ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching4) > 0x2b
	.error "gText_ApprenticeRejectTeaching4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching4) < 0x2b
	.space 0x2b - (. - gText_ApprenticeRejectTeaching4)
	.endif

	@ data/text/apprentice.inc:103 gText_ApprenticeWhichLevelMode4
	.globl gText_ApprenticeWhichLevelMode4
gText_ApprenticeWhichLevelMode4: @ 0x0826D759
	.string "うん じゃあ おねがいね\nさっそく きめて ほしいことが あるから\pレベル50と オープンレベルの へやが\nバトルタワーに あるじゃない?\l{PLAYER}{KUN}は わたしには\lどっちが いいと おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode4) > 0x60
	.error "gText_ApprenticeWhichLevelMode4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode4) < 0x60
	.space 0x60 - (. - gText_ApprenticeWhichLevelMode4)
	.endif

	@ data/text/apprentice.inc:106 gText_ApprenticeLevelModeThanks4
	.globl gText_ApprenticeLevelModeThanks4
gText_ApprenticeLevelModeThanks4: @ 0x0826D7B9
	.string "そう {STR_VAR_1}が\nわたしに ふさわしいのね ありがと!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks4) > 0x4e
	.error "gText_ApprenticeLevelModeThanks4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks4) < 0x4e
	.space 0x4e - (. - gText_ApprenticeLevelModeThanks4)
	.endif

	@ data/text/apprentice.inc:109 gText_ApprenticePleaseTeach5
	.globl gText_ApprenticePleaseTeach5
gText_ApprenticePleaseTeach5: @ 0x0826D807
	.string "ああ きみ! {PLAYER}{KUN}!\nゆうめい だから しってるぜ\lオレは {STR_VAR_1} よろしく!\pオレは トライアスリート やってて\nからだを きたえる かたわら\lポケモンも そだてて ほかにも\lバイトに ひるねに しゃこうダンス……\pいそがしくて なっかなか\nいい トレーナーに なれないんだよね!\pそこで おねがい!\pここで あえたのも なにかの ごえん!\n{PLAYER}{KUN} たまに オレに\lアドバイスを おねがい できないかな?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach5) > 0xce
	.error "gText_ApprenticePleaseTeach5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach5) < 0xce
	.space 0xce - (. - gText_ApprenticePleaseTeach5)
	.endif

	@ data/text/apprentice.inc:112 gText_ApprenticeRejectTeaching5
	.globl gText_ApprenticeRejectTeaching5
gText_ApprenticeRejectTeaching5: @ 0x0826D8D5
	.string "えー! たのむよ!\n{PLAYER}{KUN} みたいな ひとが\lオレには ひつよう なんだよー!\pオレに アドバイス たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching5) > 0x39
	.error "gText_ApprenticeRejectTeaching5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching5) < 0x39
	.space 0x39 - (. - gText_ApprenticeRejectTeaching5)
	.endif

	@ data/text/apprentice.inc:115 gText_ApprenticeWhichLevelMode5
	.globl gText_ApprenticeWhichLevelMode5
gText_ApprenticeWhichLevelMode5: @ 0x0826D90E
	.string "サンキュー そう こなくっちゃ!\nんじゃ てはじめに かるいのを 1つね!\pあのさ バトルタワー って\nレベルが 2しゅるい あるじゃん?\lレベル50と オープンレベル!\pいそがしい オレ だったら\nどっちで がんばれば いいかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode5) > 0x75
	.error "gText_ApprenticeWhichLevelMode5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode5) < 0x75
	.space 0x75 - (. - gText_ApprenticeWhichLevelMode5)
	.endif

	@ data/text/apprentice.inc:118 gText_ApprenticeLevelModeThanks5
	.globl gText_ApprenticeLevelModeThanks5
gText_ApprenticeLevelModeThanks5: @ 0x0826D983
	.string "{STR_VAR_1} ね! オーケー!\nなんとか じかん つくって やってみるぜ!\p……っと いけね バイトのじかんだ!\nじゃあ サンキュー またな!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks5) > 0x44
	.error "gText_ApprenticeLevelModeThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks5) < 0x44
	.space 0x44 - (. - gText_ApprenticeLevelModeThanks5)
	.endif

	@ data/text/apprentice.inc:121 gText_ApprenticePleaseTeach6
	.globl gText_ApprenticePleaseTeach6
gText_ApprenticePleaseTeach6: @ 0x0826D9C7
	.string "うっそ もしかして\nほんものの {PLAYER}さん?\pあっは! すごーい!\nわたし {STR_VAR_1}よ よろしくぅ!\p{PLAYER}さん って なんか\nとっても つよいんでしょ\lみんな うわさ してるもんね!\pあ! いいこと かんがえちゃった\nわたし {PLAYER}さんに\lアドバイスを もらおうっと!\lきっと つよく なれそう!\pねっ いいでしょ?\nわたしに アドバイス おねがい!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach6) > 0xac
	.error "gText_ApprenticePleaseTeach6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach6) < 0xac
	.space 0xac - (. - gText_ApprenticePleaseTeach6)
	.endif

	@ data/text/apprentice.inc:124 gText_ApprenticeRejectTeaching6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeRejectTeaching6
gText_ApprenticeRejectTeaching6: @ 0x0826DA73
	.string "あははは! そんな いじわる いっても\nあたし には つうじないわよん!\lほんとは オーケー なんでしょ?"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching6) != 0x36
	.error "gText_ApprenticeRejectTeaching6 must retain its original byte length"
	.endif

	@ data/text/apprentice.inc:127 gText_ApprenticeWhichLevelMode6
	.globl gText_ApprenticeWhichLevelMode6
gText_ApprenticeWhichLevelMode6: @ 0x0826DAA9
	.string "わーい さっすが {PLAYER}さん!\nココロひろーい!\lまずは なにから きこうかなー?\l……あっ おもいついた!\pジャーン しつもんです!\nわたしが バトルタワーに いどむなら!\lレベル50のへや! オープンレベルのへや!\lさて どっちが にあっている でしょう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode6) > 0x82
	.error "gText_ApprenticeWhichLevelMode6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode6) < 0x82
	.space 0x82 - (. - gText_ApprenticeWhichLevelMode6)
	.endif

	@ data/text/apprentice.inc:130 gText_ApprenticeLevelModeThanks6
	.globl gText_ApprenticeLevelModeThanks6
gText_ApprenticeLevelModeThanks6: @ 0x0826DB2B
	.string "ほほぉー!\n{STR_VAR_1} と きましたか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks6) > 0x4a
	.error "gText_ApprenticeLevelModeThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks6) < 0x4a
	.space 0x4a - (. - gText_ApprenticeLevelModeThanks6)
	.endif

	@ data/text/apprentice.inc:133 gText_ApprenticePleaseTeach7
	.globl gText_ApprenticePleaseTeach7
gText_ApprenticePleaseTeach7: @ 0x0826DB75
	.string "もし {PLAYER}さんで\nいらっしゃいますか?\pおめに かかれて うれしゅうございます\nわたくし {STR_VAR_1}と もうしますの\l{PLAYER}さんに かねてより\lあこがれて おりました……\p…… …… ……\pあの…… こんな おねがい\nおこまりに なるかも しれませんが…\pわたくしを {PLAYER}さんに\nでしいり させて いただけません?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach7) > 0x9a
	.error "gText_ApprenticePleaseTeach7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach7) < 0x9a
	.space 0x9a - (. - gText_ApprenticePleaseTeach7)
	.endif

	@ data/text/apprentice.inc:136 gText_ApprenticeRejectTeaching7
	.globl gText_ApprenticeRejectTeaching7
gText_ApprenticeRejectTeaching7: @ 0x0826DC0F
	.string "まあ……!\p…… …… ……\n…… …… ……\p……あ ショックで きを うしないましたわ\nいいえ! きっと ききまちがい ですわ\pおねがい! わたくしを\nでしに して くださると おっしゃって!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching7) > 0x63
	.error "gText_ApprenticeRejectTeaching7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching7) < 0x63
	.space 0x63 - (. - gText_ApprenticeRejectTeaching7)
	.endif

	@ data/text/apprentice.inc:139 gText_ApprenticeWhichLevelMode7
	.globl gText_ApprenticeWhichLevelMode7
gText_ApprenticeWhichLevelMode7: @ 0x0826DC72
	.string "うっ うれしい ですわ……!\pでは さっそくですけど わたくしの\nそうだんを きいて くださいませ!\pわたくし いちど バトルタワーに\nちょうせん しようと おもっていますの\lただ レベルが ふたつ ありまして……\pわたくしは レベル50と オープンレベル\nどちらに ふさわしいと おもわれますか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode7) > 0x96
	.error "gText_ApprenticeWhichLevelMode7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode7) < 0x96
	.space 0x96 - (. - gText_ApprenticeWhichLevelMode7)
	.endif

	@ data/text/apprentice.inc:142 gText_ApprenticeLevelModeThanks7
	.globl gText_ApprenticeLevelModeThanks7
gText_ApprenticeLevelModeThanks7: @ 0x0826DD08
	.string "{STR_VAR_1} ですのね!\nわかりました がんばりますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks7) > 0x3f
	.error "gText_ApprenticeLevelModeThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks7) < 0x3f
	.space 0x3f - (. - gText_ApprenticeLevelModeThanks7)
	.endif

	@ data/text/apprentice.inc:145 gText_ApprenticePleaseTeach8
	.globl gText_ApprenticePleaseTeach8
gText_ApprenticePleaseTeach8: @ 0x0826DD47
	.string "キャー! キャー!!!\n{PLAYER}さんに はなしかけられた!\lかっ かんげきっ……!\pわたし! {STR_VAR_1}と いいますっ!\nトレーナーに なって すぐに\lポケモンかいの おおもの {PLAYER}さんと\lおはなし できて かんどう してますっ!\pそそそそ そうだ!\n{PLAYER}さん おねがいが!\lわたしを でしに して くださいっ!\lいろいろ おしえて ほしいのですっ!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach8) > 0xab
	.error "gText_ApprenticePleaseTeach8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach8) < 0xab
	.space 0xab - (. - gText_ApprenticePleaseTeach8)
	.endif

	@ data/text/apprentice.inc:148 gText_ApprenticeRejectTeaching8
	.globl gText_ApprenticeRejectTeaching8
gText_ApprenticeRejectTeaching8: @ 0x0826DDF2
	.string "うっわああ!!\n{PLAYER}さんに ことわられた……\lきっ きちょうな けいけん だわっ!\p{PLAYER}さんっ! こんどは\nよい おへんじも きかせて くださいっ!\lわたしに ごしどうを おねがいしますっ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching8) > 0x60
	.error "gText_ApprenticeRejectTeaching8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching8) < 0x60
	.space 0x60 - (. - gText_ApprenticeRejectTeaching8)
	.endif

	@ data/text/apprentice.inc:151 gText_ApprenticeWhichLevelMode8
	.globl gText_ApprenticeWhichLevelMode8
gText_ApprenticeWhichLevelMode8: @ 0x0826DE52
	.string "ひええええぇ! {PLAYER}さんに\nはい って いわれたああぁ!!\lきょうは もう ねむれない……\lおありがとう ございますう!\pではっ うかがいます!\nわたしは バトルタワー\lレベル50のへやと オープンレベルのへや\lどちらに むいてると おもわれますかっ?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode8) > 0x7f
	.error "gText_ApprenticeWhichLevelMode8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode8) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichLevelMode8)
	.endif

	@ data/text/apprentice.inc:154 gText_ApprenticeLevelModeThanks8
	.globl gText_ApprenticeLevelModeThanks8
gText_ApprenticeLevelModeThanks8: @ 0x0826DED1
	.string "{STR_VAR_1} りょうかいですっ\nりょうかいで ありますっ!\lわたし かんげき です!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks8) > 0x43
	.error "gText_ApprenticeLevelModeThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks8) < 0x43
	.space 0x43 - (. - gText_ApprenticeLevelModeThanks8)
	.endif

	@ data/text/apprentice.inc:157 gText_ApprenticePleaseTeach9
	.globl gText_ApprenticePleaseTeach9
gText_ApprenticePleaseTeach9: @ 0x0826DF14
	.string "ワォ! きみは\nもしや もしや {PLAYER}{KUN}!\lストロングで フェイマスな トレーナー!\lいや おじさん ラッキーだなー!\pハロウ おじさんは {STR_VAR_1}ね!\nポケモン ティーチャー さがしてるんだ\lそんな ときに グッドタイミングで\l{PLAYER}{KUN}が あらわれた!\pと いうわけで {PLAYER}{KUN}!\nおじさんを でしいり させて くれ!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach9) > 0x9f
	.error "gText_ApprenticePleaseTeach9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach9) < 0x9f
	.space 0x9f - (. - gText_ApprenticePleaseTeach9)
	.endif

	@ data/text/apprentice.inc:160 gText_ApprenticeRejectTeaching9
	.globl gText_ApprenticeRejectTeaching9
gText_ApprenticeRejectTeaching9: @ 0x0826DFB3
	.string "ぐわーっ!\nきみも なかなか クールで タフだね……\lそんなこと いわずに おねがいだよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching9) > 0x2e
	.error "gText_ApprenticeRejectTeaching9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching9) < 0x2e
	.space 0x2e - (. - gText_ApprenticeRejectTeaching9)
	.endif

	@ data/text/apprentice.inc:163 gText_ApprenticeWhichLevelMode9
	.globl gText_ApprenticeWhichLevelMode9
gText_ApprenticeWhichLevelMode9: @ 0x0826DFE1
	.string "おぅー! グッと くるね!\nエクセレント!\pでは ファースト アドバイス たのむね!\nバトルタワー なんだけどさ\lおじさんが やるなら レベルは\l50と オープン どっちが ベターかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode9) > 0x5e
	.error "gText_ApprenticeWhichLevelMode9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode9) < 0x5e
	.space 0x5e - (. - gText_ApprenticeWhichLevelMode9)
	.endif

	@ data/text/apprentice.inc:166 gText_ApprenticeLevelModeThanks9
	.globl gText_ApprenticeLevelModeThanks9
gText_ApprenticeLevelModeThanks9: @ 0x0826E03F
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん バーっと がんばって くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks9) > 0x42
	.error "gText_ApprenticeLevelModeThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks9) < 0x42
	.space 0x42 - (. - gText_ApprenticeLevelModeThanks9)
	.endif

	@ data/text/apprentice.inc:169 gText_ApprenticePleaseTeach10
	.globl gText_ApprenticePleaseTeach10
gText_ApprenticePleaseTeach10: @ 0x0826E081
	.string "お おいっ {PLAYER}{KUN}だろ!\nさっき おまわりさんが さがしてたぞ!\p…… …… ……\nなんてね うっそ うそ!\pおいらは {STR_VAR_1} って いうんだ\nこうみえても ポケモンチャンピオンさ!\l……て いうのも ウソ!\pじつは おいら ポケモンしょうぶが\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらの ししょうに なってくれない かな?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach10) > 0xac
	.error "gText_ApprenticePleaseTeach10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach10) < 0xac
	.space 0xac - (. - gText_ApprenticePleaseTeach10)
	.endif

	@ data/text/apprentice.inc:172 gText_ApprenticeRejectTeaching10
	.globl gText_ApprenticeRejectTeaching10
gText_ApprenticeRejectTeaching10: @ 0x0826E12D
	.string "そんな つめたい こと いうと\nこうだぞ!\pうえーん うえーん えーん えん えん\pなんてね うそなき!\pね! いいだろ\nおいらの ししょうに なって おくれよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching10) > 0x52
	.error "gText_ApprenticeRejectTeaching10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching10) < 0x52
	.space 0x52 - (. - gText_ApprenticeRejectTeaching10)
	.endif

	@ data/text/apprentice.inc:175 gText_ApprenticeWhichLevelMode10
	.globl gText_ApprenticeWhichLevelMode10
gText_ApprenticeWhichLevelMode10: @ 0x0826E17F
	.string "やったー!\nおれいに ふねを かって あげよう!\pなんて じょうだん だけど……\nししょう! よろしく たのむぜ!\pあのさ バトルタワーで\nレベル50と オープンレベルと あるだろ!\pどっちで がんばれば いいか\nまよってるんだよ……\lししょうが きめて くれないかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode10) > 0x88
	.error "gText_ApprenticeWhichLevelMode10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode10) < 0x88
	.space 0x88 - (. - gText_ApprenticeWhichLevelMode10)
	.endif

	@ data/text/apprentice.inc:178 gText_ApprenticeLevelModeThanks10
	.globl gText_ApprenticeLevelModeThanks10
gText_ApprenticeLevelModeThanks10: @ 0x0826E207
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに いこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks10) > 0x5d
	.error "gText_ApprenticeLevelModeThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeLevelModeThanks10)
	.endif

	@ data/text/apprentice.inc:181 gText_ApprenticePleaseTeach11
	.globl gText_ApprenticePleaseTeach11
gText_ApprenticePleaseTeach11: @ 0x0826E264
	.string "は・じ・め・ま・し・て!\nはーい はじめまして!\lわし ノリノリ ふなのり {STR_VAR_1}!\lきみも じこしょうかい いってみようぜ!\pふん ふん なまえは {PLAYER}{KUN}!\nポケモン だいすきで\lびみょうな おとしごろね!\pじつは きみは わしが はなしかけた\nほんじつ 10にんめの トレーナーでーす!\pこの であいを きねんして\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach11) > 0xb5
	.error "gText_ApprenticePleaseTeach11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach11) < 0xb5
	.space 0xb5 - (. - gText_ApprenticePleaseTeach11)
	.endif

	@ data/text/apprentice.inc:184 gText_ApprenticeRejectTeaching11
	.globl gText_ApprenticeRejectTeaching11
gText_ApprenticeRejectTeaching11: @ 0x0826E319
	.string "そんな!\nノリが わるいじゃ ないか!\pな いいじゃ ないか\nぜひとも わしを でしに してください!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching11) > 0x34
	.error "gText_ApprenticeRejectTeaching11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching11) < 0x34
	.space 0x34 - (. - gText_ApprenticeRejectTeaching11)
	.endif

	@ data/text/apprentice.inc:187 gText_ApprenticeWhichLevelMode11
	.globl gText_ApprenticeWhichLevelMode11
gText_ApprenticeWhichLevelMode11: @ 0x0826E34D
	.string "ようよう! ノリが いいね!\n{PLAYER}さん よろしく たのみますよ!\pそれじゃあ 1つめの しつもん\nいってみようぜ!\lバトルタワーに かんする しつもんだ!\pレベル50のへやと オープンレベルのへや\nわしが いくなら さあ どっち?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode11) > 0x74
	.error "gText_ApprenticeWhichLevelMode11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode11) < 0x74
	.space 0x74 - (. - gText_ApprenticeWhichLevelMode11)
	.endif

	@ data/text/apprentice.inc:190 gText_ApprenticeLevelModeThanks11
	.globl gText_ApprenticeLevelModeThanks11
gText_ApprenticeLevelModeThanks11: @ 0x0826E3C1
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いってみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks11) > 0x36
	.error "gText_ApprenticeLevelModeThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks11) < 0x36
	.space 0x36 - (. - gText_ApprenticeLevelModeThanks11)
	.endif

	@ data/text/apprentice.inc:193 gText_ApprenticePleaseTeach12
	.globl gText_ApprenticePleaseTeach12
gText_ApprenticePleaseTeach12: @ 0x0826E3F7
	.string "ヒャホー {PLAYER}さんじゃなーい!?\nどうする オレ? はなしかけてみる!?\lってもう はなし してるよ!!\pって {PLAYER}さん あきれてる!?\nしかたねー じこしょうかい してみる!?\pオスっ オレっ {STR_VAR_1}!\nポケモン ギタリストかいの 1ばんぼしさ!\pって きいてる!? きいてる!!\nついでに たのみごと してみる!?\pあの {PLAYER}さん!\nオレを {PLAYER}さんの でしに して!"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach12) > 0xba
	.error "gText_ApprenticePleaseTeach12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach12) < 0xba
	.space 0xba - (. - gText_ApprenticePleaseTeach12)
	.endif

	@ data/text/apprentice.inc:196 gText_ApprenticeRejectTeaching12
	.globl gText_ApprenticeRejectTeaching12
gText_ApprenticeRejectTeaching12: @ 0x0826E4B1
	.string "って ことわられてる オレっ!?\nしかたねー もういちど たのんでみる!?\pおねがい だよ {PLAYER}さん!\nオレを でしに してエェ!!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching12) > 0x43
	.error "gText_ApprenticeRejectTeaching12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching12) < 0x43
	.space 0x43 - (. - gText_ApprenticeRejectTeaching12)
	.endif

	@ data/text/apprentice.inc:199 gText_ApprenticeWhichLevelMode12
	.globl gText_ApprenticeWhichLevelMode12
gText_ApprenticeWhichLevelMode12: @ 0x0826E4F4
	.string "やったラッキー うれしーよ オレ!!\nさっそく なんか そうだんしてみる!?\lしかも ここは バトルタワー だから\lそのへん から きいてみる!?\pあのさっ! バトルタワーで オレ\nどっちの レベルが にあってる!?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode12) > 0x6d
	.error "gText_ApprenticeWhichLevelMode12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode12) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhichLevelMode12)
	.endif

	@ data/text/apprentice.inc:202 gText_ApprenticeLevelModeThanks12
	.globl gText_ApprenticeLevelModeThanks12
gText_ApprenticeLevelModeThanks12: @ 0x0826E561
	.string "{STR_VAR_1}だって!\nじゃ そこ いってみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks12) > 0x37
	.error "gText_ApprenticeLevelModeThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks12) < 0x37
	.space 0x37 - (. - gText_ApprenticeLevelModeThanks12)
	.endif

	@ data/text/apprentice.inc:205 gText_ApprenticePleaseTeach13
	.globl gText_ApprenticePleaseTeach13
gText_ApprenticePleaseTeach13: @ 0x0826E598
	.string "あ…… きみきみ!\nちょっとさ かた もんでくれる?\p……ああ そうそう そこそこ\nはー きもちいい!\pおれ {STR_VAR_1} って いうんだ\nカラテ やってるんだけど\lいまいち からだが よわくてさ……\pポケモンしょうぶも やって\nきたえようと おもって いるんだよね\pきみ ポケモンリーグで かった\n{PLAYER}{KUN} だろう?\lどうかな たまに おれの\lそうだんに のって もらえない かい?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach13) > 0xbd
	.error "gText_ApprenticePleaseTeach13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach13) < 0xbd
	.space 0xbd - (. - gText_ApprenticePleaseTeach13)
	.endif

	@ data/text/apprentice.inc:208 gText_ApprenticeRejectTeaching13
	.globl gText_ApprenticeRejectTeaching13
gText_ApprenticeRejectTeaching13: @ 0x0826E655
	.string "えー なんで!\pそんなに めんどうは かけないからさ\nおねがいだよ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching13) > 0x23
	.error "gText_ApprenticeRejectTeaching13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching13) < 0x23
	.space 0x23 - (. - gText_ApprenticeRejectTeaching13)
	.endif

	@ data/text/apprentice.inc:211 gText_ApprenticeWhichLevelMode13
	.globl gText_ApprenticeWhichLevelMode13
gText_ApprenticeWhichLevelMode13: @ 0x0826E678
	.string "ありがとう わるいね\n……ゴホ ゴホっ!\pうう はやく きたえなきゃ……\nすぐに バトルタワーに いくから\lレベル50のへや オープンレベルのへや\lどっちが いいか きめてくれるかい?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode13) > 0x5d
	.error "gText_ApprenticeWhichLevelMode13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode13) < 0x5d
	.space 0x5d - (. - gText_ApprenticeWhichLevelMode13)
	.endif

	@ data/text/apprentice.inc:214 gText_ApprenticeLevelModeThanks13
	.globl gText_ApprenticeLevelModeThanks13
gText_ApprenticeLevelModeThanks13: @ 0x0826E6D5
	.string "ん わかった {STR_VAR_1}な!\nじゃあ さっそく いってくる!\pこれからも おれを よろしく たのむよ!\nもう でしいり したんだからな!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks13) > 0x42
	.error "gText_ApprenticeLevelModeThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks13) < 0x42
	.space 0x42 - (. - gText_ApprenticeLevelModeThanks13)
	.endif

	@ data/text/apprentice.inc:217 gText_ApprenticePleaseTeach14
	.globl gText_ApprenticePleaseTeach14
gText_ApprenticePleaseTeach14: @ 0x0826E717
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pワシは {STR_VAR_1}と いって\nは はずかしい けど\lいせきを さがしたり して くらしてるんだ\pでも バトルフロンティア にも\nはずかしながら き きょうみが あるんだ\p{PLAYER}{KUN}は ポケモン つよいって\nひょうばん だから……\lその いいづらいん だけど\lひとつ おねがいを したいんだ\pワシの せんせいに なって\nアドバイスして もらえない かな……?"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach14) > 0xd8
	.error "gText_ApprenticePleaseTeach14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePleaseTeach14) < 0xd8
	.space 0xd8 - (. - gText_ApprenticePleaseTeach14)
	.endif

	@ data/text/apprentice.inc:220 gText_ApprenticeRejectTeaching14
	.globl gText_ApprenticeRejectTeaching14
gText_ApprenticeRejectTeaching14: @ 0x0826E7EF
	.string "こ ことわらないでくれ!\nワシに はじを かかせないで くれ!\pおねがい だから\nワシの せんせいに なってくれ!"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching14) > 0x3a
	.error "gText_ApprenticeRejectTeaching14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeRejectTeaching14) < 0x3a
	.space 0x3a - (. - gText_ApprenticeRejectTeaching14)
	.endif

	@ data/text/apprentice.inc:223 gText_ApprenticeWhichLevelMode14
	.globl gText_ApprenticeWhichLevelMode14
gText_ApprenticeWhichLevelMode14: @ 0x0826E829
	.string "あ ありがとう……\pいや だから そんなに みないで くれよ\nてれるだろ\pめを あわせずに こたえて くれ!\pば バトルタワ…… バトルタワー だが\nどの レベルに ちょうせん すれば いい?"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode14) > 0x61
	.error "gText_ApprenticeWhichLevelMode14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode14) < 0x61
	.space 0x61 - (. - gText_ApprenticeWhichLevelMode14)
	.endif

	@ data/text/apprentice.inc:226 gText_ApprenticeLevelModeThanks14
	.globl gText_ApprenticeLevelModeThanks14
gText_ApprenticeLevelModeThanks14: @ 0x0826E88A
	.string "よ よし!\nそれで がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks14) > 0x4c
	.error "gText_ApprenticeLevelModeThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks14) < 0x4c
	.space 0x4c - (. - gText_ApprenticeLevelModeThanks14)
	.endif

	@ data/text/apprentice.inc:229 gText_ApprenticePleaseTeach15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticePleaseTeach15
gText_ApprenticePleaseTeach15: @ 0x0826E8D6
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pわたしは {STR_VAR_1}だ\nいまね だれか つよい トレーナーに\lでしいり したいと おもって いたんだよ\pきみが いるなら よかった!\n……ほんとうに {PLAYER}{KUN} だよね?\pいや ほんもの なら いいんだ\nわたしの でしいりを みとめて ほしい"
	.byte EOS
	.if (. - gText_ApprenticePleaseTeach15) != 0x95
	.error "gText_ApprenticePleaseTeach15 must retain its original byte length"
	.endif

	@ data/text/apprentice.inc:232 gText_ApprenticeRejectTeaching15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeRejectTeaching15
gText_ApprenticeRejectTeaching15: @ 0x0826E96B
	.string "え? なぜ ことわるのかね?\pほんものか どうか うたがって わるかった\nあやまるから でしいり させてほしい"
	.byte EOS
	.if (. - gText_ApprenticeRejectTeaching15) != 0x38
	.error "gText_ApprenticeRejectTeaching15 must retain its original byte length"
	.endif

	@ data/text/apprentice.inc:235 gText_ApprenticeWhichLevelMode15
	.globl gText_ApprenticeWhichLevelMode15
gText_ApprenticeWhichLevelMode15: @ 0x0826E9A3
	.string "ほんとうに みとめて くれるのかね?\nぬかよろこびは したく ないからな\pいや ほんとうなら いいんだ わるかった\nさっそく そうだんに のってほしい\pわたしが バトルタワーに でるなら\nレベル50…… オープンレベル……\lどちらの ほうが ふさわしいと おもうかね"
	.byte EOS
	.if (. - gText_ApprenticeWhichLevelMode15) > 0x86
	.error "gText_ApprenticeWhichLevelMode15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichLevelMode15) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhichLevelMode15)
	.endif

	@ data/text/apprentice.inc:238 gText_ApprenticeLevelModeThanks15
	.globl gText_ApprenticeLevelModeThanks15
gText_ApprenticeLevelModeThanks15: @ 0x0826EA29
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\pこんな わたし だが\nでし として みとめて くれて うれしい\lいずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeLevelModeThanks15) > 0x52
	.error "gText_ApprenticeLevelModeThanks15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeLevelModeThanks15) < 0x52
	.space 0x52 - (. - gText_ApprenticeLevelModeThanks15)
	.endif

	@ data/text/apprentice.inc:241 gText_ApprenticeWhatHeldItem0
	.globl gText_ApprenticeWhatHeldItem0
gText_ApprenticeWhatHeldItem0: @ 0x0826EA7B
	.string "はあ…… シクシク\nああっ {PLAYER}さん!\pぼくね きめられない ことが あって\nちょっと こまってたんです\pきめられない のは {STR_VAR_1}に\nなにを もたせるかって ことなんです\lおしえて ください {PLAYER}さん\lなにか もたせた ほうが いいですか?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem0) > 0x79
	.error "gText_ApprenticeWhatHeldItem0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem0) < 0x79
	.space 0x79 - (. - gText_ApprenticeWhatHeldItem0)
	.endif

	@ data/text/apprentice.inc:244 gText_ApprenticeHoldNothing0
	.globl gText_ApprenticeHoldNothing0
gText_ApprenticeHoldNothing0: @ 0x0826EAF4
	.string "えっ…… {STR_VAR_1}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing0) > 0x1d
	.error "gText_ApprenticeHoldNothing0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing0) < 0x1d
	.space 0x1d - (. - gText_ApprenticeHoldNothing0)
	.endif

	@ data/text/apprentice.inc:247 gText_ApprenticeThanksNoHeldItem0
	.globl gText_ApprenticeThanksNoHeldItem0
gText_ApprenticeThanksNoHeldItem0: @ 0x0826EB11
	.string "わっ わかりました!\nきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem0) > 0x30
	.error "gText_ApprenticeThanksNoHeldItem0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem0) < 0x30
	.space 0x30 - (. - gText_ApprenticeThanksNoHeldItem0)
	.endif

	@ data/text/apprentice.inc:250 gText_ApprenticeThanksHeldItem0
	.globl gText_ApprenticeThanksHeldItem0
gText_ApprenticeThanksHeldItem0: @ 0x0826EB41
	.string "よ よかった\n{STR_VAR_1}なら もってるかも……\lきまって うれしいです うぉぉーん!\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem0) > 0x3a
	.error "gText_ApprenticeThanksHeldItem0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem0) < 0x3a
	.space 0x3a - (. - gText_ApprenticeThanksHeldItem0)
	.endif

	@ data/text/apprentice.inc:253 gText_ApprenticeItemAlreadyRecommended0
	.globl gText_ApprenticeItemAlreadyRecommended0
gText_ApprenticeItemAlreadyRecommended0: @ 0x0826EB7B
	.string "うわーん! ひどいです\n{STR_VAR_1}は もう\lおしえてもらった どうぐ です グスン\pそれとも {STR_VAR_2}は\nなにも もたないほうが いいんですか?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended0) > 0x44
	.error "gText_ApprenticeItemAlreadyRecommended0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended0) < 0x44
	.space 0x44 - (. - gText_ApprenticeItemAlreadyRecommended0)
	.endif

	@ data/text/apprentice.inc:256 gText_ApprenticeWhatHeldItem1
	.globl gText_ApprenticeWhatHeldItem1
gText_ApprenticeWhatHeldItem1: @ 0x0826EBBF
	.string "わー {PLAYER}さん だ!\nよかった! ききたい ことが あったんだ!\pあのね {PLAYER}さんは\nポケモンに どうぐを もたせてる?\lボクも もたせたいんだけど……\pボクの {STR_VAR_1}には\nなにを もたせたら いいのかな\l{PLAYER}さんは どう おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem1) > 0x74
	.error "gText_ApprenticeWhatHeldItem1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem1) < 0x74
	.space 0x74 - (. - gText_ApprenticeWhatHeldItem1)
	.endif

	@ data/text/apprentice.inc:259 gText_ApprenticeHoldNothing1
	.globl gText_ApprenticeHoldNothing1
gText_ApprenticeHoldNothing1: @ 0x0826EC33
	.string "えっ {STR_VAR_1}は\nなにも もたせなくて いいって こと?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing1) > 0x1b
	.error "gText_ApprenticeHoldNothing1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing1) < 0x1b
	.space 0x1b - (. - gText_ApprenticeHoldNothing1)
	.endif

	@ data/text/apprentice.inc:262 gText_ApprenticeThanksNoHeldItem1
	.globl gText_ApprenticeThanksNoHeldItem1
gText_ApprenticeThanksNoHeldItem1: @ 0x0826EC4E
	.string "わかったー じゃあ そうするー!\nせんせい ありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem1) > 0x1c
	.error "gText_ApprenticeThanksNoHeldItem1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem1) < 0x1c
	.space 0x1c - (. - gText_ApprenticeThanksNoHeldItem1)
	.endif

	@ data/text/apprentice.inc:265 gText_ApprenticeThanksHeldItem1
	.globl gText_ApprenticeThanksHeldItem1
gText_ApprenticeThanksHeldItem1: @ 0x0826EC6A
	.string "へええ! {STR_VAR_1}かー\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem1) > 0x20
	.error "gText_ApprenticeThanksHeldItem1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem1) < 0x20
	.space 0x20 - (. - gText_ApprenticeThanksHeldItem1)
	.endif

	@ data/text/apprentice.inc:268 gText_ApprenticeItemAlreadyRecommended1
	.globl gText_ApprenticeItemAlreadyRecommended1
gText_ApprenticeItemAlreadyRecommended1: @ 0x0826EC8A
	.string "あ えっと そうじゃなくて\nまだ おしえて もらってない どうぐで\lなにが いいか しりたいんだ!\pそれとも こんどは\nなにも もたせなくって いいのかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended1) > 0x4f
	.error "gText_ApprenticeItemAlreadyRecommended1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended1) < 0x4f
	.space 0x4f - (. - gText_ApprenticeItemAlreadyRecommended1)
	.endif

	@ data/text/apprentice.inc:271 gText_ApprenticeWhatHeldItem2
	.globl gText_ApprenticeWhatHeldItem2
gText_ApprenticeWhatHeldItem2: @ 0x0826ECD9
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の ことなんだけど\pなにか もちものを もたせたいんだ!\nなにか いい もちもの おしえてください!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem2) > 0x45
	.error "gText_ApprenticeWhatHeldItem2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem2) < 0x45
	.space 0x45 - (. - gText_ApprenticeWhatHeldItem2)
	.endif

	@ data/text/apprentice.inc:274 gText_ApprenticeHoldNothing2
	.globl gText_ApprenticeHoldNothing2
gText_ApprenticeHoldNothing2: @ 0x0826ED1E
	.string "じゃあ {STR_VAR_1}には\nなにも もたせなくても いいんだね?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing2) > 0x1c
	.error "gText_ApprenticeHoldNothing2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing2) < 0x1c
	.space 0x1c - (. - gText_ApprenticeHoldNothing2)
	.endif

	@ data/text/apprentice.inc:277 gText_ApprenticeThanksNoHeldItem2
	.globl gText_ApprenticeThanksNoHeldItem2
gText_ApprenticeThanksNoHeldItem2: @ 0x0826ED3A
	.string "わかりました!\nじゃあ また!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem2) > 0x10
	.error "gText_ApprenticeThanksNoHeldItem2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem2) < 0x10
	.space 0x10 - (. - gText_ApprenticeThanksNoHeldItem2)
	.endif

	@ data/text/apprentice.inc:280 gText_ApprenticeThanksHeldItem2
	.globl gText_ApprenticeThanksHeldItem2
gText_ApprenticeThanksHeldItem2: @ 0x0826ED4A
	.string "{STR_VAR_1} ですか!\nわかりました!\pがんばって さがしてきます!\nじゃあ また!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem2) > 0x27
	.error "gText_ApprenticeThanksHeldItem2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem2) < 0x27
	.space 0x27 - (. - gText_ApprenticeThanksHeldItem2)
	.endif

	@ data/text/apprentice.inc:283 gText_ApprenticeItemAlreadyRecommended2
	.globl gText_ApprenticeItemAlreadyRecommended2
gText_ApprenticeItemAlreadyRecommended2: @ 0x0826ED71
	.string "{STR_VAR_1}は\nまえに おしえて もらいましたよ\pそれとは ちがう もちものを\nもたせたいんです\pそれとも {STR_VAR_2}には\nなにも もたせなくて いいんだね?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended2) > 0x49
	.error "gText_ApprenticeItemAlreadyRecommended2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended2) < 0x49
	.space 0x49 - (. - gText_ApprenticeItemAlreadyRecommended2)
	.endif

	@ data/text/apprentice.inc:286 gText_ApprenticeWhatHeldItem3
	.globl gText_ApprenticeWhatHeldItem3
gText_ApprenticeWhatHeldItem3: @ 0x0826EDBA
	.string "{PLAYER}さん こんにちは……\nごめんなさい きょうも あたし\lききたい ことが あるんです\pあたしの ちから だけでは\nしょうぶに かてないかも しれないから\lなにか どうぐを {STR_VAR_1}に\lもたせようかと おもって いるんです\lでも なにが いいのか……\p{PLAYER}さん おねがいします\nあたしの かわりに きめてください!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem3) > 0x9c
	.error "gText_ApprenticeWhatHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem3) < 0x9c
	.space 0x9c - (. - gText_ApprenticeWhatHeldItem3)
	.endif

	@ data/text/apprentice.inc:289 gText_ApprenticeHoldNothing3
	.globl gText_ApprenticeHoldNothing3
gText_ApprenticeHoldNothing3: @ 0x0826EE56
	.string "あの あたしなんかの ポケモンには\nなにも もたせないほうが いいんですか?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing3) > 0x27
	.error "gText_ApprenticeHoldNothing3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing3) < 0x27
	.space 0x27 - (. - gText_ApprenticeHoldNothing3)
	.endif

	@ data/text/apprentice.inc:292 gText_ApprenticeThanksNoHeldItem3
	.globl gText_ApprenticeThanksNoHeldItem3
gText_ApprenticeThanksNoHeldItem3: @ 0x0826EE7D
	.string "わかりました……\nどうぐに たよるなって ことですね?\lがんばって みます!\pありがとう ございます!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem3) > 0x34
	.error "gText_ApprenticeThanksNoHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem3) < 0x34
	.space 0x34 - (. - gText_ApprenticeThanksNoHeldItem3)
	.endif

	@ data/text/apprentice.inc:295 gText_ApprenticeThanksHeldItem3
	.globl gText_ApprenticeThanksHeldItem3
gText_ApprenticeThanksHeldItem3: @ 0x0826EEB1
	.string "{STR_VAR_1} ですか!\nあたしに みつけられるか……\lいえ! がんばって みます\pありがとう ございます!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem3) > 0x32
	.error "gText_ApprenticeThanksHeldItem3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem3) < 0x32
	.space 0x32 - (. - gText_ApprenticeThanksHeldItem3)
	.endif

	@ data/text/apprentice.inc:298 gText_ApprenticeItemAlreadyRecommended3
	.globl gText_ApprenticeItemAlreadyRecommended3
gText_ApprenticeItemAlreadyRecommended3: @ 0x0826EEE3
	.string "え…… それは\nまえに おしえて いただいたと おもいます\pあ もしかして\nあたしが {STR_VAR_1}を\lつかいこなせて いないから ですか?\pそれとも {STR_VAR_2}には なにも\nもたせるなと いう こと でしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended3) > 0x64
	.error "gText_ApprenticeItemAlreadyRecommended3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended3) < 0x64
	.space 0x64 - (. - gText_ApprenticeItemAlreadyRecommended3)
	.endif

	@ data/text/apprentice.inc:301 gText_ApprenticeWhatHeldItem4
	.globl gText_ApprenticeWhatHeldItem4
gText_ApprenticeWhatHeldItem4: @ 0x0826EF47
	.string "あら {PLAYER}{KUN}\nちょっと ききたい ことが あるのよ!\pわたし ポケモンは きめて もらったけど\nどの どうぐを もたせるか までは\lきめて もらってない じゃない?\pどうせ なら さいごまで\nあなたが きめて くれない?\lねえ なにが いいかしら?\l{STR_VAR_1}に もたせたいの!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem4) > 0x8a
	.error "gText_ApprenticeWhatHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem4) < 0x8a
	.space 0x8a - (. - gText_ApprenticeWhatHeldItem4)
	.endif

	@ data/text/apprentice.inc:304 gText_ApprenticeHoldNothing4
	.globl gText_ApprenticeHoldNothing4
gText_ApprenticeHoldNothing4: @ 0x0826EFD1
	.string "あら! {STR_VAR_1}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing4) > 0x1c
	.error "gText_ApprenticeHoldNothing4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing4) < 0x1c
	.space 0x1c - (. - gText_ApprenticeHoldNothing4)
	.endif

	@ data/text/apprentice.inc:307 gText_ApprenticeThanksNoHeldItem4
	.globl gText_ApprenticeThanksNoHeldItem4
gText_ApprenticeThanksNoHeldItem4: @ 0x0826EFED
	.string "それが よければ そうするわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem4) > 0x44
	.error "gText_ApprenticeThanksNoHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem4) < 0x44
	.space 0x44 - (. - gText_ApprenticeThanksNoHeldItem4)
	.endif

	@ data/text/apprentice.inc:310 gText_ApprenticeThanksHeldItem4
	.globl gText_ApprenticeThanksHeldItem4
gText_ApprenticeThanksHeldItem4: @ 0x0826F031
	.string "{STR_VAR_1}か\nわるく ないわね そうするわ!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem4) > 0x48
	.error "gText_ApprenticeThanksHeldItem4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem4) < 0x48
	.space 0x48 - (. - gText_ApprenticeThanksHeldItem4)
	.endif

	@ data/text/apprentice.inc:313 gText_ApprenticeItemAlreadyRecommended4
	.globl gText_ApprenticeItemAlreadyRecommended4
gText_ApprenticeItemAlreadyRecommended4: @ 0x0826F079
	.string "えっ なに いってるのよ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\pそれとも {STR_VAR_2}は\nてぶらで がんばれ って ことかしら?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended4) > 0x41
	.error "gText_ApprenticeItemAlreadyRecommended4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended4) < 0x41
	.space 0x41 - (. - gText_ApprenticeItemAlreadyRecommended4)
	.endif

	@ data/text/apprentice.inc:316 gText_ApprenticeWhatHeldItem5
	.globl gText_ApprenticeWhatHeldItem5
gText_ApprenticeWhatHeldItem5: @ 0x0826F0BA
	.string "よっ {PLAYER}{KUN}\nいそがしい わりには よく あうよね!\lオレは きょうは\lウォーキング クリーニング それに\lブラッシングと たいへん そのものさ!\pおかげで だいじな {STR_VAR_1}にも\nどうぐ さえ かって やれなくてねー\pあのさ! じかんも ないから\nなにを {STR_VAR_1}に\lもたせて やったら いいか\lそれだけでも アドバイス してよ!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem5) > 0xa4
	.error "gText_ApprenticeWhatHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem5) < 0xa4
	.space 0xa4 - (. - gText_ApprenticeWhatHeldItem5)
	.endif

	@ data/text/apprentice.inc:319 gText_ApprenticeHoldNothing5
	.globl gText_ApprenticeHoldNothing5
gText_ApprenticeHoldNothing5: @ 0x0826F15E
	.string "おっ それじゃ\nいそがしい オレの {STR_VAR_1}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing5) > 0x29
	.error "gText_ApprenticeHoldNothing5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing5) < 0x29
	.space 0x29 - (. - gText_ApprenticeHoldNothing5)
	.endif

	@ data/text/apprentice.inc:322 gText_ApprenticeThanksNoHeldItem5
	.globl gText_ApprenticeThanksNoHeldItem5
gText_ApprenticeThanksNoHeldItem5: @ 0x0826F187
	.string "オーケー わかった!\nそれ なら じかんも いらないぜ\pきょうは サンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem5) > 0x30
	.error "gText_ApprenticeThanksNoHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem5) < 0x30
	.space 0x30 - (. - gText_ApprenticeThanksNoHeldItem5)
	.endif

	@ data/text/apprentice.inc:325 gText_ApprenticeThanksHeldItem5
	.globl gText_ApprenticeThanksHeldItem5
gText_ApprenticeThanksHeldItem5: @ 0x0826F1B7
	.string "オーケー わかった!\nじゃ なんとか じかん つくって\l{STR_VAR_1}を さがすぜ!\pオレは いい せんせいに であえたよな\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem5) > 0x49
	.error "gText_ApprenticeThanksHeldItem5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem5) < 0x49
	.space 0x49 - (. - gText_ApprenticeThanksHeldItem5)
	.endif

	@ data/text/apprentice.inc:328 gText_ApprenticeItemAlreadyRecommended5
	.globl gText_ApprenticeItemAlreadyRecommended5
gText_ApprenticeItemAlreadyRecommended5: @ 0x0826F200
	.string "あれっ {STR_VAR_1}は\nもう しってるよ!\pん? それとも\nいそがしい オレの {STR_VAR_2}は\lなにも もたなくて イイ ってこと?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended5) > 0x3b
	.error "gText_ApprenticeItemAlreadyRecommended5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended5) < 0x3b
	.space 0x3b - (. - gText_ApprenticeItemAlreadyRecommended5)
	.endif

	@ data/text/apprentice.inc:331 gText_ApprenticeWhatHeldItem6
	.globl gText_ApprenticeWhatHeldItem6
gText_ApprenticeWhatHeldItem6: @ 0x0826F23B
	.string "よぅ {PLAYER}さん わたしだよ!\nきょうも ひとつ そうだんが あるの\lアドバイス おねがい ねっ!\pジャーン では そうだんです!\nわたしの {STR_VAR_1}に\lなにか どうぐを もたせるなら\lいったい なにに したら いいかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem6) > 0x6d
	.error "gText_ApprenticeWhatHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem6) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhatHeldItem6)
	.endif

	@ data/text/apprentice.inc:334 gText_ApprenticeHoldNothing6
	.globl gText_ApprenticeHoldNothing6
gText_ApprenticeHoldNothing6: @ 0x0826F2A8
	.string "ふーん? {STR_VAR_1}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing6) > 0x1c
	.error "gText_ApprenticeHoldNothing6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing6) < 0x1c
	.space 0x1c - (. - gText_ApprenticeHoldNothing6)
	.endif

	@ data/text/apprentice.inc:337 gText_ApprenticeThanksNoHeldItem6
	.globl gText_ApprenticeThanksNoHeldItem6
gText_ApprenticeThanksNoHeldItem6: @ 0x0826F2C4
	.string "じゃ そうするね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem6) > 0x32
	.error "gText_ApprenticeThanksNoHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem6) < 0x32
	.space 0x32 - (. - gText_ApprenticeThanksNoHeldItem6)
	.endif

	@ data/text/apprentice.inc:340 gText_ApprenticeThanksHeldItem6
	.globl gText_ApprenticeThanksHeldItem6
gText_ApprenticeThanksHeldItem6: @ 0x0826F2F6
	.string "ははぁーん!\n{STR_VAR_1}とは シブイわぁ\lぜひ そうして みるね!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem6) > 0x47
	.error "gText_ApprenticeThanksHeldItem6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem6) < 0x47
	.space 0x47 - (. - gText_ApprenticeThanksHeldItem6)
	.endif

	@ data/text/apprentice.inc:343 gText_ApprenticeItemAlreadyRecommended6
	.globl gText_ApprenticeItemAlreadyRecommended6
gText_ApprenticeItemAlreadyRecommended6: @ 0x0826F33D
	.string "あっはは やだぁ\n{STR_VAR_1}は もう\lおしえて もらった じゃない!\l{PLAYER}さん だいじょぶ?\pあ! それとも {STR_VAR_2}は\nもちものは いらないって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended6) > 0x4b
	.error "gText_ApprenticeItemAlreadyRecommended6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended6) < 0x4b
	.space 0x4b - (. - gText_ApprenticeItemAlreadyRecommended6)
	.endif

	@ data/text/apprentice.inc:346 gText_ApprenticeWhatHeldItem7
	.globl gText_ApprenticeWhatHeldItem7
gText_ApprenticeWhatHeldItem7: @ 0x0826F388
	.string "ごきげん いかがですか {PLAYER}さん\nきいて くださる?\pこのまえ たたかった トレーナーさん\nポケモンに なにか どうぐを\lもたせていた らしいんですの\pおかげで まけて しまいましたわ……\pわたくしも まけずに なにか\n{STR_VAR_1}に もたせたいんですの!\lなにが よろしいの でしょう\lきめて いただければ うれしいのですが……"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem7) > 0xa2
	.error "gText_ApprenticeWhatHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem7) < 0xa2
	.space 0xa2 - (. - gText_ApprenticeWhatHeldItem7)
	.endif

	@ data/text/apprentice.inc:349 gText_ApprenticeHoldNothing7
	.globl gText_ApprenticeHoldNothing7
gText_ApprenticeHoldNothing7: @ 0x0826F42A
	.string "それは つまり…… どうぐは\nもたせなくて よろしいんですのね?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing7) > 0x21
	.error "gText_ApprenticeHoldNothing7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing7) < 0x21
	.space 0x21 - (. - gText_ApprenticeHoldNothing7)
	.endif

	@ data/text/apprentice.inc:352 gText_ApprenticeThanksNoHeldItem7
	.globl gText_ApprenticeThanksNoHeldItem7
gText_ApprenticeThanksNoHeldItem7: @ 0x0826F44B
	.string "わかりましたわ!\nこのまま がんばる ことに しますわ\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem7) > 0x42
	.error "gText_ApprenticeThanksNoHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem7) < 0x42
	.space 0x42 - (. - gText_ApprenticeThanksNoHeldItem7)
	.endif

	@ data/text/apprentice.inc:355 gText_ApprenticeThanksHeldItem7
	.globl gText_ApprenticeThanksHeldItem7
gText_ApprenticeThanksHeldItem7: @ 0x0826F48D
	.string "{STR_VAR_1} ですのね!\nさっそく とりよせますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem7) > 0x3d
	.error "gText_ApprenticeThanksHeldItem7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem7) < 0x3d
	.space 0x3d - (. - gText_ApprenticeThanksHeldItem7)
	.endif

	@ data/text/apprentice.inc:358 gText_ApprenticeItemAlreadyRecommended7
	.globl gText_ApprenticeItemAlreadyRecommended7
gText_ApprenticeItemAlreadyRecommended7: @ 0x0826F4CA
	.string "それは もう おしえて いただいて\nわたくし もっておりますわ!\pそれとも…… {STR_VAR_2}には\nなにも もたせないで よろしいと……?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended7) > 0x41
	.error "gText_ApprenticeItemAlreadyRecommended7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended7) < 0x41
	.space 0x41 - (. - gText_ApprenticeItemAlreadyRecommended7)
	.endif

	@ data/text/apprentice.inc:361 gText_ApprenticeWhatHeldItem8
	.globl gText_ApprenticeWhatHeldItem8
gText_ApprenticeWhatHeldItem8: @ 0x0826F50B
	.string "{PLAYER}さんっ!\nきょうも あえて かんげき ですっ……!\pそそそそそ そうだっ!\nあのっ {PLAYER}さんに\lきめて ほしいことが あるのですっ!\pわたしの {STR_VAR_1}には\nなにを もたせれば いいですかっ?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem8) > 0x61
	.error "gText_ApprenticeWhatHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem8) < 0x61
	.space 0x61 - (. - gText_ApprenticeWhatHeldItem8)
	.endif

	@ data/text/apprentice.inc:364 gText_ApprenticeHoldNothing8
	.globl gText_ApprenticeHoldNothing8
gText_ApprenticeHoldNothing8: @ 0x0826F56C
	.string "うわあぁっ いがいな おこたえだあ!\nつまり なにも いらないの ですねっ?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing8) > 0x27
	.error "gText_ApprenticeHoldNothing8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing8) < 0x27
	.space 0x27 - (. - gText_ApprenticeHoldNothing8)
	.endif

	@ data/text/apprentice.inc:367 gText_ApprenticeThanksNoHeldItem8
	.globl gText_ApprenticeThanksNoHeldItem8
gText_ApprenticeThanksNoHeldItem8: @ 0x0826F593
	.string "りょうかいで ありますっ!\nどうぐ なしで がんばるで あります!\pでは また こんど\nいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem8) > 0x3e
	.error "gText_ApprenticeThanksNoHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem8) < 0x3e
	.space 0x3e - (. - gText_ApprenticeThanksNoHeldItem8)
	.endif

	@ data/text/apprentice.inc:370 gText_ApprenticeThanksHeldItem8
	.globl gText_ApprenticeThanksHeldItem8
gText_ApprenticeThanksHeldItem8: @ 0x0826F5D1
	.string "{STR_VAR_1} ですねっ!\nこれって これって {PLAYER}さんと\lもしかして おそろい だったりしてっ!\pもー ぜったい もたせちゃいます!\nでは また こんど\lいろいろと おしえて くださいね!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem8) > 0x5b
	.error "gText_ApprenticeThanksHeldItem8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem8) < 0x5b
	.space 0x5b - (. - gText_ApprenticeThanksHeldItem8)
	.endif

	@ data/text/apprentice.inc:373 gText_ApprenticeItemAlreadyRecommended8
	.globl gText_ApprenticeItemAlreadyRecommended8
gText_ApprenticeItemAlreadyRecommended8: @ 0x0826F62C
	.string "あれ まえにも {STR_VAR_1}を\nおすすめして くれました よね!\pやっぱり コレが いちばん ですかっ?\nあ それとも もしかして\l{STR_VAR_2}には なにも\lもたせなくて いいって ことですかっ?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended8) > 0x5b
	.error "gText_ApprenticeItemAlreadyRecommended8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended8) < 0x5b
	.space 0x5b - (. - gText_ApprenticeItemAlreadyRecommended8)
	.endif

	@ data/text/apprentice.inc:376 gText_ApprenticeWhatHeldItem9
	.globl gText_ApprenticeWhatHeldItem9
gText_ApprenticeWhatHeldItem9: @ 0x0826F687
	.string "ハロウ ハローウ\nマイ ティーチャー {PLAYER}{KUN}!\pきょうは ポケモンの どうぐに ついて\nアドバイスを おねがい したいんだ!\pおじさんの {STR_VAR_1}には\nどんな どうぐを もたせれば いいかな?\lパーっと きめちゃって くれ!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem9) > 0x70
	.error "gText_ApprenticeWhatHeldItem9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem9) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhatHeldItem9)
	.endif

	@ data/text/apprentice.inc:379 gText_ApprenticeHoldNothing9
	.globl gText_ApprenticeHoldNothing9
gText_ApprenticeHoldNothing9: @ 0x0826F6F7
	.string "おっと それは\n{STR_VAR_1}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing9) > 0x29
	.error "gText_ApprenticeHoldNothing9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing9) < 0x29
	.space 0x29 - (. - gText_ApprenticeHoldNothing9)
	.endif

	@ data/text/apprentice.inc:382 gText_ApprenticeThanksNoHeldItem9
	.globl gText_ApprenticeThanksNoHeldItem9
gText_ApprenticeThanksNoHeldItem9: @ 0x0826F720
	.string "オーケイ オーケイ!\nおじさん グーっと がんばるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem9) > 0x36
	.error "gText_ApprenticeThanksNoHeldItem9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem9) < 0x36
	.space 0x36 - (. - gText_ApprenticeThanksNoHeldItem9)
	.endif

	@ data/text/apprentice.inc:385 gText_ApprenticeThanksHeldItem9
	.globl gText_ApprenticeThanksHeldItem9
gText_ApprenticeThanksHeldItem9: @ 0x0826F756
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ゴーっと さがして くるよ!\pそれじゃあ これからも よろしくね\nアディオース!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem9) > 0x41
	.error "gText_ApprenticeThanksHeldItem9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem9) < 0x41
	.space 0x41 - (. - gText_ApprenticeThanksHeldItem9)
	.endif

	@ data/text/apprentice.inc:388 gText_ApprenticeItemAlreadyRecommended9
	.globl gText_ApprenticeItemAlreadyRecommended9
gText_ApprenticeItemAlreadyRecommended9: @ 0x0826F797
	.string "ノンノン! {STR_VAR_1}は\nまえに おしえて もらったよ!\pお それとも もしや\n{STR_VAR_2}は なにも もたせずとも\lかてる っていう こと なのかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended9) > 0x46
	.error "gText_ApprenticeItemAlreadyRecommended9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended9) < 0x46
	.space 0x46 - (. - gText_ApprenticeItemAlreadyRecommended9)
	.endif

	@ data/text/apprentice.inc:391 gText_ApprenticeWhatHeldItem10
	.globl gText_ApprenticeWhatHeldItem10
gText_ApprenticeWhatHeldItem10: @ 0x0826F7DD
	.string "{PLAYER}{KUN} ちょっと\nしんじられん ことが おきた!\pけさ おきたら ポケモンが\nきんのたまを 10コ もってたんだ!\l…… なーんて うっそさ! うわはは!\pじつは おいら ポケモンの どうぐを\nかんがえる こと なんて\lあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの {STR_VAR_1}\lなにを もたせたら いいのか\lししょうが きめて くれない かな?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem10) > 0xb3
	.error "gText_ApprenticeWhatHeldItem10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem10) < 0xb3
	.space 0xb3 - (. - gText_ApprenticeWhatHeldItem10)
	.endif

	@ data/text/apprentice.inc:394 gText_ApprenticeHoldNothing10
	.globl gText_ApprenticeHoldNothing10
gText_ApprenticeHoldNothing10: @ 0x0826F890
	.string "どういう ことかな?\nなにも もたせなくて いいんだな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing10) > 0x1d
	.error "gText_ApprenticeHoldNothing10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing10) < 0x1d
	.space 0x1d - (. - gText_ApprenticeHoldNothing10)
	.endif

	@ data/text/apprentice.inc:397 gText_ApprenticeThanksNoHeldItem10
	.globl gText_ApprenticeThanksNoHeldItem10
gText_ApprenticeThanksNoHeldItem10: @ 0x0826F8AD
	.string "そうか てぶらで いいのね!\nじゃあ なにか もたせようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem10) > 0x5d
	.error "gText_ApprenticeThanksNoHeldItem10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeThanksNoHeldItem10)
	.endif

	@ data/text/apprentice.inc:400 gText_ApprenticeThanksHeldItem10
	.globl gText_ApprenticeThanksHeldItem10
gText_ApprenticeThanksHeldItem10: @ 0x0826F90A
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ それだけは やめとこっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem10) > 0x5d
	.error "gText_ApprenticeThanksHeldItem10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeThanksHeldItem10)
	.endif

	@ data/text/apprentice.inc:403 gText_ApprenticeItemAlreadyRecommended10
	.globl gText_ApprenticeItemAlreadyRecommended10
gText_ApprenticeItemAlreadyRecommended10: @ 0x0826F967
	.string "あー それは いちど\nおしえて もらったことが あるだろ?\lちがうので なにか ないかな?\pそれとも {STR_VAR_2}は\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended10) > 0x49
	.error "gText_ApprenticeItemAlreadyRecommended10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended10) < 0x49
	.space 0x49 - (. - gText_ApprenticeItemAlreadyRecommended10)
	.endif

	@ data/text/apprentice.inc:406 gText_ApprenticeWhatHeldItem11
	.globl gText_ApprenticeWhatHeldItem11
gText_ApprenticeWhatHeldItem11: @ 0x0826F9B0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしが おくる\lそうだんタイム いってみよう!\lどうぐに かんする そうだんだよ!\pわしの {STR_VAR_1}に もたせるなら\nさあ どんな どうぐがいい?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem11) > 0x69
	.error "gText_ApprenticeWhatHeldItem11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem11) < 0x69
	.space 0x69 - (. - gText_ApprenticeWhatHeldItem11)
	.endif

	@ data/text/apprentice.inc:409 gText_ApprenticeHoldNothing11
	.globl gText_ApprenticeHoldNothing11
gText_ApprenticeHoldNothing11: @ 0x0826FA19
	.string "それは あれかな? {STR_VAR_1}は\nなんにも もたなくて いいのかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing11) > 0x20
	.error "gText_ApprenticeHoldNothing11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing11) < 0x20
	.space 0x20 - (. - gText_ApprenticeHoldNothing11)
	.endif

	@ data/text/apprentice.inc:412 gText_ApprenticeThanksNoHeldItem11
	.globl gText_ApprenticeThanksNoHeldItem11
gText_ApprenticeThanksNoHeldItem11: @ 0x0826FA39
	.string "そうかーっ! ようよう!\nそんなら ノリノリで てぶらでいくぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem11) > 0x37
	.error "gText_ApprenticeThanksNoHeldItem11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem11) < 0x37
	.space 0x37 - (. - gText_ApprenticeThanksNoHeldItem11)
	.endif

	@ data/text/apprentice.inc:415 gText_ApprenticeThanksHeldItem11
	.globl gText_ApprenticeThanksHeldItem11
gText_ApprenticeThanksHeldItem11: @ 0x0826FA70
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで もたせてみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem11) > 0x37
	.error "gText_ApprenticeThanksHeldItem11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem11) < 0x37
	.space 0x37 - (. - gText_ApprenticeThanksHeldItem11)
	.endif

	@ data/text/apprentice.inc:418 gText_ApprenticeItemAlreadyRecommended11
	.globl gText_ApprenticeItemAlreadyRecommended11
gText_ApprenticeItemAlreadyRecommended11: @ 0x0826FAA7
	.string "{STR_VAR_1}かーっ! おいおい!\nそれなら きいたことが あるぜ!\lなんか ちがうやつを たのむぜ!\pそれとも あれかな?\nなにも もたせなくて いいのかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended11) > 0x4c
	.error "gText_ApprenticeItemAlreadyRecommended11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended11) < 0x4c
	.space 0x4c - (. - gText_ApprenticeItemAlreadyRecommended11)
	.endif

	@ data/text/apprentice.inc:421 gText_ApprenticeWhatHeldItem12
	.globl gText_ApprenticeWhatHeldItem12
gText_ApprenticeWhatHeldItem12: @ 0x0826FAF3
	.string "オッケ {PLAYER}さん!\nきょうも みつけたぜェ!\lどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pって {PLAYER}さん オレのこと そろそろ\nきらいに なってる!? なってない!!\lそうだんが あるんだけど きいてェ!\pオレの {STR_VAR_1} なんだけど\nいい どうぐを もたせたいんだ!\lなにが いいか さあ きめて!"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem12) > 0xa3
	.error "gText_ApprenticeWhatHeldItem12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem12) < 0xa3
	.space 0xa3 - (. - gText_ApprenticeWhatHeldItem12)
	.endif

	@ data/text/apprentice.inc:424 gText_ApprenticeHoldNothing12
	.globl gText_ApprenticeHoldNothing12
gText_ApprenticeHoldNothing12: @ 0x0826FB96
	.string "エェ!? じゃあ {STR_VAR_1}には\nなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing12) > 0x23
	.error "gText_ApprenticeHoldNothing12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing12) < 0x23
	.space 0x23 - (. - gText_ApprenticeHoldNothing12)
	.endif

	@ data/text/apprentice.inc:427 gText_ApprenticeThanksNoHeldItem12
	.globl gText_ApprenticeThanksNoHeldItem12
gText_ApprenticeThanksNoHeldItem12: @ 0x0826FBB9
	.string "もたせないってエェ!\nじゃ いうとおりに するよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem12) > 0x3c
	.error "gText_ApprenticeThanksNoHeldItem12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeThanksNoHeldItem12)
	.endif

	@ data/text/apprentice.inc:430 gText_ApprenticeThanksHeldItem12
	.globl gText_ApprenticeThanksHeldItem12
gText_ApprenticeThanksHeldItem12: @ 0x0826FBF5
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく もたせてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem12) > 0x3c
	.error "gText_ApprenticeThanksHeldItem12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeThanksHeldItem12)
	.endif

	@ data/text/apprentice.inc:433 gText_ApprenticeItemAlreadyRecommended12
	.globl gText_ApprenticeItemAlreadyRecommended12
gText_ApprenticeItemAlreadyRecommended12: @ 0x0826FC31
	.string "ちょっと まったァ!\nその {STR_VAR_1}って\lまえに きいたことが ある!? ある!!\pほかのを おしえて!\nそれとも {STR_VAR_2}には\lなにも もたせなくて いいって こと!?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended12) > 0x52
	.error "gText_ApprenticeItemAlreadyRecommended12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended12) < 0x52
	.space 0x52 - (. - gText_ApprenticeItemAlreadyRecommended12)
	.endif

	@ data/text/apprentice.inc:436 gText_ApprenticeWhatHeldItem13
	.globl gText_ApprenticeWhatHeldItem13
gText_ApprenticeWhatHeldItem13: @ 0x0826FC83
	.string "ギャッ いててっ! {PLAYER}{KUN}\nうでが おれてるから さわらないでよ!\pポケモンに なにを もたせるか\nじぶんで いろいろ ためしすぎちゃって\lうでが おれちゃったん だよね きっと!\pというわけ だからさ\nかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\nどんな どうぐ もたせたら いいとおもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem13) > 0x99
	.error "gText_ApprenticeWhatHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem13) < 0x99
	.space 0x99 - (. - gText_ApprenticeWhatHeldItem13)
	.endif

	@ data/text/apprentice.inc:439 gText_ApprenticeHoldNothing13
	.globl gText_ApprenticeHoldNothing13
gText_ApprenticeHoldNothing13: @ 0x0826FD1C
	.string "いてて…… えーっと それって\n{STR_VAR_1}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing13) > 0x2b
	.error "gText_ApprenticeHoldNothing13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing13) < 0x2b
	.space 0x2b - (. - gText_ApprenticeHoldNothing13)
	.endif

	@ data/text/apprentice.inc:442 gText_ApprenticeThanksNoHeldItem13
	.globl gText_ApprenticeThanksNoHeldItem13
gText_ApprenticeThanksNoHeldItem13: @ 0x0826FD47
	.string "ん わかった\nおれも いまは そのほうが たすかるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem13) > 0x31
	.error "gText_ApprenticeThanksNoHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem13) < 0x31
	.space 0x31 - (. - gText_ApprenticeThanksNoHeldItem13)
	.endif

	@ data/text/apprentice.inc:445 gText_ApprenticeThanksHeldItem13
	.globl gText_ApprenticeThanksHeldItem13
gText_ApprenticeThanksHeldItem13: @ 0x0826FD78
	.string "ん わかった {STR_VAR_1}な!\nじゃあ ポケモンの うでは ぶじだから\lさっそく もたせてみるよ!\pこれからも おれを よろしく たのむよ!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem13) > 0x43
	.error "gText_ApprenticeThanksHeldItem13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem13) < 0x43
	.space 0x43 - (. - gText_ApprenticeThanksHeldItem13)
	.endif

	@ data/text/apprentice.inc:448 gText_ApprenticeItemAlreadyRecommended13
	.globl gText_ApprenticeItemAlreadyRecommended13
gText_ApprenticeItemAlreadyRecommended13: @ 0x0826FDBB
	.string "いやいや {STR_VAR_1}は\nこのあいだ おしえて くれただろ?\lもっと すごいの おしえてくれよ!\pあ それとも\n{STR_VAR_2}には なにも もたせなくて\lいいって ことかな?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended13) > 0x4f
	.error "gText_ApprenticeItemAlreadyRecommended13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended13) < 0x4f
	.space 0x4f - (. - gText_ApprenticeItemAlreadyRecommended13)
	.endif

	@ data/text/apprentice.inc:451 gText_ApprenticeWhatHeldItem14
	.globl gText_ApprenticeWhatHeldItem14
gText_ApprenticeWhatHeldItem14: @ 0x0826FE0A
	.string "あ…… あ……\n{PLAYER}{KUN}……\pそ そんなに みないで くれよ\nワシの ポケモン なにも もってないからさ\pちょっと…… そうだん させて くれよ\nは はずかしいん だけどさ!\l{STR_VAR_1}が なにを\lもったら つよいか って なやんでてさ\l{PLAYER}{KUN} なにが いいと おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem14) > 0x86
	.error "gText_ApprenticeWhatHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem14) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhatHeldItem14)
	.endif

	@ data/text/apprentice.inc:454 gText_ApprenticeHoldNothing14
	.globl gText_ApprenticeHoldNothing14
gText_ApprenticeHoldNothing14: @ 0x0826FE90
	.string "じゃ…… {STR_VAR_1}は なにも\nもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing14) > 0x20
	.error "gText_ApprenticeHoldNothing14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing14) < 0x20
	.space 0x20 - (. - gText_ApprenticeHoldNothing14)
	.endif

	@ data/text/apprentice.inc:457 gText_ApprenticeThanksNoHeldItem14
	.globl gText_ApprenticeThanksNoHeldItem14
gText_ApprenticeThanksNoHeldItem14: @ 0x0826FEB0
	.string "よ よし!\nどうぐ なしで いくよ!\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem14) > 0x4a
	.error "gText_ApprenticeThanksNoHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem14) < 0x4a
	.space 0x4a - (. - gText_ApprenticeThanksNoHeldItem14)
	.endif

	@ data/text/apprentice.inc:460 gText_ApprenticeThanksHeldItem14
	.globl gText_ApprenticeThanksHeldItem14
gText_ApprenticeThanksHeldItem14: @ 0x0826FEFA
	.string "よ よし!\n{STR_VAR_1}に してみるよ\pうう てれるな\nかっこ よすぎない かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem14) > 0x47
	.error "gText_ApprenticeThanksHeldItem14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem14) < 0x47
	.space 0x47 - (. - gText_ApprenticeThanksHeldItem14)
	.endif

	@ data/text/apprentice.inc:463 gText_ApprenticeItemAlreadyRecommended14
	.globl gText_ApprenticeItemAlreadyRecommended14
gText_ApprenticeItemAlreadyRecommended14: @ 0x0826FF41
	.string "それは も もう きいた じゃないか\pて てを ぬかないでくれ!\nワシに はじを かかせないで くれ!\pあ…… それとも\n{STR_VAR_2}は なにも\lもたない ほうが いいの かな……?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended14) > 0x58
	.error "gText_ApprenticeItemAlreadyRecommended14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended14) < 0x58
	.space 0x58 - (. - gText_ApprenticeItemAlreadyRecommended14)
	.endif

	@ data/text/apprentice.inc:466 gText_ApprenticeWhatHeldItem15
	.globl gText_ApprenticeWhatHeldItem15
gText_ApprenticeWhatHeldItem15: @ 0x0826FF99
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\lふたごの きょうだい って ことは?\pあっ いやいや いやいや!\nほんもの なら いいんだ わすれてくれ!\lさらに じょげんを おねがい したい!\pこの わたしの {STR_VAR_1}!\nなにか べんりな どうぐを もたせたい\lいったい どれが ふさわしい かな?"
	.byte EOS
	.if (. - gText_ApprenticeWhatHeldItem15) > 0x9c
	.error "gText_ApprenticeWhatHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhatHeldItem15) < 0x9c
	.space 0x9c - (. - gText_ApprenticeWhatHeldItem15)
	.endif

	@ data/text/apprentice.inc:469 gText_ApprenticeHoldNothing15
	.globl gText_ApprenticeHoldNothing15
gText_ApprenticeHoldNothing15: @ 0x08270035
	.string "なにも もたない ほうが いい……?\nほんとうかね?"
	.byte EOS
	.if (. - gText_ApprenticeHoldNothing15) > 0x1b
	.error "gText_ApprenticeHoldNothing15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeHoldNothing15) < 0x1b
	.space 0x1b - (. - gText_ApprenticeHoldNothing15)
	.endif

	@ data/text/apprentice.inc:472 gText_ApprenticeThanksNoHeldItem15
	.globl gText_ApprenticeThanksNoHeldItem15
gText_ApprenticeThanksNoHeldItem15: @ 0x08270050
	.string "いや そうか なら いいんだ\nどうも ありがとう\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksNoHeldItem15) > 0x27
	.error "gText_ApprenticeThanksNoHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksNoHeldItem15) < 0x27
	.space 0x27 - (. - gText_ApprenticeThanksNoHeldItem15)
	.endif

	@ data/text/apprentice.inc:475 gText_ApprenticeThanksHeldItem15
	.globl gText_ApprenticeThanksHeldItem15
gText_ApprenticeThanksHeldItem15: @ 0x08270077
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lつかいこなせると いいな\pでは いずれまた あおう!"
	.byte EOS
	.if (. - gText_ApprenticeThanksHeldItem15) > 0x52
	.error "gText_ApprenticeThanksHeldItem15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeThanksHeldItem15) < 0x52
	.space 0x52 - (. - gText_ApprenticeThanksHeldItem15)
	.endif

	@ data/text/apprentice.inc:478 gText_ApprenticeItemAlreadyRecommended15
	.globl gText_ApprenticeItemAlreadyRecommended15
gText_ApprenticeItemAlreadyRecommended15: @ 0x082700C9
	.string "いやいや まってくれ\nそれは まえに おしえてくれた だろう\lそれとは ちがった ものを\lすすめられて みたいんだ\pそれとも {STR_VAR_2}は\nなにも もたない ほうが いい……?\lほんとうかね?"
	.byte EOS
	.if (. - gText_ApprenticeItemAlreadyRecommended15) > 0x5e
	.error "gText_ApprenticeItemAlreadyRecommended15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeItemAlreadyRecommended15) < 0x5e
	.space 0x5e - (. - gText_ApprenticeItemAlreadyRecommended15)
	.endif

	@ data/text/apprentice.inc:481 gText_ApprenticeWhichMonFirst0
	.globl gText_ApprenticeWhichMonFirst0
gText_ApprenticeWhichMonFirst0: @ 0x08270127
	.string "えーん {PLAYER}さーん!\nぼく こまって いるんです グスン\pそろそろ しょうぶを して みたいけど\nポケモンを どんな じゅんばんで\lだしたら つよいのか わかんない……\p{PLAYER}さん だったら\nどの ポケモンを さいしょに だすか\l……おしえて ください!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst0) > 0x7f
	.error "gText_ApprenticeWhichMonFirst0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst0) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichMonFirst0)
	.endif

	@ data/text/apprentice.inc:484 gText_ApprenticeMonFirstThanks0
	.globl gText_ApprenticeMonFirstThanks0
gText_ApprenticeMonFirstThanks0: @ 0x082701A6
	.string "{STR_VAR_1} ですね! うぅ うわーん!\pあ! ごめんなさい\nじゅんばんが きまった うれしさで\lなみだが……\pじゃあ ありがとう ございました!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks0) > 0x46
	.error "gText_ApprenticeMonFirstThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks0) < 0x46
	.space 0x46 - (. - gText_ApprenticeMonFirstThanks0)
	.endif

	@ data/text/apprentice.inc:487 gText_ApprenticeWhichMonFirst1
	.globl gText_ApprenticeWhichMonFirst1
gText_ApprenticeWhichMonFirst1: @ 0x082701EC
	.string "わわっ! {PLAYER}さんだー!\nわーい あえて よかった\lそうだん したいことが あるんだ!\pあのね ぼくの もってる\nポケモン たちの なかで\lどれを さいしょに だせば\lいいと おもう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst1) > 0x5d
	.error "gText_ApprenticeWhichMonFirst1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst1) < 0x5d
	.space 0x5d - (. - gText_ApprenticeWhichMonFirst1)
	.endif

	@ data/text/apprentice.inc:490 gText_ApprenticeMonFirstThanks1
	.globl gText_ApprenticeMonFirstThanks1
gText_ApprenticeMonFirstThanks1: @ 0x08270249
	.string "{STR_VAR_1}かあ そーだよね!\nじゃあ そうするー!\pせんせい ありがと!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks1) > 0x22
	.error "gText_ApprenticeMonFirstThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks1) < 0x22
	.space 0x22 - (. - gText_ApprenticeMonFirstThanks1)
	.endif

	@ data/text/apprentice.inc:493 gText_ApprenticeWhichMonFirst2
	.globl gText_ApprenticeWhichMonFirst2
gText_ApprenticeWhichMonFirst2: @ 0x0827026B
	.string "{PLAYER}さん こんにちは!\nしょうぶのときって さいしょに\pどの ポケモンを だすのかが\nとても だいじな きが するんです!\pぼくが もってる ポケモンの なかで\nどの ポケモンを\lさいしょに だすと いいでしょうか?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst2) > 0x6d
	.error "gText_ApprenticeWhichMonFirst2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst2) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhichMonFirst2)
	.endif

	@ data/text/apprentice.inc:496 gText_ApprenticeMonFirstThanks2
	.globl gText_ApprenticeMonFirstThanks2
gText_ApprenticeMonFirstThanks2: @ 0x082702D8
	.string "{STR_VAR_1} ですね!\nわかりました!\pじゃあ また!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks2) > 0x18
	.error "gText_ApprenticeMonFirstThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks2) < 0x18
	.space 0x18 - (. - gText_ApprenticeMonFirstThanks2)
	.endif

	@ data/text/apprentice.inc:499 gText_ApprenticeWhichMonFirst3
	.globl gText_ApprenticeWhichMonFirst3
gText_ApprenticeWhichMonFirst3: @ 0x082702F0
	.string "{PLAYER}さん いつも\nそうだん ばかりで すみません……\lあたし じしんが なくって\l{PLAYER}さんが いないと……!\pあの ポケモンの じゅんばん って……\nどうすれば いいと おもいますか?\pあたし なんかが こだわっても\nしかたが ないかも しれません けど\lどうしても きめられなくて……\pどの ポケモンを 1ばん\nせんとうに すれば よいんでしょうか!"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst3) > 0xb1
	.error "gText_ApprenticeWhichMonFirst3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst3) < 0xb1
	.space 0xb1 - (. - gText_ApprenticeWhichMonFirst3)
	.endif

	@ data/text/apprentice.inc:502 gText_ApprenticeMonFirstThanks3
	.globl gText_ApprenticeMonFirstThanks3
gText_ApprenticeMonFirstThanks3: @ 0x082703A1
	.string "{STR_VAR_1} ですか わかりました!\pこんな あたし なんかに\nなんども こたえて いただけるなんて\lしんじられない!\pきょうは あたしなんかの ために\nありがとう ございました……!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks3) > 0x59
	.error "gText_ApprenticeMonFirstThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks3) < 0x59
	.space 0x59 - (. - gText_ApprenticeMonFirstThanks3)
	.endif

	@ data/text/apprentice.inc:505 gText_ApprenticeWhichMonFirst4
	.globl gText_ApprenticeWhichMonFirst4
gText_ApprenticeWhichMonFirst4: @ 0x082703FA
	.string "{PLAYER}{KUN}! わたしよ\nよかったわ こまっていたの!\pちょっと ポケモンの じゅんばんを\nきめて もらえる かしら!\lと いっても そうねえ\lとりあえず 1ばんめの ポケモンで いいわ\lどの ポケモンに したら いいかしら?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst4) > 0x70
	.error "gText_ApprenticeWhichMonFirst4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst4) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhichMonFirst4)
	.endif

	@ data/text/apprentice.inc:508 gText_ApprenticeMonFirstThanks4
	.globl gText_ApprenticeMonFirstThanks4
gText_ApprenticeMonFirstThanks4: @ 0x0827046A
	.string "{STR_VAR_1}ね いいわ!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks4) > 0x3d
	.error "gText_ApprenticeMonFirstThanks4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks4) < 0x3d
	.space 0x3d - (. - gText_ApprenticeMonFirstThanks4)
	.endif

	@ data/text/apprentice.inc:511 gText_ApprenticeWhichMonFirst5
	.globl gText_ApprenticeWhichMonFirst5
gText_ApprenticeWhichMonFirst5: @ 0x082704A7
	.string "ハイ! オレの せんせい\n{PLAYER}{KUN}!\pきょうも いそがしいんだ オレ\nサイクリングに ショッピングに ハミング!\pしょうぶに つかう ポケモンの\nじゅんばんさえ きめられなくてねー\pあのさ!\nちょっと オレの ポケモン みてよ!\lで どいつが はじめに でれば いいかな?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst5) > 0x89
	.error "gText_ApprenticeWhichMonFirst5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst5) < 0x89
	.space 0x89 - (. - gText_ApprenticeWhichMonFirst5)
	.endif

	@ data/text/apprentice.inc:514 gText_ApprenticeMonFirstThanks5
	.globl gText_ApprenticeMonFirstThanks5
gText_ApprenticeMonFirstThanks5: @ 0x08270530
	.string "オーケー わかった!\n{STR_VAR_1}を せんとうに する\nじかん くらいは あるぜ!\p……と いけね かのじょが まってる!\nサンキュー! じゃ またな!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks5) > 0x49
	.error "gText_ApprenticeMonFirstThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks5) < 0x49
	.space 0x49 - (. - gText_ApprenticeMonFirstThanks5)
	.endif

	@ data/text/apprentice.inc:517 gText_ApprenticeWhichMonFirst6
	.globl gText_ApprenticeWhichMonFirst6
gText_ApprenticeWhichMonFirst6: @ 0x08270579
	.string "ヤッホー ハーイ {PLAYER}さーん\nいつも つよそうな かおで あるいてるわね\pねえねえ! きょうも\nあれ…… おねがい! いいでしょ!\pジャーン では ほんじつの そうだん!\nわたしが もっている ポケモン!\lさあ どのコを いちばん\lさいしょに だせば いいでしょう?"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst6) > 0x86
	.error "gText_ApprenticeWhichMonFirst6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMonFirst6) < 0x86
	.space 0x86 - (. - gText_ApprenticeWhichMonFirst6)
	.endif

	@ data/text/apprentice.inc:520 gText_ApprenticeMonFirstThanks6
	.globl gText_ApprenticeMonFirstThanks6
gText_ApprenticeMonFirstThanks6: @ 0x082705FF
	.string "ふむふむ!\n{STR_VAR_1} ですねぇ?\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_ApprenticeMonFirstThanks6) > 0x47
	.error "gText_ApprenticeMonFirstThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonFirstThanks6) < 0x47
	.space 0x47 - (. - gText_ApprenticeMonFirstThanks6)
	.endif

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

	@ data/text/apprentice.inc:571 gText_ApprenticeWhichMonFirst15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_ApprenticeWhichMonFirst15
gText_ApprenticeWhichMonFirst15: @ 0x08270CCE
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lかげむしゃ って ことは ないだろうね\pいやいやいや! ほんものなら いいんだ\nおこらないで くれ!\lそして じょげんを おねがい したい!\pわたしの てもちの なかから\nどのポケモンを しょうぶの はじめに\lだせば いいのか おしえて ほしい"
	.byte EOS
	.if (. - gText_ApprenticeWhichMonFirst15) != 0x8f
	.error "gText_ApprenticeWhichMonFirst15 must retain its original byte length"
	.endif

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

	@ data/text/apprentice.inc:622 gText_ApprenticeMonThanks7
	.globl gText_ApprenticeMonThanks7
gText_ApprenticeMonThanks7: @ 0x08271399
	.string "{STR_VAR_1} ですのね!\nさっそく さがして きますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!{EOS}"
	.if (. - gText_ApprenticeMonThanks7) > 0x3f
	.error "gText_ApprenticeMonThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks7) < 0x3f
	.space 0x3f - (. - gText_ApprenticeMonThanks7)
	.endif

	@ data/text/apprentice.inc:625 gText_ApprenticeWhichMon8
	.globl gText_ApprenticeWhichMon8
gText_ApprenticeWhichMon8: @ 0x082713D8
	.string "キャー {PLAYER}さんに また あえた!\nかっ かんげきっ……!\pそそそ そうだわっ!\nせっかく あえたん ですもの\lこの チャンスを のがす ては ないわっ!\p{PLAYER}さん おねがいが!\nわたしの ポケモンを きめて くださいっ!\p{STR_VAR_1}と {STR_VAR_2}と\nどちらが いいか きめて ほしいのですっ!{EOS}"
	.if (. - gText_ApprenticeWhichMon8) > 0x8e
	.error "gText_ApprenticeWhichMon8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon8) < 0x8e
	.space 0x8e - (. - gText_ApprenticeWhichMon8)
	.endif

	@ data/text/apprentice.inc:628 gText_ApprenticeMonThanks8
	.globl gText_ApprenticeMonThanks8
gText_ApprenticeMonThanks8: @ 0x08271466
	.string "うわぁぁ きめて もらっちゃったあ!\n{STR_VAR_1} ですねっ!\lがんばって そだてるで あります!\pでは また こんど\nいろいろと おしえて くださいね!{EOS}"
	.if (. - gText_ApprenticeMonThanks8) > 0x4a
	.error "gText_ApprenticeMonThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks8) < 0x4a
	.space 0x4a - (. - gText_ApprenticeMonThanks8)
	.endif

	@ data/text/apprentice.inc:631 gText_ApprenticeWhichMon9
	.globl gText_ApprenticeWhichMon9
gText_ApprenticeWhichMon9: @ 0x082714B0
	.string "ヘイ ヘイ {PLAYER}{KUN}!\nおじさんの ポケモン ティーチャー!\pハロウ きみを さがしてたんだよ\nアドバイスを おねがいするよ!\pおじさんが つかう ポケモン\nどっちが いいかな?\l{STR_VAR_1}か {STR_VAR_2}か\lパーっと きめちゃって くれ!{EOS}"
	.if (. - gText_ApprenticeWhichMon9) > 0x72
	.error "gText_ApprenticeWhichMon9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon9) < 0x72
	.space 0x72 - (. - gText_ApprenticeWhichMon9)
	.endif

	@ data/text/apprentice.inc:634 gText_ApprenticeMonThanks9
	.globl gText_ApprenticeMonThanks9
gText_ApprenticeMonThanks9: @ 0x08271522
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガーっと つかまえて くるよ!\pそれじゃあ これからも よろしくね\nアディオース!{EOS}"
	.if (. - gText_ApprenticeMonThanks9) > 0x42
	.error "gText_ApprenticeMonThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks9) < 0x42
	.space 0x42 - (. - gText_ApprenticeMonThanks9)
	.endif

	@ data/text/apprentice.inc:637 gText_ApprenticeWhichMon10
	.globl gText_ApprenticeWhichMon10
gText_ApprenticeWhichMon10: @ 0x08271564
	.string "{PLAYER}{KUN} たいへんだ たいへんだ!\nまぼろしの ポケモン つかまえちゃった!\l……なんて うそさ! わっはっは\pじつは おいら ポケモン つかまえるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを つかまえたら いいか\lししょうが きめて くれない かな?\pどっちが いいかな?\n{STR_VAR_1}と {STR_VAR_2}だと……{EOS}"
	.if (. - gText_ApprenticeWhichMon10) > 0xa9
	.error "gText_ApprenticeWhichMon10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon10) < 0xa9
	.space 0xa9 - (. - gText_ApprenticeWhichMon10)
	.endif

	@ data/text/apprentice.inc:640 gText_ApprenticeMonThanks10
	.globl gText_ApprenticeMonThanks10
gText_ApprenticeMonThanks10: @ 0x0827160D
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー{EOS}"
	.if (. - gText_ApprenticeMonThanks10) > 0x5d
	.error "gText_ApprenticeMonThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeMonThanks10)
	.endif

	@ data/text/apprentice.inc:643 gText_ApprenticeWhichMon11
	.globl gText_ApprenticeWhichMon11
gText_ApprenticeWhichMon11: @ 0x0827166A
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わし\lきみは とうぜん おぼえてるだろ?\pきょうも わしの しつもん いってみよう!\nポケモンに かんする そうだんだよ!\p{STR_VAR_1} と {STR_VAR_2}\nわしが つかまえるなら さあ どっち?{EOS}"
	.if (. - gText_ApprenticeWhichMon11) > 0x7b
	.error "gText_ApprenticeWhichMon11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon11) < 0x7b
	.space 0x7b - (. - gText_ApprenticeWhichMon11)
	.endif

	@ data/text/apprentice.inc:646 gText_ApprenticeMonThanks11
	.globl gText_ApprenticeMonThanks11
gText_ApprenticeMonThanks11: @ 0x082716E5
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで さがしてくるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!{EOS}"
	.if (. - gText_ApprenticeMonThanks11) > 0x37
	.error "gText_ApprenticeMonThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks11) < 0x37
	.space 0x37 - (. - gText_ApprenticeMonThanks11)
	.endif

	@ data/text/apprentice.inc:649 gText_ApprenticeWhichMon12
	.globl gText_ApprenticeWhichMon12
gText_ApprenticeWhichMon12: @ 0x0827171C
	.string "ゥワォ {PLAYER}さんじゃなーい!?\nどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pオスっ ひさしぶり ですっ!\nそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\lオレの ポケモン なにに したらいいかな!\p{STR_VAR_1}と {STR_VAR_2}\nどっちが いいか さあ きめて!{EOS}"
	.if (. - gText_ApprenticeWhichMon12) > 0x95
	.error "gText_ApprenticeWhichMon12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon12) < 0x95
	.space 0x95 - (. - gText_ApprenticeWhichMon12)
	.endif

	@ data/text/apprentice.inc:652 gText_ApprenticeMonThanks12
	.globl gText_ApprenticeMonThanks12
gText_ApprenticeMonThanks12: @ 0x082717B1
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく さがしてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!{EOS}"
	.if (. - gText_ApprenticeMonThanks12) > 0x3c
	.error "gText_ApprenticeMonThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeMonThanks12)
	.endif

	@ data/text/apprentice.inc:655 gText_ApprenticeWhichMon13
	.globl gText_ApprenticeWhichMon13
gText_ApprenticeWhichMon13: @ 0x082717ED
	.string "{PLAYER}{KUN}かぁ\nおれ あたま いたくてさ……\pどの ポケモンに するか\nなやみ すぎちゃったん だよね きっと\lというわけ だからさ\lかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\n{STR_VAR_1}と {STR_VAR_2} だったら\lどっちが あってると おもうかい?{EOS}"
	.if (. - gText_ApprenticeWhichMon13) > 0x7e
	.error "gText_ApprenticeWhichMon13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon13) < 0x7e
	.space 0x7e - (. - gText_ApprenticeWhichMon13)
	.endif

	@ data/text/apprentice.inc:658 gText_ApprenticeMonThanks13
	.globl gText_ApprenticeMonThanks13
gText_ApprenticeMonThanks13: @ 0x0827186B
	.string "ん わかった {STR_VAR_1}な!\nじゃあ たいちょうの いいときに\lさがしてみるよ!\pこれからも おれを よろしく たのむよ!{EOS}"
	.if (. - gText_ApprenticeMonThanks13) > 0x3b
	.error "gText_ApprenticeMonThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks13) < 0x3b
	.space 0x3b - (. - gText_ApprenticeMonThanks13)
	.endif

	@ data/text/apprentice.inc:661 gText_ApprenticeWhichMon14
	.globl gText_ApprenticeWhichMon14
gText_ApprenticeWhichMon14: @ 0x082718A6
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lちょっと…… そうだん させて くれよ\pは はずかしいん だけどさ!\nつかいたい ポケモンで なやんでててさ\l{STR_VAR_1}と {STR_VAR_2}だったら\lどっちを つかったら いい かな……?{EOS}"
	.if (. - gText_ApprenticeWhichMon14) > 0x7f
	.error "gText_ApprenticeWhichMon14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon14) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichMon14)
	.endif

	@ data/text/apprentice.inc:664 gText_ApprenticeMonThanks14
	.globl gText_ApprenticeMonThanks14
gText_ApprenticeMonThanks14: @ 0x08271925
	.string "よ よし!\n{STR_VAR_1}で がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね{EOS}"
	.if (. - gText_ApprenticeMonThanks14) > 0x4c
	.error "gText_ApprenticeMonThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks14) < 0x4c
	.space 0x4c - (. - gText_ApprenticeMonThanks14)
	.endif

	@ data/text/apprentice.inc:667 gText_ApprenticeWhichMon15
	.globl gText_ApprenticeWhichMon15
gText_ApprenticeWhichMon15: @ 0x08271971
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pいや ほんもの なら いいんだ\nついでに でしの わたしに\lじょげんを おねがい したい!\pわたしが つかう ポケモンの ことだが\n{STR_VAR_1}と {STR_VAR_2}であれば\lどちらが わたしに ふさわしい かな?{EOS}"
	.if (. - gText_ApprenticeWhichMon15) > 0x80
	.error "gText_ApprenticeWhichMon15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon15) < 0x80
	.space 0x80 - (. - gText_ApprenticeWhichMon15)
	.endif

	@ data/text/apprentice.inc:670 gText_ApprenticeMonThanks15
	.globl gText_ApprenticeMonThanks15
gText_ApprenticeMonThanks15: @ 0x082719F1
	.string "{STR_VAR_1}…… ほんとうかね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたし でも\lなんとか つかい こなせると いいな\pでは いずれまた あおう!{EOS}"
	.if (. - gText_ApprenticeMonThanks15) > 0x53
	.error "gText_ApprenticeMonThanks15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks15) < 0x53
	.space 0x53 - (. - gText_ApprenticeMonThanks15)
	.endif

	@ data/text/apprentice.inc:673 gText_ApprenticeWhichMove0
	.globl gText_ApprenticeWhichMove0
gText_ApprenticeWhichMove0: @ 0x08271A44
	.string "うわーん {PLAYER}さんだ!\nぐすん ひっく\lぼく なやんで いるんですよう!\lぼくの {STR_VAR_1}のね わざが\lなかなか きまらないん です……\pあのう あのう!\n{PLAYER}さん きめて もらえませんか?\p{STR_VAR_1}の わざ\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが いいんでしょう……?{EOS}"
	.if (. - gText_ApprenticeWhichMove0) > 0x7e
	.error "gText_ApprenticeWhichMove0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove0) < 0x7e
	.space 0x7e - (. - gText_ApprenticeWhichMove0)
	.endif

	@ data/text/apprentice.inc:676 gText_ApprenticeMoveThanks0
	.globl gText_ApprenticeMoveThanks0
gText_ApprenticeMoveThanks0: @ 0x08271AC2
	.string "{STR_VAR_1} ですね!\nうぅ うわああぁん!\pあ! ごめんなさい\n{PLAYER}さんが わざを\lきめてくれた うれしさで なみだが……\p……グスン\nありがとう ございました!\lまた おはなし してください!{EOS}"
	.if (. - gText_ApprenticeMoveThanks0) > 0x5f
	.error "gText_ApprenticeMoveThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks0) < 0x5f
	.space 0x5f - (. - gText_ApprenticeMoveThanks0)
	.endif

	@ data/text/apprentice.inc:679 gText_ApprenticeWhichMove1
	.globl gText_ApprenticeWhichMove1
gText_ApprenticeWhichMove1: @ 0x08271B21
	.string "{PLAYER}せんせい こんにちは!\nまた おしえて ほしいことが あるの!\pぼくの {STR_VAR_1}に\nかっこいい わざを おしえたいの!\lおすすめは どっちかな?\p{STR_VAR_2}か {STR_VAR_3}が\nいいんだけど……{EOS}"
	.if (. - gText_ApprenticeWhichMove1) > 0x5a
	.error "gText_ApprenticeWhichMove1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove1) < 0x5a
	.space 0x5a - (. - gText_ApprenticeWhichMove1)
	.endif

	@ data/text/apprentice.inc:682 gText_ApprenticeMoveThanks1
	.globl gText_ApprenticeMoveThanks1
gText_ApprenticeMoveThanks1: @ 0x08271B7B
	.string "{STR_VAR_1}か! そーだよね!\nじゃあ ボク それで いくね!\pまた こんど ここで あったら\nなにか おしえてね せんせい!{EOS}"
	.if (. - gText_ApprenticeMoveThanks1) > 0x3c
	.error "gText_ApprenticeMoveThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks1) < 0x3c
	.space 0x3c - (. - gText_ApprenticeMoveThanks1)
	.endif

	@ data/text/apprentice.inc:685 gText_ApprenticeWhichMove2
	.globl gText_ApprenticeWhichMove2
gText_ApprenticeWhichMove2: @ 0x08271BB7
	.string "{PLAYER}さん こんにちは!\nぼくの {STR_VAR_1}の こと なんだけど\lわざの ことで なやんでるんです\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つよいのか……\p{STR_VAR_1}には どっちの わざが\nあってると おもいますか?{EOS}"
	.if (. - gText_ApprenticeWhichMove2) > 0x63
	.error "gText_ApprenticeWhichMove2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove2) < 0x63
	.space 0x63 - (. - gText_ApprenticeWhichMove2)
	.endif

	@ data/text/apprentice.inc:688 gText_ApprenticeMoveThanks2
	.globl gText_ApprenticeMoveThanks2
gText_ApprenticeMoveThanks2: @ 0x08271C1A
	.string "{STR_VAR_1} ですね!\nわかりました!\pよし さっそく\n{STR_VAR_1}を おぼえさせるぞ!\pじゃあ また!{EOS}"
	.if (. - gText_ApprenticeMoveThanks2) > 0x2d
	.error "gText_ApprenticeMoveThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks2) < 0x2d
	.space 0x2d - (. - gText_ApprenticeMoveThanks2)
	.endif

	@ data/text/apprentice.inc:691 gText_ApprenticeWhichMove3
	.globl gText_ApprenticeWhichMove3
gText_ApprenticeWhichMove3: @ 0x08271C47
	.string "ああ {PLAYER}さん!\nあたし あたし ほんと ダメなんです!\pポケモンを いざ そだてようと しても\n……わざ ひとつ まともに きめられなくて\lどうしようも ありません……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます……\lでも あたし……\pおねがいです {PLAYER}さん\nあたしの {STR_VAR_1}の わざ\lきめて いただけませんか?\p{STR_VAR_2}と {STR_VAR_3}か\nどちらかを えらんで くださるだけでも!{EOS}"
	.if (. - gText_ApprenticeWhichMove3) > 0xc3
	.error "gText_ApprenticeWhichMove3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove3) < 0xc3
	.space 0xc3 - (. - gText_ApprenticeWhichMove3)
	.endif

	@ data/text/apprentice.inc:694 gText_ApprenticeMoveThanks3
	.globl gText_ApprenticeMoveThanks3
gText_ApprenticeMoveThanks3: @ 0x08271D0A
	.string "わかりました!\pあたし なんかの ために\n{STR_VAR_1}を おぼえて くれるか……\lいえ! がんばって みます\pありがとう ございます!{EOS}"
	.if (. - gText_ApprenticeMoveThanks3) > 0x40
	.error "gText_ApprenticeMoveThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks3) < 0x40
	.space 0x40 - (. - gText_ApprenticeMoveThanks3)
	.endif

	@ data/text/apprentice.inc:697 gText_ApprenticeWhichMove4
	.globl gText_ApprenticeWhichMove4
gText_ApprenticeWhichMove4: @ 0x08271D4A
	.string "あら! {PLAYER}{KUN}\nあいたいと おもって いたの!\lわたしの {STR_VAR_1}に ふさわしい わざは\lなにかなー って まよってて……\lあなたが きめて くれない?\pそうね……\n{STR_VAR_2}と {STR_VAR_3}だったら\lどっちが いいと おもう?{EOS}"
	.if (. - gText_ApprenticeWhichMove4) > 0x6b
	.error "gText_ApprenticeWhichMove4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove4) < 0x6b
	.space 0x6b - (. - gText_ApprenticeWhichMove4)
	.endif

	@ data/text/apprentice.inc:604 gText_ApprenticeMonThanks4 (+1 aliases)
	.globl gText_ApprenticeMonThanks4_Copy_Apprentice
gText_ApprenticeMonThanks4_Copy_Apprentice: @ 0x08271DB5
	.string "{STR_VAR_1}ね ありがと!\n{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!{EOS}"
	.if (. - gText_ApprenticeMonThanks4_Copy_Apprentice) > 0x3e
	.error "gText_ApprenticeMonThanks4_Copy_Apprentice may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks4_Copy_Apprentice) < 0x3e
	.space 0x3e - (. - gText_ApprenticeMonThanks4_Copy_Apprentice)
	.endif

	@ data/text/apprentice.inc:703 gText_ApprenticeWhichMove5
	.globl gText_ApprenticeWhichMove5
gText_ApprenticeWhichMove5: @ 0x08271DF3
	.string "あー いそがしい いそがしい!\nおっと きみは {PLAYER}{KUN}!\lちょうしは どう?\pこっちはさ! けさ おきてから\nジョギング スイミング クッキング\lいそがしいの なんのって……!\pオレの {STR_VAR_1}に\nおしえさせる わざも きまんなくてねー\pあのさ!\n{STR_VAR_2} って よさそうじゃん?\lでも {STR_VAR_3} も イイよね!\p{PLAYER}{KUN}の アドバイス たのむよ!\nどっちの わざが イイかな?{EOS}"
	.if (. - gText_ApprenticeWhichMove5) > 0xb9
	.error "gText_ApprenticeWhichMove5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove5) < 0xb9
	.space 0xb9 - (. - gText_ApprenticeWhichMove5)
	.endif

	@ data/text/apprentice.inc:706 gText_ApprenticeMoveThanks5
	.globl gText_ApprenticeMoveThanks5
gText_ApprenticeMoveThanks5: @ 0x08271EAC
	.string "オーケー わかった!\nじゃ スケジュール あけて\lおぼえさせて みるぜ!\pほんと きみって いい せんせい だぜ\nサンキュー! じゃ またな!{EOS}"
	.if (. - gText_ApprenticeMoveThanks5) > 0x48
	.error "gText_ApprenticeMoveThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks5) < 0x48
	.space 0x48 - (. - gText_ApprenticeMoveThanks5)
	.endif

	@ data/text/apprentice.inc:709 gText_ApprenticeWhichMove6
	.globl gText_ApprenticeWhichMove6
gText_ApprenticeWhichMove6: @ 0x08271EF4
	.string "おおっ ラッキー!\n{PLAYER}さんに あえましたー!\lさっそく ききたいことが あるのー!\pジャーン では\nほんじつの そうだんでーす!\pわたしの {STR_VAR_1}には\n{STR_VAR_2}と {STR_VAR_3}\lおにあいの わざは さあどっち?{EOS}"
	.if (. - gText_ApprenticeWhichMove6) > 0x64
	.error "gText_ApprenticeWhichMove6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove6) < 0x64
	.space 0x64 - (. - gText_ApprenticeWhichMove6)
	.endif

	@ data/text/apprentice.inc:712 gText_ApprenticeMoveThanks6
	.globl gText_ApprenticeMoveThanks6
gText_ApprenticeMoveThanks6: @ 0x08271F58
	.string "ははぁーん\n{STR_VAR_1} が イイですか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!{EOS}"
	.if (. - gText_ApprenticeMoveThanks6) > 0x4a
	.error "gText_ApprenticeMoveThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks6) < 0x4a
	.space 0x4a - (. - gText_ApprenticeMoveThanks6)
	.endif

	@ data/text/apprentice.inc:715 gText_ApprenticeWhichMove7
	.globl gText_ApprenticeWhichMove7
gText_ApprenticeWhichMove7: @ 0x08271FA2
	.string "ごきげんよう {PLAYER}さん……!\nあのね きょうも\lわたくし そうだんが あるのです\lわたくしの かわいい\l{STR_VAR_1}ちゃんの ことですの\p{STR_VAR_1}ちゃんに ピッタリの わざ……\n{STR_VAR_2}と {STR_VAR_3}の\lどちらを おしえたら よろしいでしょう?{EOS}"
	.if (. - gText_ApprenticeWhichMove7) > 0x70
	.error "gText_ApprenticeWhichMove7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove7) < 0x70
	.space 0x70 - (. - gText_ApprenticeWhichMove7)
	.endif

	@ data/text/apprentice.inc:718 gText_ApprenticeMoveThanks7
	.globl gText_ApprenticeMoveThanks7
gText_ApprenticeMoveThanks7: @ 0x08272012
	.string "{STR_VAR_1} ですのね!\nさっそく そのように しますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!{EOS}"
	.if (. - gText_ApprenticeMoveThanks7) > 0x40
	.error "gText_ApprenticeMoveThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks7) < 0x40
	.space 0x40 - (. - gText_ApprenticeMoveThanks7)
	.endif

	@ data/text/apprentice.inc:721 gText_ApprenticeWhichMove8
	.globl gText_ApprenticeWhichMove8
gText_ApprenticeWhichMove8: @ 0x08272052
	.string "キャァァ {PLAYER}さんが いるーっ!\nかっ かんげきっ……!\lこまった ときは {PLAYER}さんですっ!\pほんじつは わざの オススメを\nおしえて ほしいのですっ!\lわたしの {STR_VAR_1}の わざを\lきめて くださいっ!\pどっちが いいですかっ?\n{STR_VAR_2}と {STR_VAR_3}!{EOS}"
	.if (. - gText_ApprenticeWhichMove8) > 0x7a
	.error "gText_ApprenticeWhichMove8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove8) < 0x7a
	.space 0x7a - (. - gText_ApprenticeWhichMove8)
	.endif

	@ data/text/apprentice.inc:724 gText_ApprenticeMoveThanks8
	.globl gText_ApprenticeMoveThanks8
gText_ApprenticeMoveThanks8: @ 0x082720CC
	.string "ああぁ ありがとう ございますっ!\n{STR_VAR_1} ですねっ\lりょうかいで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!{EOS}"
	.if (. - gText_ApprenticeMoveThanks8) > 0x44
	.error "gText_ApprenticeMoveThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks8) < 0x44
	.space 0x44 - (. - gText_ApprenticeMoveThanks8)
	.endif

	@ data/text/apprentice.inc:727 gText_ApprenticeWhichMove9
	.globl gText_ApprenticeWhichMove9
gText_ApprenticeWhichMove9: @ 0x08272110
	.string "ハロウ {PLAYER}{KUN} ハロウ!\nおじさん きょうも きみに\lアドバイスを もらいたいんだ プリーズ!\pマイ ポケモン {STR_VAR_1}の\nベストな わざは なんだろう?\lババーっと かてちゃいそうな わざ!\p{STR_VAR_2} かな?\nオア {STR_VAR_3} かな?{EOS}"
	.if (. - gText_ApprenticeWhichMove9) > 0x71
	.error "gText_ApprenticeWhichMove9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove9) < 0x71
	.space 0x71 - (. - gText_ApprenticeWhichMove9)
	.endif

	@ data/text/apprentice.inc:730 gText_ApprenticeMoveThanks9
	.globl gText_ApprenticeMoveThanks9
gText_ApprenticeMoveThanks9: @ 0x08272181
	.string "あはぁ {STR_VAR_1}ねー\nオーケイ オーケイ!\lおじさん ザザーっと おぼえさせるよ!\pそれじゃあ これからも よろしくね\nアディオース!{EOS}"
	.if (. - gText_ApprenticeMoveThanks9) > 0x42
	.error "gText_ApprenticeMoveThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks9) < 0x42
	.space 0x42 - (. - gText_ApprenticeMoveThanks9)
	.endif

	@ data/text/apprentice.inc:733 gText_ApprenticeWhichMove10
	.globl gText_ApprenticeWhichMove10
gText_ApprenticeWhichMove10: @ 0x082721C3
	.string "{PLAYER}{KUN} たいへんだぞ!\nおいらの ポケモンが なんと\lわざを 6つ おぼえたんだ!\p……なんてね ウソだよ! ははは!\pじつは おいら ポケモンの わざ きめるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ ししょうが\lオススメのわざ きめて くれない かな?\p{STR_VAR_2} と {STR_VAR_3}\n{STR_VAR_1}なら どっちが あうかい?{EOS}"
	.if (. - gText_ApprenticeWhichMove10) > 0xa0
	.error "gText_ApprenticeWhichMove10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove10) < 0xa0
	.space 0xa0 - (. - gText_ApprenticeWhichMove10)
	.endif

	@ data/text/apprentice.inc:736 gText_ApprenticeMoveThanks10
	.globl gText_ApprenticeMoveThanks10
gText_ApprenticeMoveThanks10: @ 0x08272263
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうわざに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー{EOS}"
	.if (. - gText_ApprenticeMoveThanks10) > 0x5d
	.error "gText_ApprenticeMoveThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeMoveThanks10)
	.endif

	@ data/text/apprentice.inc:739 gText_ApprenticeWhichMove11
	.globl gText_ApprenticeWhichMove11
gText_ApprenticeWhichMove11: @ 0x082722C0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし きょうの わしの そうだん\nいってみようぜー!\lわざに かんする そうだんだよ!\p{STR_VAR_2}と {STR_VAR_3}\n{STR_VAR_1}が おぼえるなら どっちだ?{EOS}"
	.if (. - gText_ApprenticeWhichMove11) > 0x6d
	.error "gText_ApprenticeWhichMove11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove11) < 0x6d
	.space 0x6d - (. - gText_ApprenticeWhichMove11)
	.endif

	@ data/text/apprentice.inc:742 gText_ApprenticeMoveThanks11
	.globl gText_ApprenticeMoveThanks11
gText_ApprenticeMoveThanks11: @ 0x0827232D
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで おぼえさせるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!{EOS}"
	.if (. - gText_ApprenticeMoveThanks11) > 0x37
	.error "gText_ApprenticeMoveThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks11) < 0x37
	.space 0x37 - (. - gText_ApprenticeMoveThanks11)
	.endif

	@ data/text/apprentice.inc:745 gText_ApprenticeWhichMove12
	.globl gText_ApprenticeWhichMove12
gText_ApprenticeWhichMove12: @ 0x08272364
	.string "イエァ {PLAYER}さんじゃないのー?\nどうする オレ? また はなしかける!?\lってもう はなしかけてる!?\lって {PLAYER}さん あきれてる!?\lしかたねー そうだん してみる!?\pきょうも そうだんに のってェ!\nって きいてる!? きいてる!!\pおれの {STR_VAR_1}の わざ\nどうしたら いいかな? きめてエェ!\l{STR_VAR_2}!? {STR_VAR_3}!?{EOS}"
	.if (. - gText_ApprenticeWhichMove12) > 0xa0
	.error "gText_ApprenticeWhichMove12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove12) < 0xa0
	.space 0xa0 - (. - gText_ApprenticeWhichMove12)
	.endif

	@ data/text/apprentice.inc:748 gText_ApprenticeMoveThanks12
	.globl gText_ApprenticeMoveThanks12
gText_ApprenticeMoveThanks12: @ 0x08272404
	.string "{STR_VAR_1}で オーライ!\nじゃ さっそく おぼえさせるぜェ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!{EOS}"
	.if (. - gText_ApprenticeMoveThanks12) > 0x3e
	.error "gText_ApprenticeMoveThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks12) < 0x3e
	.space 0x3e - (. - gText_ApprenticeMoveThanks12)
	.endif

	@ data/text/apprentice.inc:751 gText_ApprenticeWhichMove13
	.globl gText_ApprenticeWhichMove13
gText_ApprenticeWhichMove13: @ 0x08272442
	.string "ガハゴホ あ {PLAYER}{KUN}\nカゼ ひいちゃったよ おれ……\pポケモンに おしえる わざを\nきめたいんだけど ムリっぽいん だよね\lというわけ だからさ かわりに たのむよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが あってると おもうかい?{EOS}"
	.if (. - gText_ApprenticeWhichMove13) > 0x7e
	.error "gText_ApprenticeWhichMove13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove13) < 0x7e
	.space 0x7e - (. - gText_ApprenticeWhichMove13)
	.endif

	@ data/text/apprentice.inc:754 gText_ApprenticeMoveThanks13
	.globl gText_ApprenticeMoveThanks13
gText_ApprenticeMoveThanks13: @ 0x082724C0
	.string "ん わかった {STR_VAR_1}な!\nじゃあ カゼが なおったら\lゴホ おしえて みるよ!\pこれからも おれを よろしく たのむよ!{EOS}"
	.if (. - gText_ApprenticeMoveThanks13) > 0x3c
	.error "gText_ApprenticeMoveThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks13) < 0x3c
	.space 0x3c - (. - gText_ApprenticeMoveThanks13)
	.endif

	@ data/text/apprentice.inc:757 gText_ApprenticeWhichMove14
	.globl gText_ApprenticeWhichMove14
gText_ApprenticeWhichMove14: @ 0x082724FC
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lまた…… そうだん させて くれよ\pは はずかしながらさ\nポケモンに おしえる わざがさ\lきまんないんだ アドバイス くれよ!\pポケモンは {STR_VAR_1}なんだ\nだったら どっちが いい かな……?\n{STR_VAR_2}…… {STR_VAR_3}……{EOS}"
	.if (. - gText_ApprenticeWhichMove14) > 0x92
	.error "gText_ApprenticeWhichMove14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove14) < 0x92
	.space 0x92 - (. - gText_ApprenticeWhichMove14)
	.endif

	@ data/text/apprentice.inc:760 gText_ApprenticeMoveThanks14
	.globl gText_ApprenticeMoveThanks14
gText_ApprenticeMoveThanks14: @ 0x0827258E
	.string "よ よし {STR_VAR_1}\nいって みるよ!\pそんな わざを おしえるなんて\nて てれるな……\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね{EOS}"
	.if (. - gText_ApprenticeMoveThanks14) > 0x49
	.error "gText_ApprenticeMoveThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks14) < 0x49
	.space 0x49 - (. - gText_ApprenticeMoveThanks14)
	.endif

	@ data/text/apprentice.inc:763 gText_ApprenticeWhichMove15
	.globl gText_ApprenticeWhichMove15
gText_ApprenticeWhichMove15: @ 0x082725D7
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\lさいきん はやりの モノマネ では?\pいやいや! ほんもの ならいいんだ!\nきを わるく しないでくれ!\lそして ついでに でしの わたしに\lじょげんを おねがい したい\lわたしの {STR_VAR_1}の ことだ!\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つかえたら いいかね?{EOS}"
	.if (. - gText_ApprenticeWhichMove15) > 0x9d
	.error "gText_ApprenticeWhichMove15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMove15) < 0x9d
	.space 0x9d - (. - gText_ApprenticeWhichMove15)
	.endif

	@ data/text/apprentice.inc:766 gText_ApprenticeMoveThanks15
	.globl gText_ApprenticeMoveThanks15
gText_ApprenticeMoveThanks15: @ 0x08272674
	.string "{STR_VAR_1}……\nまちがいなく そうなの かね?\pいや ほんとう なら いいんだ\nどうも ありがとう\lこんな わたしの ポケモンでも\lおぼえて くれると いいな\pでは いずれまた あおう!{EOS}"
	.if (. - gText_ApprenticeMoveThanks15) > 0x5b
	.error "gText_ApprenticeMoveThanks15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMoveThanks15) < 0x5b
	.space 0x5b - (. - gText_ApprenticeMoveThanks15)
	.endif

	@ data/text/apprentice.inc:769 gText_ApprenticePickWinSpeech0
	.globl gText_ApprenticePickWinSpeech0
gText_ApprenticePickWinSpeech0: @ 0x082726CF
	.string "ああっ {PLAYER}さん\n{PLAYER}さんだ! わわーん!\lぐすん ひっく きいて ください\pぼくっ ぼく しょうぶ するとき\nものすごく きんちょう して\lかっても ないちゃうん です……\pなにか かっこいい こと いえたら\nいいなと おもうんです けど……\pあのう あのう {PLAYER}さん\nもし よかったら……\lぼく なかなくて いいように\lなにか かったときに いう ことばを\lかんがえて もらえませんか?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech0) > 0xc4
	.error "gText_ApprenticePickWinSpeech0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech0) < 0xc4
	.space 0xc4 - (. - gText_ApprenticePickWinSpeech0)
	.endif

	@ data/text/apprentice.inc:772 gText_ApprenticeWinSpeechThanks0
	.globl gText_ApprenticeWinSpeechThanks0
gText_ApprenticeWinSpeechThanks0: @ 0x08272793
	.string "{STR_VAR_1}\p…… うぉぉーん!\nすごく かっこいいよう!\pあ ごめんなさい\nうれしすぎて なみだが……\p……グスン {PLAYER}さん!\nいつも いつも ありがとう ございました!\lぼく {PLAYER}さんの ためにも\lがんばって たたかい つづけます!\pでは {PLAYER}さん!\nこんどは…… どこかで たたかいましょう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks0) > 0x92
	.error "gText_ApprenticeWinSpeechThanks0 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks0) < 0x92
	.space 0x92 - (. - gText_ApprenticeWinSpeechThanks0)
	.endif

	@ data/text/apprentice.inc:775 gText_ApprenticePickWinSpeech1
	.globl gText_ApprenticePickWinSpeech1
gText_ApprenticePickWinSpeech1: @ 0x08272825
	.string "{PLAYER}せんせい こんにちは!\nぼく きめたい ことが あるの!\pあのね!\nぼく しょうぶに かった とき\lなにか かっこいい セリフを いいたいの!\pせんせい おすすめの\nかっこいい セリフって あるかな?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech1) > 0x67
	.error "gText_ApprenticePickWinSpeech1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech1) < 0x67
	.space 0x67 - (. - gText_ApprenticePickWinSpeech1)
	.endif

	@ data/text/apprentice.inc:778 gText_ApprenticeWinSpeechThanks1
	.globl gText_ApprenticeWinSpeechThanks1
gText_ApprenticeWinSpeechThanks1: @ 0x0827288C
	.string "{STR_VAR_1}\pうわあー いーね!\nじゃあ ボク それで いくね!\pせんせい いままで ありがとう!\nボク これから いろんな ところで\lがんばる ことに する!\pこんど あうときは しょうぶ だよ!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks1) > 0x60
	.error "gText_ApprenticeWinSpeechThanks1 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks1) < 0x60
	.space 0x60 - (. - gText_ApprenticeWinSpeechThanks1)
	.endif

	@ data/text/apprentice.inc:781 gText_ApprenticePickWinSpeech2
	.globl gText_ApprenticePickWinSpeech2
gText_ApprenticePickWinSpeech2: @ 0x082728EC
	.string "{PLAYER}さん こんにちは!\nポケモンの じゅんびは\pばんぜん なんですけど\nひとつ きに なってるんです\pポケモントレーナーって\nしょうぶに かった ときに かけごえ が\pあると いいかなーって おもうんです\nなにか いいの かんがえて ください!{EOS}"
	.if (. - gText_ApprenticePickWinSpeech2) > 0x7b
	.error "gText_ApprenticePickWinSpeech2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech2) < 0x7b
	.space 0x7b - (. - gText_ApprenticePickWinSpeech2)
	.endif

	@ data/text/apprentice.inc:784 gText_ApprenticeWinSpeechThanks2
	.globl gText_ApprenticeWinSpeechThanks2
gText_ApprenticeWinSpeechThanks2: @ 0x08272967
	.string "{STR_VAR_1}\p……かっこいいですね!\nそれ つかわせて いただきます!\pじゃあ ぼくは これから\nいろんな ところで しょうぶ してきます!\pいつか {PLAYER}さんと\nしょうぶ する ひが\lくるかも しれませんね!\pでは こんどは しょうぶの ば で\nおあい しましょう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks2) > 0x82
	.error "gText_ApprenticeWinSpeechThanks2 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks2) < 0x82
	.space 0x82 - (. - gText_ApprenticeWinSpeechThanks2)
	.endif

	@ data/text/apprentice.inc:787 gText_ApprenticePickWinSpeech3
	.globl gText_ApprenticePickWinSpeech3
gText_ApprenticePickWinSpeech3: @ 0x082729E9
	.string "あっ {PLAYER}さん……!\nあたし ほんと ダメな おんなのこです!\pせっかく……\nせっかく しょうぶに かっても\lことば ひとつ でてこなくって……\p{PLAYER}さんには そんな こと\nどうでも いいのは わかってます!\lでも あたし どうしても……\pおねがい! です {PLAYER}さん\nかったとき って\lなんて いうべき なんでしょうか……?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech3) > 0xa3
	.error "gText_ApprenticePickWinSpeech3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech3) < 0xa3
	.space 0xa3 - (. - gText_ApprenticePickWinSpeech3)
	.endif

	@ data/text/apprentice.inc:790 gText_ApprenticeWinSpeechThanks3
	.globl gText_ApprenticeWinSpeechThanks3
gText_ApprenticeWinSpeechThanks3: @ 0x08272A8C
	.string "{STR_VAR_1}\pすごいわ……\pあ あたしなんかが\nそんな こと いって いいのか……\lいえ! がんばって みます\p{PLAYER}さん!\pいままで あたしなんかの ために\nありがとう…… ございました……!\lあたし いまから がんばってきます!\pあたしの こと なんて\nすぐに わすれて しまうと おもうけど\lでも どこかで おあい しましょう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks3) > 0xa3
	.error "gText_ApprenticeWinSpeechThanks3 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks3) < 0xa3
	.space 0xa3 - (. - gText_ApprenticeWinSpeechThanks3)
	.endif

	@ data/text/apprentice.inc:793 gText_ApprenticePickWinSpeech4
	.globl gText_ApprenticePickWinSpeech4
gText_ApprenticePickWinSpeech4: @ 0x08272B2F
	.string "あら {PLAYER}{KUN}?\nちょっと きいて ほしいんだけど!\pじぶんでも わかって いるけど\nわたし すこし くちが わるくて……\lしょうぶに かったときに\lなんか えらそうに しちゃうのよね!\pだけど きらわれたく ないから\nわたしに まけた あいてに\lやさしい ことばを かけて あげたいのよ!\pでも ぜんぜん おもいつかなくて!\nあなたが かんがえて くれない?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech4) > 0xb5
	.error "gText_ApprenticePickWinSpeech4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech4) < 0xb5
	.space 0xb5 - (. - gText_ApprenticePickWinSpeech4)
	.endif

	@ data/text/apprentice.inc:796 gText_ApprenticeWinSpeechThanks4
	.globl gText_ApprenticeWinSpeechThanks4
gText_ApprenticeWinSpeechThanks4: @ 0x08272BE4
	.string "{STR_VAR_1}\pわるく ないわね!\nうん それで いくことに するわ!\pじゃあ…… いままで\n{PLAYER}さんに おそわった\lいろいろな ことを むねに\lわたし がんばって くる!\lいろいろと なまいき いって\lごめんなさい!\pつぎに あう ときは しょうぶよ!\nじゃあね!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks4) > 0x81
	.error "gText_ApprenticeWinSpeechThanks4 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks4) < 0x81
	.space 0x81 - (. - gText_ApprenticeWinSpeechThanks4)
	.endif

	@ data/text/apprentice.inc:799 gText_ApprenticePickWinSpeech5
	.globl gText_ApprenticePickWinSpeech5
gText_ApprenticePickWinSpeech5: @ 0x08272C65
	.string "あー いそがしい いそがしい!\nおっと さがしてたよ {PLAYER}{KUN}\lきょうも げんきかい?\pこっちはさー! あいかわらず\nランニング ファイティング マッピングと\lなんで こんなに いそがしいんだ?\pでもさ! いそがしい からって\nしょうぶに かった ときに\lなにも いわないで\lたちさっちゃ しつれいだろ?\pでさ!\nかっこよく たちさる オレを\lえんしゅつする いい ことば ないかな?\l{PLAYER}{KUN} なんか たのむよ!{EOS}"
	.if (. - gText_ApprenticePickWinSpeech5) > 0xd0
	.error "gText_ApprenticePickWinSpeech5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech5) < 0xd0
	.space 0xd0 - (. - gText_ApprenticePickWinSpeech5)
	.endif

	@ data/text/apprentice.inc:802 gText_ApprenticeWinSpeechThanks5
	.globl gText_ApprenticeWinSpeechThanks5
gText_ApprenticeWinSpeechThanks5: @ 0x08272D35
	.string "{STR_VAR_1}\pオーケー わかった!\nそのぐらい いう じかんは つくれるぜ!\lほんと きみ みたいな\lいい せんせいに であえて よかったぜ!\pオレは これから じかんを つくって\nポケモンしょうぶを してくるよ!\lいままで サンキュー {PLAYER}{KUN}!\pいつか オレと しょうぶ しようぜ!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks5) > 0x8c
	.error "gText_ApprenticeWinSpeechThanks5 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks5) < 0x8c
	.space 0x8c - (. - gText_ApprenticeWinSpeechThanks5)
	.endif

	@ data/text/apprentice.inc:805 gText_ApprenticePickWinSpeech6
	.globl gText_ApprenticePickWinSpeech6
gText_ApprenticePickWinSpeech6: @ 0x08272DC1
	.string "やったねーっ\n{PLAYER}さんに あえちゃった!\lさっそく そうだんが あるのよ!\pジャーン\nでは さいごの そうだん でーす!\pわたしが しょうぶで かった とき\nかっこよく キメたいと したら\lさあ なんて いえばいい?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech6) > 0x6d
	.error "gText_ApprenticePickWinSpeech6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech6) < 0x6d
	.space 0x6d - (. - gText_ApprenticePickWinSpeech6)
	.endif

	@ data/text/apprentice.inc:808 gText_ApprenticeWinSpeechThanks6
	.globl gText_ApprenticeWinSpeechThanks6
gText_ApprenticeWinSpeechThanks6: @ 0x08272E2E
	.string "{STR_VAR_1}\pいっ イイ!\nシブイ! それいただき!\p……ねえ わたし\nそろそろ いちにんまえに なったよね!\pあのね これから いろんなひとと\nたたかって みようと おもうの!\p{PLAYER}さんの アドバイス\nすっごく たすかったよー!\lいつか しょうぶする ときが くるかもね\lいままで ほんと ありがとー!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks6) > 0x95
	.error "gText_ApprenticeWinSpeechThanks6 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks6) < 0x95
	.space 0x95 - (. - gText_ApprenticeWinSpeechThanks6)
	.endif

	@ data/text/apprentice.inc:811 gText_ApprenticePickWinSpeech7
	.globl gText_ApprenticePickWinSpeech7
gText_ApprenticePickWinSpeech7: @ 0x08272EC3
	.string "まあ {PLAYER}さん\nあえて よかった ですわ……!\pわたくし ポケモンの ほうは\nもう しんぱい ないのです けれど\lわたくし じしんの ほうが……\pその あの ポケモントレーナーさんは\nいつも しょうぶに かったとき\lことばを かけて くださいますね?\pぜひ! わたくしも あれを\nやってみたいのです!\lおねがいです! なにか\lかったときの ことば きめて ください!{EOS}"
	.if (. - gText_ApprenticePickWinSpeech7) > 0xb8
	.error "gText_ApprenticePickWinSpeech7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech7) < 0xb8
	.space 0xb8 - (. - gText_ApprenticePickWinSpeech7)
	.endif

	@ data/text/apprentice.inc:814 gText_ApprenticeWinSpeechThanks7
	.globl gText_ApprenticeWinSpeechThanks7
gText_ApprenticeWinSpeechThanks7: @ 0x08272F7B
	.string "{STR_VAR_1}\pですのね……!\pああ! なんだか わたくし\nうまれかわれる きが しますわ……!\lさっそく そのことば つかってみますわ!\pそれでは ここで おわかれです……\n{PLAYER}さんの ごしどう\lわたくし けっして わすれずに\lみなさまと たたかって まいります!\pまた いずれ……\nごきげんよう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks7) > 0x92
	.error "gText_ApprenticeWinSpeechThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks7) < 0x92
	.space 0x92 - (. - gText_ApprenticeWinSpeechThanks7)
	.endif

	@ data/text/apprentice.inc:817 gText_ApprenticePickWinSpeech8
	.globl gText_ApprenticePickWinSpeech8
gText_ApprenticePickWinSpeech8: @ 0x0827300D
	.string "キャァー!\n{PLAYER}さんを はっけんーっ!\lかっ かんげきっ……!\pあのっ そうだんが あります!\pこのあいだ ポケモンしょうぶに\nかったは いいんですけど!\lわたし かんげき しすぎちゃって\lなんにも いえなく なっちゃって……!\pそこで {PLAYER}さん!\nわたしが かった ときの きめぜりふ!\lかんがえて ほしいのですっ!{EOS}"
	.if (. - gText_ApprenticePickWinSpeech8) > 0xa0
	.error "gText_ApprenticePickWinSpeech8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech8) < 0xa0
	.space 0xa0 - (. - gText_ApprenticePickWinSpeech8)
	.endif

	@ data/text/apprentice.inc:820 gText_ApprenticeWinSpeechThanks8
	.globl gText_ApprenticeWinSpeechThanks8
gText_ApprenticeWinSpeechThanks8: @ 0x082730AD
	.string "{STR_VAR_1}\pう うわああぁぁあ!\nこの ことばを わたしが!\lかっ かんげき………っ!!\pあああ ありがとう ございますっ!\nもう おもいのこす ことは ありませんっ!\lわたし これから たびだって\lいろいろな ひとと しょうぶ してみます!\pなにもかも {PLAYER}さんの\nおかげで あります!\lほんとうに ありがとう ございますっ!\pそれでは それでは\nいつか しょうぶの ばで あいましょう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks8) > 0xc1
	.error "gText_ApprenticeWinSpeechThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks8) < 0xc1
	.space 0xc1 - (. - gText_ApprenticeWinSpeechThanks8)
	.endif

	@ data/text/apprentice.inc:823 gText_ApprenticePickWinSpeech9
	.globl gText_ApprenticePickWinSpeech9
gText_ApprenticePickWinSpeech9: @ 0x0827316E
	.string "ハッローウ\nハロウ {PLAYER}{KUN}!\pおじさん そろそろ あちこちで\nしょうぶが したく なって きたよ!\lそこで そのまえに きみに\lアドバイスを もらいたいんだ プリーズ!\pおじさんが もし しょうぶに かったら\nあいての トレーナーに むかって\lじまん するような ことばって ないかな?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech9) > 0x91
	.error "gText_ApprenticePickWinSpeech9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech9) < 0x91
	.space 0x91 - (. - gText_ApprenticePickWinSpeech9)
	.endif

	@ data/text/apprentice.inc:827 gText_ApprenticeWinSpeechThanks9
	.globl gText_ApprenticeWinSpeechThanks9
gText_ApprenticeWinSpeechThanks9: @ 0x082731FF
	.string "{STR_VAR_1}\pあはぁ それいいね\nオーケイ オーケイ!\lおじさん ババーっと いってみるよ!\pそれじゃあ おわかれだ!\nいままで いろいろ ありがとうね\lいつか しょうぶも してくれよ!\pアディオース!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks9) > 0x62
	.error "gText_ApprenticeWinSpeechThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks9) < 0x62
	.space 0x62 - (. - gText_ApprenticeWinSpeechThanks9)
	.endif

	@ data/text/apprentice.inc:830 gText_ApprenticePickWinSpeech10
	.globl gText_ApprenticePickWinSpeech10
gText_ApprenticePickWinSpeech10: @ 0x08273261
	.string "{PLAYER}{KUN} たいへんだーっ!\pおいら しょうぶに かつと\n1じかんも えばっちゃうんだ!\p……なんてね ウソなんだよ! うっはは\pじつは おいら ひとと はなし するの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ\lおいらが しょうぶに かったときに\lいう ことばを\lししょうが きめて くれない かな?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech10) > 0x9b
	.error "gText_ApprenticePickWinSpeech10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech10) < 0x9b
	.space 0x9b - (. - gText_ApprenticePickWinSpeech10)
	.endif

	@ data/text/apprentice.inc:833 gText_ApprenticeWinSpeechThanks10
	.globl gText_ApprenticeWinSpeechThanks10
gText_ApprenticeWinSpeechThanks10: @ 0x082732FC
	.string "{STR_VAR_1}\pこう いえば いいのね!\nじゃあ それだけは やめておこうっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pずっとずっと ありがとう ししょう!\nおいら やっと トレーナーって もんが\lわかった きがするよ!\pいまから いろんな やつと\nしょうぶして かって くるぞ!\lししょう とも しょうぶ するかもな!\pそれじゃな!\nさらばだ ししょう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks10) > 0xbd
	.error "gText_ApprenticeWinSpeechThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks10) < 0xbd
	.space 0xbd - (. - gText_ApprenticeWinSpeechThanks10)
	.endif

	@ data/text/apprentice.inc:836 gText_ApprenticePickWinSpeech11
	.globl gText_ApprenticePickWinSpeech11
gText_ApprenticePickWinSpeech11: @ 0x082733B9
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし さいごの わしの そうだん\nいってみようぜー!\lことばに かんする そうだんだよ!\pわしが もし しょうぶで かったら\nどういう ことばで キメたら いいかな?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech11) > 0x7d
	.error "gText_ApprenticePickWinSpeech11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech11) < 0x7d
	.space 0x7d - (. - gText_ApprenticePickWinSpeech11)
	.endif

	@ data/text/apprentice.inc:839 gText_ApprenticeWinSpeechThanks11
	.globl gText_ApprenticeWinSpeechThanks11
gText_ApprenticeWinSpeechThanks11: @ 0x08273436
	.string "{STR_VAR_1}\pなるほどーっ! ようよう!\nそんなら ノリノリで それ つかうぜ!\pそろそろ わしも すだつと するか\nノリノリで たたかい まくるぜ!\lいろいろと ありがとうな!\pお・つ・か・れ・さ・ま!\nはーい おつかれさま ごきげんよう!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks11) > 0x76
	.error "gText_ApprenticeWinSpeechThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks11) < 0x76
	.space 0x76 - (. - gText_ApprenticeWinSpeechThanks11)
	.endif

	@ data/text/apprentice.inc:842 gText_ApprenticePickWinSpeech12
	.globl gText_ApprenticePickWinSpeech12
gText_ApprenticePickWinSpeech12: @ 0x082734AC
	.string "オーイェッ {PLAYER}さあん!\nどうする オレ? きょうも きいてみる?\lってもう きこうとしてる!?\pそもそも {PLAYER}さんって\nいつも きいてる!? きいてる!!\lじゃ そうだんに のってェ!\pおれが かった ときに さけぶ\nカッコイイ キメキメの\lすんごい セリフ……\lなんか かんがえてエエェ!{EOS}"
	.if (. - gText_ApprenticePickWinSpeech12) > 0x93
	.error "gText_ApprenticePickWinSpeech12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech12) < 0x93
	.space 0x93 - (. - gText_ApprenticePickWinSpeech12)
	.endif

	@ data/text/apprentice.inc:845 gText_ApprenticeWinSpeechThanks12
	.globl gText_ApprenticeWinSpeechThanks12
gText_ApprenticeWinSpeechThanks12: @ 0x0827353F
	.string "{STR_VAR_1}\pオーラーイ オーライ!\nじゃ さっそく それでいくぜェ!\pってオレ もう\nきくことが なくなったぜ!\lしかたねー これで おわかれする!?\lとかいって どこかで ちゃっかり\lまた あえちゃったり するかも!?\pまー とりあえずは おわかれだぜ!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lじゃあな {PLAYER}さん! スキだぜェ!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks12) > 0xa7
	.error "gText_ApprenticeWinSpeechThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks12) < 0xa7
	.space 0xa7 - (. - gText_ApprenticeWinSpeechThanks12)
	.endif

	@ data/text/apprentice.inc:848 gText_ApprenticePickWinSpeech13
	.globl gText_ApprenticePickWinSpeech13
gText_ApprenticePickWinSpeech13: @ 0x082735E6
	.string "{PLAYER}{KUN} おれは\nもう ダメだよ……\lはなみずが とまらなくってさ……\pしょうぶに かった ときに\nなにか かっこいいこと いおうとして\lあたまで かんがえてたら……\pわれながら ジーンと なけちゃって\nはなみずが でたんだよね きっと!\lというわけ だからさ\l{PLAYER}{KUN} かんがえてよ!\pしょうぶに かったら\nおれ なんて いえば いいかな?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech13) > 0xac
	.error "gText_ApprenticePickWinSpeech13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech13) < 0xac
	.space 0xac - (. - gText_ApprenticePickWinSpeech13)
	.endif

	@ data/text/apprentice.inc:851 gText_ApprenticeWinSpeechThanks13
	.globl gText_ApprenticeWinSpeechThanks13
gText_ApprenticeWinSpeechThanks13: @ 0x08273692
	.string "{STR_VAR_1}\p…… …… ……いいよ\nそれ いいよ!\lダメだ なみだが また とまらないよ\pでも なみだと はなみずを こらえて\nそのセリフ つかわせて もらうよ!\pおれは もう {PLAYER}{KUN}に\nききたい ことは なくなった!\lこれからは ライバルだよ!\pん いままで ありがとうな!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks13) > 0x89
	.error "gText_ApprenticeWinSpeechThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks13) < 0x89
	.space 0x89 - (. - gText_ApprenticeWinSpeechThanks13)
	.endif

	@ data/text/apprentice.inc:854 gText_ApprenticePickWinSpeech14
	.globl gText_ApprenticePickWinSpeech14
gText_ApprenticePickWinSpeech14: @ 0x0827371B
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pまた…… そうだん させて くれよ\nこ これで さいごに するからさ\pあのさ はずかしいん だけどさ\nもし もし しょうぶに かったら!\lワシは なんて いったら いいんだろう……?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech14) > 0x85
	.error "gText_ApprenticePickWinSpeech14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech14) < 0x85
	.space 0x85 - (. - gText_ApprenticePickWinSpeech14)
	.endif

	@ data/text/apprentice.inc:857 gText_ApprenticeWinSpeechThanks14
	.globl gText_ApprenticeWinSpeechThanks14
gText_ApprenticeWinSpeechThanks14: @ 0x082737A0
	.string "{STR_VAR_1}\pよ よし それ\nいって みるよ!\lは はずかしいな いえるかな……\pありがとう {PLAYER}{KUN}\nさようならだ!\l{PLAYER}{KUN}に いわれた こと\lぜんぶ まもって ワシ がんばるよ!{EOS}"
	.if (. - gText_ApprenticeWinSpeechThanks14) > 0x59
	.error "gText_ApprenticeWinSpeechThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWinSpeechThanks14) < 0x59
	.space 0x59 - (. - gText_ApprenticeWinSpeechThanks14)
	.endif

	@ data/text/apprentice.inc:860 gText_ApprenticePickWinSpeech15
	.globl gText_ApprenticePickWinSpeech15
gText_ApprenticePickWinSpeech15: @ 0x082737F9
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\l{PLAYER}{KUN} ぬいぐるみ では?\pいや! いやいやいやいや!\nすまない ほんものなら いいんだ\lまあ そう おこらないで くれ!\lそれでもって じょげんを おねがいする\lことばに かんする ことだ!\pもし わたしが しょうぶに かったら\nぜんたい なんと いえば いいかね?{EOS}"
	.if (. - gText_ApprenticePickWinSpeech15) > 0xa4
	.error "gText_ApprenticePickWinSpeech15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticePickWinSpeech15) < 0xa4
	.space 0xa4 - (. - gText_ApprenticePickWinSpeech15)
	.endif
