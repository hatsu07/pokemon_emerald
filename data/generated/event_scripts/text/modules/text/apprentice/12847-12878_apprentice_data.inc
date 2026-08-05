	@ data/text/apprentice.inc:190 gText_ApprenticeLevelModeThanks11
	.globl gText_Rom_26E3C1
gText_Rom_26E3C1: @ 0x0826E3C1
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで いってみるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!"
	.byte EOS
	.if (. - gText_Rom_26E3C1) > 0x36
	.error "gText_Rom_26E3C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3C1) < 0x36
	.space 0x36 - (. - gText_Rom_26E3C1)
	.endif

	@ data/text/apprentice.inc:193 gText_ApprenticePleaseTeach12
	.globl gText_Rom_26E3F7
gText_Rom_26E3F7: @ 0x0826E3F7
	.string "ヒャホー {PLAYER}さんじゃなーい!?\nどうする オレ? はなしかけてみる!?\lってもう はなし してるよ!!\pって {PLAYER}さん あきれてる!?\nしかたねー じこしょうかい してみる!?\pオスっ オレっ {STR_VAR_1}!\nポケモン ギタリストかいの 1ばんぼしさ!\pって きいてる!? きいてる!!\nついでに たのみごと してみる!?\pあの {PLAYER}さん!\nオレを {PLAYER}さんの でしに して!"
	.byte EOS
	.if (. - gText_Rom_26E3F7) > 0xba
	.error "gText_Rom_26E3F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E3F7) < 0xba
	.space 0xba - (. - gText_Rom_26E3F7)
	.endif

	@ data/text/apprentice.inc:196 gText_ApprenticeRejectTeaching12
	.globl gText_Rom_26E4B1
gText_Rom_26E4B1: @ 0x0826E4B1
	.string "って ことわられてる オレっ!?\nしかたねー もういちど たのんでみる!?\pおねがい だよ {PLAYER}さん!\nオレを でしに してエェ!!"
	.byte EOS
	.if (. - gText_Rom_26E4B1) > 0x43
	.error "gText_Rom_26E4B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4B1) < 0x43
	.space 0x43 - (. - gText_Rom_26E4B1)
	.endif

	@ data/text/apprentice.inc:199 gText_ApprenticeWhichLevelMode12
	.globl gText_Rom_26E4F4
gText_Rom_26E4F4: @ 0x0826E4F4
	.string "やったラッキー うれしーよ オレ!!\nさっそく なんか そうだんしてみる!?\lしかも ここは バトルタワー だから\lそのへん から きいてみる!?\pあのさっ! バトルタワーで オレ\nどっちの レベルが にあってる!?"
	.byte EOS
	.if (. - gText_Rom_26E4F4) > 0x6d
	.error "gText_Rom_26E4F4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E4F4) < 0x6d
	.space 0x6d - (. - gText_Rom_26E4F4)
	.endif

	@ data/text/apprentice.inc:202 gText_ApprenticeLevelModeThanks12
	.globl gText_Rom_26E561
gText_Rom_26E561: @ 0x0826E561
	.string "{STR_VAR_1}だって!\nじゃ そこ いってみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!"
	.byte EOS
	.if (. - gText_Rom_26E561) > 0x37
	.error "gText_Rom_26E561 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E561) < 0x37
	.space 0x37 - (. - gText_Rom_26E561)
	.endif

	@ data/text/apprentice.inc:205 gText_ApprenticePleaseTeach13
	.globl gText_Rom_26E598
gText_Rom_26E598: @ 0x0826E598
	.string "あ…… きみきみ!\nちょっとさ かた もんでくれる?\p……ああ そうそう そこそこ\nはー きもちいい!\pおれ {STR_VAR_1} って いうんだ\nカラテ やってるんだけど\lいまいち からだが よわくてさ……\pポケモンしょうぶも やって\nきたえようと おもって いるんだよね\pきみ ポケモンリーグで かった\n{PLAYER}{KUN} だろう?\lどうかな たまに おれの\lそうだんに のって もらえない かい?"
	.byte EOS
	.if (. - gText_Rom_26E598) > 0xbd
	.error "gText_Rom_26E598 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E598) < 0xbd
	.space 0xbd - (. - gText_Rom_26E598)
	.endif

	@ data/text/apprentice.inc:208 gText_ApprenticeRejectTeaching13
	.globl gText_Rom_26E655
gText_Rom_26E655: @ 0x0826E655
	.string "えー なんで!\pそんなに めんどうは かけないからさ\nおねがいだよ!"
	.byte EOS
	.if (. - gText_Rom_26E655) > 0x23
	.error "gText_Rom_26E655 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E655) < 0x23
	.space 0x23 - (. - gText_Rom_26E655)
	.endif

	@ data/text/apprentice.inc:211 gText_ApprenticeWhichLevelMode13
	.globl gText_Rom_26E678
