
	@ data/text/apprentice.inc:718 gText_ApprenticeMoveThanks7
	.globl gText_Rom_272012
gText_Rom_272012: @ 0x08272012
	.string "{STR_VAR_1} ですのね!\nさっそく そのように しますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!{EOS}"
	.if (. - gText_Rom_272012) > 0x40
	.error "gText_Rom_272012 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272012) < 0x40
	.space 0x40 - (. - gText_Rom_272012)
	.endif

	@ data/text/apprentice.inc:721 gText_ApprenticeWhichMove8
	.globl gText_Rom_272052
gText_Rom_272052: @ 0x08272052
	.string "キャァァ {PLAYER}さんが いるーっ!\nかっ かんげきっ……!\lこまった ときは {PLAYER}さんですっ!\pほんじつは わざの オススメを\nおしえて ほしいのですっ!\lわたしの {STR_VAR_1}の わざを\lきめて くださいっ!\pどっちが いいですかっ?\n{STR_VAR_2}と {STR_VAR_3}!{EOS}"
	.if (. - gText_Rom_272052) > 0x7a
	.error "gText_Rom_272052 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272052) < 0x7a
	.space 0x7a - (. - gText_Rom_272052)
	.endif

	@ data/text/apprentice.inc:724 gText_ApprenticeMoveThanks8
	.globl gText_Rom_2720CC
gText_Rom_2720CC: @ 0x082720CC
	.string "ああぁ ありがとう ございますっ!\n{STR_VAR_1} ですねっ\lりょうかいで ありますっ!\pでは また こんど\nいろいろと おしえて くださいね!{EOS}"
	.if (. - gText_Rom_2720CC) > 0x44
	.error "gText_Rom_2720CC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2720CC) < 0x44
	.space 0x44 - (. - gText_Rom_2720CC)
	.endif

	@ data/text/apprentice.inc:727 gText_ApprenticeWhichMove9
	.globl gText_Rom_272110
gText_Rom_272110: @ 0x08272110
	.string "ハロウ {PLAYER}{KUN} ハロウ!\nおじさん きょうも きみに\lアドバイスを もらいたいんだ プリーズ!\pマイ ポケモン {STR_VAR_1}の\nベストな わざは なんだろう?\lババーっと かてちゃいそうな わざ!\p{STR_VAR_2} かな?\nオア {STR_VAR_3} かな?{EOS}"
	.if (. - gText_Rom_272110) > 0x71
	.error "gText_Rom_272110 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272110) < 0x71
	.space 0x71 - (. - gText_Rom_272110)
	.endif

	@ data/text/apprentice.inc:730 gText_ApprenticeMoveThanks9
	.globl gText_Rom_272181
gText_Rom_272181: @ 0x08272181
	.string "あはぁ {STR_VAR_1}ねー\nオーケイ オーケイ!\lおじさん ザザーっと おぼえさせるよ!\pそれじゃあ これからも よろしくね\nアディオース!{EOS}"
	.if (. - gText_Rom_272181) > 0x42
	.error "gText_Rom_272181 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272181) < 0x42
	.space 0x42 - (. - gText_Rom_272181)
	.endif

	@ data/text/apprentice.inc:733 gText_ApprenticeWhichMove10
	.globl gText_Rom_2721C3
gText_Rom_2721C3: @ 0x082721C3
	.string "{PLAYER}{KUN} たいへんだぞ!\nおいらの ポケモンが なんと\lわざを 6つ おぼえたんだ!\p……なんてね ウソだよ! ははは!\pじつは おいら ポケモンの わざ きめるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ ししょうが\lオススメのわざ きめて くれない かな?\p{STR_VAR_2} と {STR_VAR_3}\n{STR_VAR_1}なら どっちが あうかい?{EOS}"
	.if (. - gText_Rom_2721C3) > 0xa0
	.error "gText_Rom_2721C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2721C3) < 0xa0
	.space 0xa0 - (. - gText_Rom_2721C3)
	.endif

	@ data/text/apprentice.inc:736 gText_ApprenticeMoveThanks10
	.globl gText_Rom_272263
gText_Rom_272263: @ 0x08272263
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうわざに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー{EOS}"
	.if (. - gText_Rom_272263) > 0x5d
	.error "gText_Rom_272263 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272263) < 0x5d
	.space 0x5d - (. - gText_Rom_272263)
	.endif

	@ data/text/apprentice.inc:739 gText_ApprenticeWhichMove11
	.globl gText_Rom_2722C0
gText_Rom_2722C0: @ 0x082722C0
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わしだぜー!\pよーし きょうの わしの そうだん\nいってみようぜー!\lわざに かんする そうだんだよ!\p{STR_VAR_2}と {STR_VAR_3}\n{STR_VAR_1}が おぼえるなら どっちだ?{EOS}"
	.if (. - gText_Rom_2722C0) > 0x6d
	.error "gText_Rom_2722C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2722C0) < 0x6d
	.space 0x6d - (. - gText_Rom_2722C0)
	.endif

	@ data/text/apprentice.inc:742 gText_ApprenticeMoveThanks11
	.globl gText_Rom_27232D
