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

