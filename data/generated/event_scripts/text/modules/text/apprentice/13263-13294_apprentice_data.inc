
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