gText_Rom_26E678: @ 0x0826E678
	.string "ありがとう わるいね\n……ゴホ ゴホっ!\pうう はやく きたえなきゃ……\nすぐに バトルタワーに いくから\lレベル50のへや オープンレベルのへや\lどっちが いいか きめてくれるかい?"
	.byte EOS
	.if (. - gText_Rom_26E678) > 0x5d
	.error "gText_Rom_26E678 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E678) < 0x5d
	.space 0x5d - (. - gText_Rom_26E678)
	.endif

	@ data/text/apprentice.inc:214 gText_ApprenticeLevelModeThanks13
	.globl gText_Rom_26E6D5
gText_Rom_26E6D5: @ 0x0826E6D5
	.string "ん わかった {STR_VAR_1}な!\nじゃあ さっそく いってくる!\pこれからも おれを よろしく たのむよ!\nもう でしいり したんだからな!"
	.byte EOS
	.if (. - gText_Rom_26E6D5) > 0x42
	.error "gText_Rom_26E6D5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E6D5) < 0x42
	.space 0x42 - (. - gText_Rom_26E6D5)
	.endif

	@ data/text/apprentice.inc:217 gText_ApprenticePleaseTeach14
	.globl gText_Rom_26E717
gText_Rom_26E717: @ 0x0826E717
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\pワシは {STR_VAR_1}と いって\nは はずかしい けど\lいせきを さがしたり して くらしてるんだ\pでも バトルフロンティア にも\nはずかしながら き きょうみが あるんだ\p{PLAYER}{KUN}は ポケモン つよいって\nひょうばん だから……\lその いいづらいん だけど\lひとつ おねがいを したいんだ\pワシの せんせいに なって\nアドバイスして もらえない かな……?"
	.byte EOS
	.if (. - gText_Rom_26E717) > 0xd8
	.error "gText_Rom_26E717 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E717) < 0xd8
	.space 0xd8 - (. - gText_Rom_26E717)
	.endif

	@ data/text/apprentice.inc:220 gText_ApprenticeRejectTeaching14
	.globl gText_Rom_26E7EF
gText_Rom_26E7EF: @ 0x0826E7EF
	.string "こ ことわらないでくれ!\nワシに はじを かかせないで くれ!\pおねがい だから\nワシの せんせいに なってくれ!"
	.byte EOS
	.if (. - gText_Rom_26E7EF) > 0x3a
	.error "gText_Rom_26E7EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E7EF) < 0x3a
	.space 0x3a - (. - gText_Rom_26E7EF)
	.endif

	@ data/text/apprentice.inc:223 gText_ApprenticeWhichLevelMode14
	.globl gText_Rom_26E829
gText_Rom_26E829: @ 0x0826E829
	.string "あ ありがとう……\pいや だから そんなに みないで くれよ\nてれるだろ\pめを あわせずに こたえて くれ!\pば バトルタワ…… バトルタワー だが\nどの レベルに ちょうせん すれば いい?"
	.byte EOS
	.if (. - gText_Rom_26E829) > 0x61
	.error "gText_Rom_26E829 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E829) < 0x61
	.space 0x61 - (. - gText_Rom_26E829)
	.endif

	@ data/text/apprentice.inc:226 gText_ApprenticeLevelModeThanks14
	.globl gText_Rom_26E88A
gText_Rom_26E88A: @ 0x0826E88A
	.string "よ よし!\nそれで がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね"
	.byte EOS
	.if (. - gText_Rom_26E88A) > 0x4c
	.error "gText_Rom_26E88A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26E88A) < 0x4c
	.space 0x4c - (. - gText_Rom_26E88A)
	.endif

	@ data/text/apprentice.inc:229 gText_ApprenticePleaseTeach15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E8D6
gText_Rom_26E8D6: @ 0x0826E8D6
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pわたしは {STR_VAR_1}だ\nいまね だれか つよい トレーナーに\lでしいり したいと おもって いたんだよ\pきみが いるなら よかった!\n……ほんとうに {PLAYER}{KUN} だよね?\pいや ほんもの なら いいんだ\nわたしの でしいりを みとめて ほしい"
	.byte EOS
	.if (. - gText_Rom_26E8D6) != 0x95
	.error "gText_Rom_26E8D6 must retain its original byte length"
	.endif
	.globl gText_Rom_26E967
	.set gText_Rom_26E967, gText_Rom_26E8D6 + 0x91

	@ data/text/apprentice.inc:232 gText_ApprenticeRejectTeaching15
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26E96B
gText_Rom_26E96B: @ 0x0826E96B
	.string "え? なぜ ことわるのかね?\pほんものか どうか うたがって わるかった\nあやまるから でしいり させてほしい"
	.byte EOS
	.if (. - gText_Rom_26E96B) != 0x38
	.error "gText_Rom_26E96B must retain its original byte length"
	.endif
	.globl gText_Rom_26E99F
	.set gText_Rom_26E99F, gText_Rom_26E96B + 0x34

