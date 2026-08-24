
	@ data/text/apprentice.inc:622 gText_ApprenticeMonThanks7
	.globl gText_ApprenticeMonThanks7
gText_ApprenticeMonThanks7: @ 0x08271399
	.string "{STR_VAR_1} ですのね!\nさっそく さがして きますわ!\pそれでは {PLAYER}さん\nこれからも よろしく おねがいしますわ\lごきげんよう!{EOS}"
	.if (. - gText_ApprenticeMonThanks7) > 0x3f
	.error "gText_ApprenticeMonThanks7 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks7) < 0x3f
	.space 0x3f - (. - gText_ApprenticeMonThanks7)
	.endif

	@ data/text/apprentice.inc:625 gText_ApprenticeWhichMon8
	.globl gText_ApprenticeWhichMon8
gText_ApprenticeWhichMon8: @ 0x082713D8
	.string "キャー {PLAYER}さんに また あえた!\nかっ かんげきっ……!\pそそそ そうだわっ!\nせっかく あえたん ですもの\lこの チャンスを のがす ては ないわっ!\p{PLAYER}さん おねがいが!\nわたしの ポケモンを きめて くださいっ!\p{STR_VAR_1}と {STR_VAR_2}と\nどちらが いいか きめて ほしいのですっ!{EOS}"
	.if (. - gText_ApprenticeWhichMon8) > 0x8e
	.error "gText_ApprenticeWhichMon8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon8) < 0x8e
	.space 0x8e - (. - gText_ApprenticeWhichMon8)
	.endif

	@ data/text/apprentice.inc:628 gText_ApprenticeMonThanks8
	.globl gText_ApprenticeMonThanks8
gText_ApprenticeMonThanks8: @ 0x08271466
	.string "うわぁぁ きめて もらっちゃったあ!\n{STR_VAR_1} ですねっ!\lがんばって そだてるで あります!\pでは また こんど\nいろいろと おしえて くださいね!{EOS}"
	.if (. - gText_ApprenticeMonThanks8) > 0x4a
	.error "gText_ApprenticeMonThanks8 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks8) < 0x4a
	.space 0x4a - (. - gText_ApprenticeMonThanks8)
	.endif

	@ data/text/apprentice.inc:631 gText_ApprenticeWhichMon9
	.globl gText_ApprenticeWhichMon9
gText_ApprenticeWhichMon9: @ 0x082714B0
	.string "ヘイ ヘイ {PLAYER}{KUN}!\nおじさんの ポケモン ティーチャー!\pハロウ きみを さがしてたんだよ\nアドバイスを おねがいするよ!\pおじさんが つかう ポケモン\nどっちが いいかな?\l{STR_VAR_1}か {STR_VAR_2}か\lパーっと きめちゃって くれ!{EOS}"
	.if (. - gText_ApprenticeWhichMon9) > 0x72
	.error "gText_ApprenticeWhichMon9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon9) < 0x72
	.space 0x72 - (. - gText_ApprenticeWhichMon9)
	.endif

	@ data/text/apprentice.inc:634 gText_ApprenticeMonThanks9
	.globl gText_ApprenticeMonThanks9
gText_ApprenticeMonThanks9: @ 0x08271522
	.string "あはぁ {STR_VAR_1}ね\nオーケイ オーケイ!\lおじさん ガーっと つかまえて くるよ!\pそれじゃあ これからも よろしくね\nアディオース!{EOS}"
	.if (. - gText_ApprenticeMonThanks9) > 0x42
	.error "gText_ApprenticeMonThanks9 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks9) < 0x42
	.space 0x42 - (. - gText_ApprenticeMonThanks9)
	.endif

	@ data/text/apprentice.inc:637 gText_ApprenticeWhichMon10
	.globl gText_ApprenticeWhichMon10
