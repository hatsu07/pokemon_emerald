	@ data/text/apprentice.inc:97 gText_ApprenticePleaseTeach4
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26D6A0
gText_Rom_26D6A0: @ 0x0826D6A0
	.string "あっ! {PLAYER}{KUN} でしょ!?\nポケモン つよいって きいてるよ!\pわたしは {STR_VAR_1}\nおともだちに なって あげる!\pあのね トレーナーズスクール で\nおそわった こと だけじゃ\lバトルフロンティア では かてないの!\pそうだんに のってくれても いいわよ\nもちろん オーケー でしょ?"
	.byte EOS
	.if (. - gText_Rom_26D6A0) != 0x8e
	.error "gText_Rom_26D6A0 must retain its original byte length"
	.endif
	.globl gText_Rom_26D729
	.set gText_Rom_26D729, gText_Rom_26D6A0 + 0x89

	@ data/text/apprentice.inc:100 gText_ApprenticeRejectTeaching4
	.globl gText_Rom_26D72E
gText_Rom_26D72E: @ 0x0826D72E
	.string "え? なんで ことわるの?\nあたしの おねがい なんだけど!\lかんがえなおしてよぉ!"
	.byte EOS
	.if (. - gText_Rom_26D72E) > 0x2b
	.error "gText_Rom_26D72E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D72E) < 0x2b
	.space 0x2b - (. - gText_Rom_26D72E)
	.endif

	@ data/text/apprentice.inc:103 gText_ApprenticeWhichLevelMode4
	.globl gText_Rom_26D759
gText_Rom_26D759: @ 0x0826D759
	.string "うん じゃあ おねがいね\nさっそく きめて ほしいことが あるから\pレベル50と オープンレベルの へやが\nバトルタワーに あるじゃない?\l{PLAYER}{KUN}は わたしには\lどっちが いいと おもう?"
	.byte EOS
	.if (. - gText_Rom_26D759) > 0x60
	.error "gText_Rom_26D759 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D759) < 0x60
	.space 0x60 - (. - gText_Rom_26D759)
	.endif

	@ data/text/apprentice.inc:106 gText_ApprenticeLevelModeThanks4
	.globl gText_Rom_26D7B9
gText_Rom_26D7B9: @ 0x0826D7B9
	.string "そう {STR_VAR_1}が\nわたしに ふさわしいのね ありがと!\l{PLAYER}{KUN}が きめた って おもえば\lまけても きが らくだわ!\pじゃあね\nまた そうだんに のってね!"
	.byte EOS
	.if (. - gText_Rom_26D7B9) > 0x4e
	.error "gText_Rom_26D7B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D7B9) < 0x4e
	.space 0x4e - (. - gText_Rom_26D7B9)
	.endif

	@ data/text/apprentice.inc:109 gText_ApprenticePleaseTeach5
	.globl gText_Rom_26D807
gText_Rom_26D807: @ 0x0826D807
	.string "ああ きみ! {PLAYER}{KUN}!\nゆうめい だから しってるぜ\lオレは {STR_VAR_1} よろしく!\pオレは トライアスリート やってて\nからだを きたえる かたわら\lポケモンも そだてて ほかにも\lバイトに ひるねに しゃこうダンス……\pいそがしくて なっかなか\nいい トレーナーに なれないんだよね!\pそこで おねがい!\pここで あえたのも なにかの ごえん!\n{PLAYER}{KUN} たまに オレに\lアドバイスを おねがい できないかな?"
	.byte EOS
	.if (. - gText_Rom_26D807) > 0xce
	.error "gText_Rom_26D807 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D807) < 0xce
	.space 0xce - (. - gText_Rom_26D807)
	.endif

	@ data/text/apprentice.inc:112 gText_ApprenticeRejectTeaching5
	.globl gText_Rom_26D8D5
gText_Rom_26D8D5: @ 0x0826D8D5
	.string "えー! たのむよ!\n{PLAYER}{KUN} みたいな ひとが\lオレには ひつよう なんだよー!\pオレに アドバイス たのむよ!"
	.byte EOS
	.if (. - gText_Rom_26D8D5) > 0x39
	.error "gText_Rom_26D8D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D8D5) < 0x39
	.space 0x39 - (. - gText_Rom_26D8D5)
	.endif

	@ data/text/apprentice.inc:115 gText_ApprenticeWhichLevelMode5
	.globl gText_Rom_26D90E
gText_Rom_26D90E: @ 0x0826D90E
	.string "サンキュー そう こなくっちゃ!\nんじゃ てはじめに かるいのを 1つね!\pあのさ バトルタワー って\nレベルが 2しゅるい あるじゃん?\lレベル50と オープンレベル!\pいそがしい オレ だったら\nどっちで がんばれば いいかな?"
	.byte EOS
	.if (. - gText_Rom_26D90E) > 0x75
	.error "gText_Rom_26D90E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D90E) < 0x75
	.space 0x75 - (. - gText_Rom_26D90E)
	.endif

	@ data/text/apprentice.inc:118 gText_ApprenticeLevelModeThanks5
	.globl gText_Rom_26D983
