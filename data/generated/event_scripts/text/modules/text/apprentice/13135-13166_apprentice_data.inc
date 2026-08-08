
	@ data/text/apprentice.inc:622 gText_ApprenticeMonThanks7
	.globl gText_Rom_271399
gText_Rom_271399: @ 0x08271399
	.string "{STR_VAR_1} ですのね!\nさっそく さがして きますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!$"
	.if (. - gText_Rom_271399) > 0x3f
	.error "gText_Rom_271399 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271399) < 0x3f
	.space 0x3f - (. - gText_Rom_271399)
	.endif

	@ data/text/apprentice.inc:625 gText_ApprenticeWhichMon8
	.globl gText_Rom_2713D8
gText_Rom_2713D8: @ 0x082713D8
	.string "キャー {PLAYER}さんに また あえた!\nかっ かんげきっ……!\pそそそ そうだわっ!\nせっかく あえたん ですもの\lこの チャンスを のがす ては ないわっ!\p{PLAYER}さん おねがいが!\nわたしの ポケモンを きめて くださいっ!\p{STR_VAR_1}と {STR_VAR_2}と\nどちらが いいか きめて ほしいのですっ!$"
	.if (. - gText_Rom_2713D8) > 0x8e
	.error "gText_Rom_2713D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2713D8) < 0x8e
	.space 0x8e - (. - gText_Rom_2713D8)
	.endif

	@ data/text/apprentice.inc:628 gText_ApprenticeMonThanks8
	.globl gText_Rom_271466
gText_Rom_271466: @ 0x08271466
	.string "うわぁぁ きめて もらっちゃったあ!\n{STR_VAR_1} ですねっ!\lがんばって そだてるで あります!\pでは また こんど\nいろいろと おしえて くださいね!$"
	.if (. - gText_Rom_271466) > 0x4a
	.error "gText_Rom_271466 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271466) < 0x4a
	.space 0x4a - (. - gText_Rom_271466)
	.endif

	@ data/text/apprentice.inc:631 gText_ApprenticeWhichMon9
	.globl gText_Rom_2714B0
gText_Rom_2714B0: @ 0x082714B0
	.string "ヘイ ヘイ {PLAYER}{KUN}!\nおじさんの ポケモン ティーチャー!\pハロウ きみを さがしてたんだよ\nアドバイスを おねがいするよ!\pおじさんが つかう ポケモン\nどっちが いいかな?\l{STR_VAR_1}か {STR_VAR_2}か\lパーっと きめちゃって くれ!$"
	.if (. - gText_Rom_2714B0) > 0x72
	.error "gText_Rom_2714B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2714B0) < 0x72
	.space 0x72 - (. - gText_Rom_2714B0)
	.endif

	@ data/text/apprentice.inc:634 gText_ApprenticeMonThanks9
	.globl gText_Rom_271522
gText_Rom_271522: @ 0x08271522
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガーっと つかまえて くるよ!\pそれじゃあ これからも よろしくね\nアディオース!$"
	.if (. - gText_Rom_271522) > 0x42
	.error "gText_Rom_271522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271522) < 0x42
	.space 0x42 - (. - gText_Rom_271522)
	.endif

	@ data/text/apprentice.inc:637 gText_ApprenticeWhichMon10
	.globl gText_Rom_271564
gText_Rom_271564: @ 0x08271564
	.string "{PLAYER}{KUN} たいへんだ たいへんだ!\nまぼろしの ポケモン つかまえちゃった!\l……なんて うそさ! わっはっは\pじつは おいら ポケモン つかまえるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを つかまえたら いいか\lししょうが きめて くれない かな?\pどっちが いいかな?\n{STR_VAR_1}と {STR_VAR_2}だと……$"
	.if (. - gText_Rom_271564) > 0xa9
	.error "gText_Rom_271564 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271564) < 0xa9
	.space 0xa9 - (. - gText_Rom_271564)
	.endif

	@ data/text/apprentice.inc:640 gText_ApprenticeMonThanks10
	.globl gText_Rom_27160D
gText_Rom_27160D: @ 0x0827160D
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー$"
	.if (. - gText_Rom_27160D) > 0x5d
	.error "gText_Rom_27160D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27160D) < 0x5d
	.space 0x5d - (. - gText_Rom_27160D)
	.endif

	@ data/text/apprentice.inc:643 gText_ApprenticeWhichMon11
	.globl gText_Rom_27166A
