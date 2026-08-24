
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