gText_ApprenticeWhichMon10: @ 0x08271564
	.string "{PLAYER}{KUN} たいへんだ たいへんだ!\nまぼろしの ポケモン つかまえちゃった!\l……なんて うそさ! わっはっは\pじつは おいら ポケモン つかまえるの\nあんまり とくいじゃ なくてさ!\lひとつ どうだろ おいらの ポケモン\lどいつを つかまえたら いいか\lししょうが きめて くれない かな?\pどっちが いいかな?\n{STR_VAR_1}と {STR_VAR_2}だと……{EOS}"
	.if (. - gText_ApprenticeWhichMon10) > 0xa9
	.error "gText_ApprenticeWhichMon10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon10) < 0xa9
	.space 0xa9 - (. - gText_ApprenticeWhichMon10)
	.endif

	@ data/text/apprentice.inc:640 gText_ApprenticeMonThanks10
	.globl gText_ApprenticeMonThanks10
gText_ApprenticeMonThanks10: @ 0x0827160D
	.string "そうか\n{STR_VAR_1}が いいのね!\lじゃあ ちがうほうに しようっと!\p…… なんて じょうだん!\nちゃんと ししょうの いうこと きくよ\pありがとう ししょう!\nまた あったら よろしくなー{EOS}"
	.if (. - gText_ApprenticeMonThanks10) > 0x5d
	.error "gText_ApprenticeMonThanks10 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks10) < 0x5d
	.space 0x5d - (. - gText_ApprenticeMonThanks10)
	.endif

	@ data/text/apprentice.inc:643 gText_ApprenticeWhichMon11
	.globl gText_ApprenticeWhichMon11
gText_ApprenticeWhichMon11: @ 0x0827166A
	.string "こ・ん・に・ち・は!\nはーい こんにちは!\lノリノリ ふなのりの わし\lきみは とうぜん おぼえてるだろ?\pきょうも わしの しつもん いってみよう!\nポケモンに かんする そうだんだよ!\p{STR_VAR_1} と {STR_VAR_2}\nわしが つかまえるなら さあ どっち?{EOS}"
	.if (. - gText_ApprenticeWhichMon11) > 0x7b
	.error "gText_ApprenticeWhichMon11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon11) < 0x7b
	.space 0x7b - (. - gText_ApprenticeWhichMon11)
	.endif

	@ data/text/apprentice.inc:646 gText_ApprenticeMonThanks11
	.globl gText_ApprenticeMonThanks11
gText_ApprenticeMonThanks11: @ 0x082716E5
	.string "{STR_VAR_1}かーっ! ようよう!\nそんなら ノリノリで さがしてくるぜ!\pこれからも ヨロシク たのむぜ\n{PLAYER}さん!{EOS}"
	.if (. - gText_ApprenticeMonThanks11) > 0x37
	.error "gText_ApprenticeMonThanks11 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks11) < 0x37
	.space 0x37 - (. - gText_ApprenticeMonThanks11)
	.endif

	@ data/text/apprentice.inc:649 gText_ApprenticeWhichMon12
	.globl gText_ApprenticeWhichMon12
gText_ApprenticeWhichMon12: @ 0x0827171C
	.string "ゥワォ {PLAYER}さんじゃなーい!?\nどうする オレ? そうだんしてみる!?\lって もう はなしかけてる!?\pオスっ ひさしぶり ですっ!\nそうだんが あるんだけど きいてェ!\lって きいてる!? きいてる!!\lオレの ポケモン なにに したらいいかな!\p{STR_VAR_1}と {STR_VAR_2}\nどっちが いいか さあ きめて!{EOS}"
	.if (. - gText_ApprenticeWhichMon12) > 0x95
	.error "gText_ApprenticeWhichMon12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon12) < 0x95
	.space 0x95 - (. - gText_ApprenticeWhichMon12)
	.endif

	@ data/text/apprentice.inc:652 gText_ApprenticeMonThanks12
	.globl gText_ApprenticeMonThanks12
gText_ApprenticeMonThanks12: @ 0x082717B1
	.string "{STR_VAR_1}だってエェ!\nじゃ さっそく さがしてみるよ!!\pって {PLAYER}さん\nオレの こと わすれんなよ!\lまた あおうぜ!!{EOS}"
	.if (. - gText_ApprenticeMonThanks12) > 0x3c
	.error "gText_ApprenticeMonThanks12 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks12) < 0x3c
	.space 0x3c - (. - gText_ApprenticeMonThanks12)
	.endif

	@ data/text/apprentice.inc:655 gText_ApprenticeWhichMon13
	.globl gText_ApprenticeWhichMon13