gText_Rom_27166A: @ 0x0827166A
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わし\lきみは とうぜん おぼえてるだろ?\pきょうも わしの しつもん いってみよう!\nポケモンに かんする そうだんだよ!\p{STR_VAR_1} と {STR_VAR_2}\nわしが つかまえるなら さあ どっち?$"
	.if (. - gText_Rom_27166A) > 0x7b
	.error "gText_Rom_27166A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27166A) < 0x7b
	.space 0x7b - (. - gText_Rom_27166A)
	.endif

	@ data/text/apprentice.inc:646 gText_ApprenticeMonThanks11
	.globl gText_Rom_2716E5
gText_Rom_2716E5: @ 0x082716E5
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで さがしてくるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!$"
	.if (. - gText_Rom_2716E5) > 0x37
	.error "gText_Rom_2716E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2716E5) < 0x37
	.space 0x37 - (. - gText_Rom_2716E5)
	.endif

	@ data/text/apprentice.inc:649 gText_ApprenticeWhichMon12
	.globl gText_Rom_27171C
gText_Rom_27171C: @ 0x0827171C
	.string "ゥワォ {PLAYER}さんじゃなーい!?\nどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pオスっ ひさしぶり ですっ!\nそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\lオレの ポケモン なにに したらいいかな!\p{STR_VAR_1}と {STR_VAR_2}\nどっちが いいか さあ きめて!$"
	.if (. - gText_Rom_27171C) > 0x95
	.error "gText_Rom_27171C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27171C) < 0x95
	.space 0x95 - (. - gText_Rom_27171C)
	.endif

	@ data/text/apprentice.inc:652 gText_ApprenticeMonThanks12
	.globl gText_Rom_2717B1
gText_Rom_2717B1: @ 0x082717B1
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく さがしてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!$"
	.if (. - gText_Rom_2717B1) > 0x3c
	.error "gText_Rom_2717B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717B1) < 0x3c
	.space 0x3c - (. - gText_Rom_2717B1)
	.endif

	@ data/text/apprentice.inc:655 gText_ApprenticeWhichMon13
	.globl gText_Rom_2717ED
gText_Rom_2717ED: @ 0x082717ED
	.string "{PLAYER}{KUN}かぁ\nおれ あたま いたくてさ……\pどの ポケモンに するか\nなやみ すぎちゃったん だよね きっと\lというわけ だからさ\lかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\n{STR_VAR_1}と {STR_VAR_2} だったら\lどっちが あってると おもうかい?$"
	.if (. - gText_Rom_2717ED) > 0x7e
	.error "gText_Rom_2717ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2717ED) < 0x7e
	.space 0x7e - (. - gText_Rom_2717ED)
	.endif

	@ data/text/apprentice.inc:658 gText_ApprenticeMonThanks13
	.globl gText_Rom_27186B
gText_Rom_27186B: @ 0x0827186B
	.string "ん わかった {STR_VAR_1}な!\nじゃあ たいちょうの いいときに\lさがしてみるよ!\pこれからも おれを よろしく たのむよ!$"
	.if (. - gText_Rom_27186B) > 0x3b
	.error "gText_Rom_27186B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_27186B) < 0x3b
	.space 0x3b - (. - gText_Rom_27186B)
	.endif

	@ data/text/apprentice.inc:661 gText_ApprenticeWhichMon14
	.globl gText_Rom_2718A6
gText_Rom_2718A6: @ 0x082718A6
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lちょっと…… そうだん させて くれよ\pは はずかしいん だけどさ!\nつかいたい ポケモンで なやんでててさ\l{STR_VAR_1}と {STR_VAR_2}だったら\lどっちを つかったら いい かな……?$"
	.if (. - gText_Rom_2718A6) > 0x7f
	.error "gText_Rom_2718A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2718A6) < 0x7f
	.space 0x7f - (. - gText_Rom_2718A6)
	.endif

	@ data/text/apprentice.inc:664 gText_ApprenticeMonThanks14
	.globl gText_Rom_271925
gText_Rom_271925: @ 0x08271925
	.string "よ よし!\n{STR_VAR_1}で がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね$"
	.if (. - gText_Rom_271925) > 0x4c
	.error "gText_Rom_271925 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271925) < 0x4c
	.space 0x4c - (. - gText_Rom_271925)
	.endif

	@ data/text/apprentice.inc:667 gText_ApprenticeWhichMon15
	.globl gText_Rom_271971
gText_Rom_271971: @ 0x08271971
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pいや ほんもの なら いいんだ\nついでに でしの わたしに\lじょげんを おねがい したい!\pわたしが つかう ポケモンの ことだが\n{STR_VAR_1}と {STR_VAR_2}であれば\lどちらが わたしに ふさわしい かな?$"
	.if (. - gText_Rom_271971) > 0x80
	.error "gText_Rom_271971 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271971) < 0x80
	.space 0x80 - (. - gText_Rom_271971)
	.endif