gText_Rom_27232D: @ 0x0827232D
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで おぼえさせるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!{EOS}"
	.if (. - gText_Rom_27232D) > 0x37
	.error "gText_Rom_27232D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27232D) < 0x37
	.space 0x37 - (. - gText_Rom_27232D)
	.endif

	@ data/text/apprentice.inc:745 gText_ApprenticeWhichMove12
	.globl gText_Rom_272364
gText_Rom_272364: @ 0x08272364
	.string "イエァ {PLAYER}さんじゃないのー?\nどうする オレ? また はなしかける!?\lってもう はなしかけてる!?\lって {PLAYER}さん あきれてる!?\lしかたねー そうだん してみる!?\pきょうも そうだんに のってェ!\nって きいてる!? きいてる!!\pおれの {STR_VAR_1}の わざ\nどうしたら いいかな? きめてエェ!\l{STR_VAR_2}!? {STR_VAR_3}!?{EOS}"
	.if (. - gText_Rom_272364) > 0xa0
	.error "gText_Rom_272364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272364) < 0xa0
	.space 0xa0 - (. - gText_Rom_272364)
	.endif

	@ data/text/apprentice.inc:748 gText_ApprenticeMoveThanks12
	.globl gText_Rom_272404
gText_Rom_272404: @ 0x08272404
	.string "{STR_VAR_1}で オーライ!\nじゃ さっそく おぼえさせるぜェ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!{EOS}"
	.if (. - gText_Rom_272404) > 0x3e
	.error "gText_Rom_272404 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272404) < 0x3e
	.space 0x3e - (. - gText_Rom_272404)
	.endif

	@ data/text/apprentice.inc:751 gText_ApprenticeWhichMove13
	.globl gText_Rom_272442
gText_Rom_272442: @ 0x08272442
	.string "ガハゴホ あ {PLAYER}{KUN}\nカゼ ひいちゃったよ おれ……\pポケモンに おしえる わざを\nきめたいんだけど ムリっぽいん だよね\lというわけ だからさ かわりに たのむよ!\p{PLAYER}{KUN}はさ おれの {STR_VAR_1}\n{STR_VAR_2}と {STR_VAR_3}なら\lどっちが あってると おもうかい?{EOS}"
	.if (. - gText_Rom_272442) > 0x7e
	.error "gText_Rom_272442 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_272442) < 0x7e
	.space 0x7e - (. - gText_Rom_272442)
	.endif

	@ data/text/apprentice.inc:754 gText_ApprenticeMoveThanks13
	.globl gText_Rom_2724C0
gText_Rom_2724C0: @ 0x082724C0
	.string "ん わかった {STR_VAR_1}な!\nじゃあ カゼが なおったら\lゴホ おしえて みるよ!\pこれからも おれを よろしく たのむよ!{EOS}"
	.if (. - gText_Rom_2724C0) > 0x3c
	.error "gText_Rom_2724C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724C0) < 0x3c
	.space 0x3c - (. - gText_Rom_2724C0)
	.endif

	@ data/text/apprentice.inc:757 gText_ApprenticeWhichMove14
	.globl gText_Rom_2724FC
gText_Rom_2724FC: @ 0x082724FC
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lまた…… そうだん させて くれよ\pは はずかしながらさ\nポケモンに おしえる わざがさ\lきまんないんだ アドバイス くれよ!\pポケモンは {STR_VAR_1}なんだ\nだったら どっちが いい かな……?\n{STR_VAR_2}…… {STR_VAR_3}……{EOS}"
	.if (. - gText_Rom_2724FC) > 0x92
	.error "gText_Rom_2724FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2724FC) < 0x92
	.space 0x92 - (. - gText_Rom_2724FC)
	.endif

	@ data/text/apprentice.inc:760 gText_ApprenticeMoveThanks14
	.globl gText_Rom_27258E
gText_Rom_27258E: @ 0x0827258E
	.string "よ よし {STR_VAR_1}\nいって みるよ!\pそんな わざを おしえるなんて\nて てれるな……\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね{EOS}"
	.if (. - gText_Rom_27258E) > 0x49
	.error "gText_Rom_27258E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27258E) < 0x49
	.space 0x49 - (. - gText_Rom_27258E)
	.endif

	@ data/text/apprentice.inc:763 gText_ApprenticeWhichMove15
	.globl gText_Rom_2725D7
gText_Rom_2725D7: @ 0x082725D7
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんものかな?\lさいきん はやりの モノマネ では?\pいやいや! ほんもの ならいいんだ!\nきを わるく しないでくれ!\lそして ついでに でしの わたしに\lじょげんを おねがい したい\lわたしの {STR_VAR_1}の ことだ!\p{STR_VAR_2} と {STR_VAR_3}\nどっちの わざが つかえたら いいかね?{EOS}"
	.if (. - gText_Rom_2725D7) > 0x9d
	.error "gText_Rom_2725D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2725D7) < 0x9d
	.space 0x9d - (. - gText_Rom_2725D7)
	.endif
