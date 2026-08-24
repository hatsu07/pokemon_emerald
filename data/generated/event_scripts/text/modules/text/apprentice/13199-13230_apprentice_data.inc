
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
