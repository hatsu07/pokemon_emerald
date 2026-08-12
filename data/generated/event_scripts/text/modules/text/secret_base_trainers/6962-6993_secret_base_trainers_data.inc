	@ data/text/secret_base_trainers.inc:1 SecretBase_Text_Trainer0Intro
	.globl gText_Rom_245102
gText_Rom_245102: @ 0x08245102
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pせっかく きたんだから\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_245102) > 0x55
	.error "gText_Rom_245102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245102) < 0x55
	.space 0x55 - (. - gText_Rom_245102)
	.endif

	@ data/text/secret_base_trainers.inc:4 SecretBase_Text_Trainer0AcceptBattle
	.globl gText_Rom_245157
gText_Rom_245157: @ 0x08245157
	.string "それじゃ いくよ!$"
	.if (. - gText_Rom_245157) > 0xa
	.error "gText_Rom_245157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245157) < 0xa
	.space 0xa - (. - gText_Rom_245157)
	.endif

	@ data/text/secret_base_trainers.inc:7 SecretBase_Text_Trainer0DeclineBattle
	.globl gText_Rom_245161
gText_Rom_245161: @ 0x08245161
	.string "えっ いまは むりなんだ…$"
	.if (. - gText_Rom_245161) > 0xe
	.error "gText_Rom_245161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245161) < 0xe
	.space 0xe - (. - gText_Rom_245161)
	.endif

	@ data/text/secret_base_trainers.inc:10 SecretBase_Text_Trainer0Defeated
	.globl gText_Rom_24516F
gText_Rom_24516F: @ 0x0824516F
	.string "うわっ きみって つよいなー\nぼくが まけたこと ひみつに してね!$"
	.if (. - gText_Rom_24516F) > 0x23
	.error "gText_Rom_24516F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24516F) < 0x23
	.space 0x23 - (. - gText_Rom_24516F)
	.endif

	@ data/text/secret_base_trainers.inc:13 SecretBase_Text_Trainer0PostBattle
	.globl gText_Rom_245192
gText_Rom_245192: @ 0x08245192
	.string "ぼくの ひみつきち どうかなー\nまた あしたも あそびに きてね!$"
	.if (. - gText_Rom_245192) > 0x22
	.error "gText_Rom_245192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245192) < 0x22
	.space 0x22 - (. - gText_Rom_245192)
	.endif

	@ data/text/secret_base_trainers.inc:16 SecretBase_Text_Trainer0PreChampion
	.globl gText_Rom_2451B4
gText_Rom_2451B4: @ 0x082451B4
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pゆっくり して いってね!$"
	.if (. - gText_Rom_2451B4) > 0x48
	.error "gText_Rom_2451B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451B4) < 0x48
	.space 0x48 - (. - gText_Rom_2451B4)
	.endif

	@ data/text/secret_base_trainers.inc:19 SecretBase_Text_Trainer5Intro
	.globl gText_Rom_2451FC
gText_Rom_2451FC: @ 0x082451FC
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!\pあっ もし よかったら\nポケモン しょうぶ しない?$"
	.if (. - gText_Rom_2451FC) > 0x58
	.error "gText_Rom_2451FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451FC) < 0x58
	.space 0x58 - (. - gText_Rom_2451FC)
	.endif

	@ data/text/secret_base_trainers.inc:22 SecretBase_Text_Trainer5AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_245254
gText_Rom_245254: @ 0x08245254
	.string "それじゃ いくわよ!$"
	.if (. - gText_Rom_245254) != 0xb
	.error "gText_Rom_245254 must retain its original byte length"
	.endif
	.globl gText_Rom_24525B
	.set gText_Rom_24525B, gText_Rom_245254 + 0x7

	@ data/text/secret_base_trainers.inc:25 SecretBase_Text_Trainer5DeclineBattle
	.globl gText_Rom_24525F
gText_Rom_24525F: @ 0x0824525F
	.string "そう いまは むりなのね…$"
	.if (. - gText_Rom_24525F) > 0xe
	.error "gText_Rom_24525F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24525F) < 0xe
	.space 0xe - (. - gText_Rom_24525F)
	.endif

	@ data/text/secret_base_trainers.inc:28 SecretBase_Text_Trainer5Defeated
	.globl gText_Rom_24526D
gText_Rom_24526D: @ 0x0824526D
	.string "うーん わたしの まけね…\nわたしが まけたのは ないしょの ひみつね!$"
	.if (. - gText_Rom_24526D) > 0x25
	.error "gText_Rom_24526D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24526D) < 0x25
	.space 0x25 - (. - gText_Rom_24526D)
	.endif

	@ data/text/secret_base_trainers.inc:31 SecretBase_Text_Trainer5PostBattle
	.globl gText_Rom_245292
gText_Rom_245292: @ 0x08245292
	.string "このちかくに くることが あったら\nまた あそびに よってね!$"
	.if (. - gText_Rom_245292) > 0x20
	.error "gText_Rom_245292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245292) < 0x20
	.space 0x20 - (. - gText_Rom_245292)
	.endif

	@ data/text/secret_base_trainers.inc:34 SecretBase_Text_Trainer5PreChampion
	.globl gText_Rom_2452B2
gText_Rom_2452B2: @ 0x082452B2
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!$"
	.if (. - gText_Rom_2452B2) > 0x3d
	.error "gText_Rom_2452B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452B2) < 0x3d
	.space 0x3d - (. - gText_Rom_2452B2)
	.endif

	@ data/text/secret_base_trainers.inc:37 SecretBase_Text_Trainer1Intro
	.globl gText_Rom_2452EF
gText_Rom_2452EF: @ 0x082452EF
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだー\pあっ もしかして\nきみも ここを つかいたい?\pうーん ぼくに かてたら\nこのばしょ あげても いいよ!$"
	.if (. - gText_Rom_2452EF) > 0x56
	.error "gText_Rom_2452EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452EF) < 0x56
	.space 0x56 - (. - gText_Rom_2452EF)
	.endif

	@ data/text/secret_base_trainers.inc:40 SecretBase_Text_Trainer1AcceptBattle
	.globl gText_Rom_245345
gText_Rom_245345: @ 0x08245345
	.string "よしっ! ぼくの きちを まもるぞー!$"
	.if (. - gText_Rom_245345) > 0x14
	.error "gText_Rom_245345 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245345) < 0x14
	.space 0x14 - (. - gText_Rom_245345)
	.endif

	@ data/text/secret_base_trainers.inc:43 SecretBase_Text_Trainer1DeclineBattle
	.globl gText_Rom_245359
gText_Rom_245359: @ 0x08245359
	.string "えっ この ばしょに きょうみが ないの?\nそっかー$"
	.if (. - gText_Rom_245359) > 0x1b
	.error "gText_Rom_245359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245359) < 0x1b
	.space 0x1b - (. - gText_Rom_245359)
	.endif

	@ data/text/secret_base_trainers.inc:46 SecretBase_Text_Trainer1Defeated
	.globl gText_Rom_245374
gText_Rom_245374: @ 0x08245374
	.string "もう ダメだ!\nこうさーん!$"
	.if (. - gText_Rom_245374) > 0xf
	.error "gText_Rom_245374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245374) < 0xf
	.space 0xf - (. - gText_Rom_245374)
	.endif