gText_Rom_26D983: @ 0x0826D983
	.string "{STR_VAR_1} ね! オーケー!\nなんとか じかん つくって やってみるぜ!\p……っと いけね バイトのじかんだ!\nじゃあ サンキュー またな!"
	.byte EOS
	.if (. - gText_Rom_26D983) > 0x44
	.error "gText_Rom_26D983 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D983) < 0x44
	.space 0x44 - (. - gText_Rom_26D983)
	.endif

	@ data/text/apprentice.inc:121 gText_ApprenticePleaseTeach6
	.globl gText_Rom_26D9C7
gText_Rom_26D9C7: @ 0x0826D9C7
	.string "うっそ もしかして\nほんものの {PLAYER}さん?\pあっは! すごーい!\nわたし {STR_VAR_1}よ よろしくぅ!\p{PLAYER}さん って なんか\nとっても つよいんでしょ\lみんな うわさ してるもんね!\pあ! いいこと かんがえちゃった\nわたし {PLAYER}さんに\lアドバイスを もらおうっと!\lきっと つよく なれそう!\pねっ いいでしょ?\nわたしに アドバイス おねがい!"
	.byte EOS
	.if (. - gText_Rom_26D9C7) > 0xac
	.error "gText_Rom_26D9C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26D9C7) < 0xac
	.space 0xac - (. - gText_Rom_26D9C7)
	.endif

	@ data/text/apprentice.inc:124 gText_ApprenticeRejectTeaching6
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26DA73
gText_Rom_26DA73: @ 0x0826DA73
	.string "あははは! そんな いじわる いっても\nあたし には つうじないわよん!\lほんとは オーケー なんでしょ?"
	.byte EOS
	.if (. - gText_Rom_26DA73) != 0x36
	.error "gText_Rom_26DA73 must retain its original byte length"
	.endif
	.globl gText_Rom_26DAA4
	.set gText_Rom_26DAA4, gText_Rom_26DA73 + 0x31

	@ data/text/apprentice.inc:127 gText_ApprenticeWhichLevelMode6
	.globl gText_Rom_26DAA9
gText_Rom_26DAA9: @ 0x0826DAA9
	.string "わーい さっすが {PLAYER}さん!\nココロひろーい!\lまずは なにから きこうかなー?\l……あっ おもいついた!\pジャーン しつもんです!\nわたしが バトルタワーに いどむなら!\lレベル50のへや! オープンレベルのへや!\lさて どっちが にあっている でしょう?"
	.byte EOS
	.if (. - gText_Rom_26DAA9) > 0x82
	.error "gText_Rom_26DAA9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DAA9) < 0x82
	.space 0x82 - (. - gText_Rom_26DAA9)
	.endif

	@ data/text/apprentice.inc:130 gText_ApprenticeLevelModeThanks6
	.globl gText_Rom_26DB2B
gText_Rom_26DB2B: @ 0x0826DB2B
	.string "ほほぉー!\n{STR_VAR_1} と きましたか!\lシブイ おこたえ ありがとう!\pん きょうは こんなところ かな\nこんど また ここで あおうね!\lありがと!"
	.byte EOS
	.if (. - gText_Rom_26DB2B) > 0x4a
	.error "gText_Rom_26DB2B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB2B) < 0x4a
	.space 0x4a - (. - gText_Rom_26DB2B)
	.endif

	@ data/text/apprentice.inc:133 gText_ApprenticePleaseTeach7
	.globl gText_Rom_26DB75
gText_Rom_26DB75: @ 0x0826DB75
	.string "もし {PLAYER}さんで\nいらっしゃいますか?\pおめに かかれて うれしゅうございます\nわたくし {STR_VAR_1}と もうしますの\l{PLAYER}さんに かねてより\lあこがれて おりました……\p…… …… ……\pあの…… こんな おねがい\nおこまりに なるかも しれませんが…\pわたくしを {PLAYER}さんに\nでしいり させて いただけません?"
	.byte EOS
	.if (. - gText_Rom_26DB75) > 0x9a
	.error "gText_Rom_26DB75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DB75) < 0x9a
	.space 0x9a - (. - gText_Rom_26DB75)
	.endif

	@ data/text/apprentice.inc:136 gText_ApprenticeRejectTeaching7
	.globl gText_Rom_26DC0F
gText_Rom_26DC0F: @ 0x0826DC0F
	.string "まあ……!\p…… …… ……\n…… …… ……\p……あ ショックで きを うしないましたわ\nいいえ! きっと ききまちがい ですわ\pおねがい! わたくしを\nでしに して くださると おっしゃって!"
	.byte EOS
	.if (. - gText_Rom_26DC0F) > 0x63
	.error "gText_Rom_26DC0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC0F) < 0x63
	.space 0x63 - (. - gText_Rom_26DC0F)
	.endif

	@ data/text/apprentice.inc:139 gText_ApprenticeWhichLevelMode7
	.globl gText_Rom_26DC72
gText_Rom_26DC72: @ 0x0826DC72
	.string "うっ うれしい ですわ……!\pでは さっそくですけど わたくしの\nそうだんを きいて くださいませ!\pわたくし いちど バトルタワーに\nちょうせん しようと おもっていますの\lただ レベルが ふたつ ありまして……\pわたくしは レベル50と オープンレベル\nどちらに ふさわしいと おもわれますか?"
	.byte EOS
	.if (. - gText_Rom_26DC72) > 0x96
	.error "gText_Rom_26DC72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26DC72) < 0x96
	.space 0x96 - (. - gText_Rom_26DC72)
	.endif