gText_ApprenticeWhichMon13: @ 0x082717ED
	.string "{PLAYER}{KUN}かぁ\nおれ あたま いたくてさ……\pどの ポケモンに するか\nなやみ すぎちゃったん だよね きっと\lというわけ だからさ\lかわりに きめて くれよ!\p{PLAYER}{KUN}はさ おれの ポケモン\n{STR_VAR_1}と {STR_VAR_2} だったら\lどっちが あってると おもうかい?{EOS}"
	.if (. - gText_ApprenticeWhichMon13) > 0x7e
	.error "gText_ApprenticeWhichMon13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon13) < 0x7e
	.space 0x7e - (. - gText_ApprenticeWhichMon13)
	.endif

	@ data/text/apprentice.inc:658 gText_ApprenticeMonThanks13
	.globl gText_ApprenticeMonThanks13
gText_ApprenticeMonThanks13: @ 0x0827186B
	.string "ん わかった {STR_VAR_1}な!\nじゃあ たいちょうの いいときに\lさがしてみるよ!\pこれからも おれを よろしく たのむよ!{EOS}"
	.if (. - gText_ApprenticeMonThanks13) > 0x3b
	.error "gText_ApprenticeMonThanks13 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks13) < 0x3b
	.space 0x3b - (. - gText_ApprenticeMonThanks13)
	.endif

	@ data/text/apprentice.inc:661 gText_ApprenticeWhichMon14
	.globl gText_ApprenticeWhichMon14
gText_ApprenticeWhichMon14: @ 0x082718A6
	.string "あ…… あ……\n{PLAYER}{KUN} だよね?\lそ そんなに みないで くれよ!\lてれるだろ\lちょっと…… そうだん させて くれよ\pは はずかしいん だけどさ!\nつかいたい ポケモンで なやんでててさ\l{STR_VAR_1}と {STR_VAR_2}だったら\lどっちを つかったら いい かな……?{EOS}"
	.if (. - gText_ApprenticeWhichMon14) > 0x7f
	.error "gText_ApprenticeWhichMon14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon14) < 0x7f
	.space 0x7f - (. - gText_ApprenticeWhichMon14)
	.endif

	@ data/text/apprentice.inc:664 gText_ApprenticeMonThanks14
	.globl gText_ApprenticeMonThanks14
gText_ApprenticeMonThanks14: @ 0x08271925
	.string "よ よし!\n{STR_VAR_1}で がんばって みるよ\pうう はずかし がらずに\nがんばれる かな……?\pありがとう {PLAYER}{KUN}\nまた こんど あえたら…… よろしくね{EOS}"
	.if (. - gText_ApprenticeMonThanks14) > 0x4c
	.error "gText_ApprenticeMonThanks14 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeMonThanks14) < 0x4c
	.space 0x4c - (. - gText_ApprenticeMonThanks14)
	.endif

	@ data/text/apprentice.inc:667 gText_ApprenticeWhichMon15
	.globl gText_ApprenticeWhichMon15
gText_ApprenticeWhichMon15: @ 0x08271971
	.string "ん?\n{PLAYER}{KUN}の ように みえるが……\lほんもの なのかね?\pいや ほんもの なら いいんだ\nついでに でしの わたしに\lじょげんを おねがい したい!\pわたしが つかう ポケモンの ことだが\n{STR_VAR_1}と {STR_VAR_2}であれば\lどちらが わたしに ふさわしい かな?{EOS}"
	.if (. - gText_ApprenticeWhichMon15) > 0x80
	.error "gText_ApprenticeWhichMon15 may not grow beyond its original slot"
	.endif
	.if (. - gText_ApprenticeWhichMon15) < 0x80
	.space 0x80 - (. - gText_ApprenticeWhichMon15)
	.endif
