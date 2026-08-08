
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
