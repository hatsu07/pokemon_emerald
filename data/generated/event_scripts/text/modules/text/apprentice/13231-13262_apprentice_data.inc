
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
