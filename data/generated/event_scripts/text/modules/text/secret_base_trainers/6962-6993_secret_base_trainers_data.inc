	@ field-script:0x244D96 FieldScriptText_244F02
	.globl gText_Rom_244F02
gText_Rom_244F02: @ 0x08244F02
	.string "ふかふかの　つちだ！{EOS}"
	.if (. - gText_Rom_244F02) > 0xb
	.error "gText_Rom_244F02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F02) < 0xb
	.space 0xb - (. - gText_Rom_244F02)
	.endif
	@ field-script:0x244DA0 FieldScriptText_244F0D
	.globl gText_Rom_244F0D
gText_Rom_244F0D: @ 0x08244F0D
	.string "ふかふかの　つちだ！\nきのみを　うめますか？{EOS}"
	.if (. - gText_Rom_244F0D) > 0x17
	.error "gText_Rom_244F0D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F0D) < 0x17
	.space 0x17 - (. - gText_Rom_244F0D)
	.endif
	@ field-script:0x244EFB FieldScriptText_244F24
	.globl gText_Rom_244F24
gText_Rom_244F24: @ 0x08244F24
	.string "{0xFD}{0x01}は　ふかふかの　つちに\n{0xFD}{0x02}のみを　うめた！{EOS}"
	.if (. - gText_Rom_244F24) > 0x19
	.error "gText_Rom_244F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F24) < 0x19
	.space 0x19 - (. - gText_Rom_244F24)
	.endif
	@ field-script:0x244DDD FieldScriptText_244F3D
	.globl gText_Rom_244F3D
gText_Rom_244F3D: @ 0x08244F3D
	.string "{0xFD}{0x02}のみを　うめた　ばしょだ！{EOS}"
	.if (. - gText_Rom_244F3D) > 0x10
	.error "gText_Rom_244F3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F3D) < 0x10
	.space 0x10 - (. - gText_Rom_244F3D)
	.endif
	@ field-script:0x244DEA FieldScriptText_244F4D
	.globl gText_Rom_244F4D
gText_Rom_244F4D: @ 0x08244F4D
	.string "{0xFD}{0x02}の　めが　でてきた！{EOS}"
	.if (. - gText_Rom_244F4D) > 0xd
	.error "gText_Rom_244F4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F4D) < 0xd
	.space 0xd - (. - gText_Rom_244F4D)
	.endif
	@ field-script:0x244DF7 FieldScriptText_244F5A
	.globl gText_Rom_244F5A
gText_Rom_244F5A: @ 0x08244F5A
	.string "{0xFD}{0x02}の　みきが　おおきく　なってきた！{EOS}"
	.if (. - gText_Rom_244F5A) > 0x14
	.error "gText_Rom_244F5A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F5A) < 0x14
	.space 0x14 - (. - gText_Rom_244F5A)
	.endif
	@ field-script:0x244E09 FieldScriptText_244F6E
	.globl gText_Rom_244F6E
gText_Rom_244F6E: @ 0x08244F6E
	.string "{0xFD}{0x02}の　はなが　{0xFD}{0x03}　さいてる！{EOS}"
	.if (. - gText_Rom_244F6E) > 0x11
	.error "gText_Rom_244F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F6E) < 0x11
	.space 0x11 - (. - gText_Rom_244F6E)
	.endif
	@ field-script:0x244E33 FieldScriptText_244F7F
	.globl gText_Rom_244F7F
gText_Rom_244F7F: @ 0x08244F7F
	.string "とてもうつくしく{EOS}"
	.if (. - gText_Rom_244F7F) > 0x9
	.error "gText_Rom_244F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F7F) < 0x9
	.space 0x9 - (. - gText_Rom_244F7F)
	.endif
	@ field-script:0x244E3A FieldScriptText_244F88
	.globl gText_Rom_244F88
gText_Rom_244F88: @ 0x08244F88
	.string "かわいく{EOS}"
	.if (. - gText_Rom_244F88) > 0x5
	.error "gText_Rom_244F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F88) < 0x5
	.space 0x5 - (. - gText_Rom_244F88)
	.endif
	@ field-script:0x244E2C FieldScriptText_244F8D
	.globl gText_Rom_244F8D
gText_Rom_244F8D: @ 0x08244F8D
	.string "きれいに{EOS}"
	.if (. - gText_Rom_244F8D) > 0x5
	.error "gText_Rom_244F8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F8D) < 0x5
	.space 0x5 - (. - gText_Rom_244F8D)
	.endif
	@ field-script:0x244E47 FieldScriptText_244F92
	.globl gText_Rom_244F92
gText_Rom_244F92: @ 0x08244F92
	.string "{0xFD}{0x02}のみが　{0xFD}{0x03}こ　できてる！\p{0xFD}{0x02}のみを　とりますか？{EOS}"
	.if (. - gText_Rom_244F92) > 0x1d
	.error "gText_Rom_244F92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F92) < 0x1d
	.space 0x1d - (. - gText_Rom_244F92)
	.endif
	@ field-script:0x244E78 FieldScriptText_244FAF
	.globl gText_Rom_244FAF
gText_Rom_244FAF: @ 0x08244FAF
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを　{0xFD}{0x03}こ　とった！{EOS}"
	.if (. - gText_Rom_244FAF) > 0x13
	.error "gText_Rom_244FAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FAF) < 0x13
	.space 0x13 - (. - gText_Rom_244FAF)
	.endif
	@ field-script:0x244E83 FieldScriptText_244FC2
	.globl gText_Rom_244FC2
gText_Rom_244FC2: @ 0x08244FC2
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nきのみポケットに　しまった！\pつちは　もとの　ふかふかに　もどった！{EOS}"
	.if (. - gText_Rom_244FC2) > 0x2d
	.error "gText_Rom_244FC2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FC2) < 0x2d
	.space 0x2d - (. - gText_Rom_244FC2)
	.endif
	@ field-script:0x244E8C FieldScriptText_244FEF
	.globl gText_Rom_244FEF
gText_Rom_244FEF: @ 0x08244FEF
	.string "バッグの　きのみポケットが　いっぱいだった\p{0xFD}{0x02}のみを　あきらめた{EOS}"
	.if (. - gText_Rom_244FEF) > 0x22
	.error "gText_Rom_244FEF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FEF) < 0x22
	.space 0x22 - (. - gText_Rom_244FEF)
	.endif
	@ field-script:0x244E95 FieldScriptText_245011
	.globl gText_Rom_245011
gText_Rom_245011: @ 0x08245011
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nそのままに　しておいた{EOS}"
	.if (. - gText_Rom_245011) > 0x16
	.error "gText_Rom_245011 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245011) < 0x16
	.space 0x16 - (. - gText_Rom_245011)
	.endif
	@ field-script:0x244EBA FieldScriptText_245027
	.globl gText_Rom_245027
gText_Rom_245027: @ 0x08245027
	.string "もっている　ホエルコじょうろ　で\n{0xFD}{0x02}に　みずを　あげますか？{EOS}"
	.if (. - gText_Rom_245027) > 0x20
	.error "gText_Rom_245027 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245027) < 0x20
	.space 0x20 - (. - gText_Rom_245027)
	.endif
	@ field-script:0x244EDD FieldScriptText_245047
	.globl gText_Rom_245047
gText_Rom_245047: @ 0x08245047
	.string "{0xFD}{0x01}は　{0xFD}{0x02}に　みずを　あげた！{EOS}"
	.if (. - gText_Rom_245047) > 0x11
	.error "gText_Rom_245047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245047) < 0x11
	.space 0x11 - (. - gText_Rom_245047)
	.endif
	@ field-script:0x244EEA FieldScriptText_245058
	.globl gText_Rom_245058
gText_Rom_245058: @ 0x08245058
	.string "とっても　よろこんでる　みたい！{EOS}"
	.if (. - gText_Rom_245058) > 0x11
	.error "gText_Rom_245058 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245058) < 0x11
	.space 0x11 - (. - gText_Rom_245058)
	.endif
	@ field-script:0x244D7B FieldScriptText_245069
	.globl gText_Rom_245069
gText_Rom_245069: @ 0x08245069
	.string "！{EOS}"
	.if (. - gText_Rom_245069) > 0x2
	.error "gText_Rom_245069 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245069) < 0x2
	.space 0x2 - (. - gText_Rom_245069)
	.endif
	@ field-script:0x245B9B FieldScriptText_24506B
	.globl gText_Rom_24506B
gText_Rom_24506B: @ 0x0824506B
	.string "ツルを　おとせば　うえに　のぼれそう{EOS}"
	.if (. - gText_Rom_24506B) > 0x13
	.error "gText_Rom_24506B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24506B) < 0x13
	.space 0x13 - (. - gText_Rom_24506B)
	.endif
	@ field-script:0x245B6A FieldScriptText_24507E
	.globl gText_Rom_24507E
gText_Rom_24507E: @ 0x0824507E
	.string "ツルを　おとせば　うえに　のぼれそう\pひみつのちからを　つかいますか？{EOS}"
	.if (. - gText_Rom_24507E) > 0x24
	.error "gText_Rom_24507E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24507E) < 0x24
	.space 0x24 - (. - gText_Rom_24507E)
	.endif
	@ field-script:0x245BA5 FieldScriptText_2450A2
	.globl gText_Rom_2450A2
gText_Rom_2450A2: @ 0x082450A2
	.string "ふといツルが　おちてきた！{EOS}"
	.if (. - gText_Rom_2450A2) > 0xe
	.error "gText_Rom_2450A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450A2) < 0xe
	.space 0xe - (. - gText_Rom_2450A2)
	.endif
	@ field-script:0x245BF4 FieldScriptText_2450B0
	.globl gText_Rom_2450B0
gText_Rom_2450B0: @ 0x082450B0
	.string "くさのかたまりを　どければ\nなかへ　はいれそう{EOS}"
	.if (. - gText_Rom_2450B0) > 0x18
	.error "gText_Rom_2450B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450B0) < 0x18
	.space 0x18 - (. - gText_Rom_2450B0)
	.endif
	@ field-script:0x245BC3 FieldScriptText_2450C8
	.globl gText_Rom_2450C8
gText_Rom_2450C8: @ 0x082450C8
	.string "くさのかたまりを　どければ\nなかへ　はいれそう\pひみつのちからを　つかいますか？{EOS}"
	.if (. - gText_Rom_2450C8) > 0x29
	.error "gText_Rom_2450C8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450C8) < 0x29
	.space 0x29 - (. - gText_Rom_2450C8)
	.endif
	@ field-script:0x245BFE FieldScriptText_2450F1
	.globl gText_Rom_2450F1
gText_Rom_2450F1: @ 0x082450F1
	.string "ちいさな　いりぐちを　はっけん！{EOS}"
	.if (. - gText_Rom_2450F1) > 0x11
	.error "gText_Rom_2450F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450F1) < 0x11
	.space 0x11 - (. - gText_Rom_2450F1)
	.endif
	@ data/text/secret_base_trainers.inc:1 SecretBase_Text_Trainer0Intro
	.globl gText_Rom_245102
gText_Rom_245102: @ 0x08245102
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pせっかく きたんだから\nポケモン しょうぶ しない?{EOS}"
	.if (. - gText_Rom_245102) > 0x55
	.error "gText_Rom_245102 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245102) < 0x55
	.space 0x55 - (. - gText_Rom_245102)
	.endif

	@ data/text/secret_base_trainers.inc:4 SecretBase_Text_Trainer0AcceptBattle
	.globl gText_Rom_245157
gText_Rom_245157: @ 0x08245157
	.string "それじゃ いくよ!{EOS}"
	.if (. - gText_Rom_245157) > 0xa
	.error "gText_Rom_245157 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245157) < 0xa
	.space 0xa - (. - gText_Rom_245157)
	.endif

	@ data/text/secret_base_trainers.inc:7 SecretBase_Text_Trainer0DeclineBattle
	.globl gText_Rom_245161
gText_Rom_245161: @ 0x08245161
	.string "えっ いまは むりなんだ…{EOS}"
	.if (. - gText_Rom_245161) > 0xe
	.error "gText_Rom_245161 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245161) < 0xe
	.space 0xe - (. - gText_Rom_245161)
	.endif

	@ data/text/secret_base_trainers.inc:10 SecretBase_Text_Trainer0Defeated
	.globl gText_Rom_24516F
gText_Rom_24516F: @ 0x0824516F
	.string "うわっ きみって つよいなー\nぼくが まけたこと ひみつに してね!{EOS}"
	.if (. - gText_Rom_24516F) > 0x23
	.error "gText_Rom_24516F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24516F) < 0x23
	.space 0x23 - (. - gText_Rom_24516F)
	.endif

	@ data/text/secret_base_trainers.inc:13 SecretBase_Text_Trainer0PostBattle
	.globl gText_Rom_245192
gText_Rom_245192: @ 0x08245192
	.string "ぼくの ひみつきち どうかなー\nまた あしたも あそびに きてね!{EOS}"
	.if (. - gText_Rom_245192) > 0x22
	.error "gText_Rom_245192 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245192) < 0x22
	.space 0x22 - (. - gText_Rom_245192)
	.endif

	@ data/text/secret_base_trainers.inc:16 SecretBase_Text_Trainer0PreChampion
	.globl gText_Rom_2451B4
gText_Rom_2451B4: @ 0x082451B4
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pゆっくり して いってね!{EOS}"
	.if (. - gText_Rom_2451B4) > 0x48
	.error "gText_Rom_2451B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2451B4) < 0x48
	.space 0x48 - (. - gText_Rom_2451B4)
	.endif

	@ data/text/secret_base_trainers.inc:19 SecretBase_Text_Trainer5Intro
	.globl gText_Rom_2451FC
gText_Rom_2451FC: @ 0x082451FC
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!\pあっ もし よかったら\nポケモン しょうぶ しない?{EOS}"
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
	.string "それじゃ いくわよ!{EOS}"
	.if (. - gText_Rom_245254) != 0xb
	.error "gText_Rom_245254 must retain its original byte length"
	.endif
	.globl gText_Rom_24525B
	.set gText_Rom_24525B, gText_Rom_245254 + 0x7

	@ data/text/secret_base_trainers.inc:25 SecretBase_Text_Trainer5DeclineBattle
	.globl gText_Rom_24525F
gText_Rom_24525F: @ 0x0824525F
	.string "そう いまは むりなのね…{EOS}"
	.if (. - gText_Rom_24525F) > 0xe
	.error "gText_Rom_24525F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24525F) < 0xe
	.space 0xe - (. - gText_Rom_24525F)
	.endif

	@ data/text/secret_base_trainers.inc:28 SecretBase_Text_Trainer5Defeated
	.globl gText_Rom_24526D
gText_Rom_24526D: @ 0x0824526D
	.string "うーん わたしの まけね…\nわたしが まけたのは ないしょの ひみつね!{EOS}"
	.if (. - gText_Rom_24526D) > 0x25
	.error "gText_Rom_24526D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24526D) < 0x25
	.space 0x25 - (. - gText_Rom_24526D)
	.endif

	@ data/text/secret_base_trainers.inc:31 SecretBase_Text_Trainer5PostBattle
	.globl gText_Rom_245292
gText_Rom_245292: @ 0x08245292
	.string "このちかくに くることが あったら\nまた あそびに よってね!{EOS}"
	.if (. - gText_Rom_245292) > 0x20
	.error "gText_Rom_245292 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245292) < 0x20
	.space 0x20 - (. - gText_Rom_245292)
	.endif

	@ data/text/secret_base_trainers.inc:34 SecretBase_Text_Trainer5PreChampion
	.globl gText_Rom_2452B2
gText_Rom_2452B2: @ 0x082452B2
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!{EOS}"
	.if (. - gText_Rom_2452B2) > 0x3d
	.error "gText_Rom_2452B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452B2) < 0x3d
	.space 0x3d - (. - gText_Rom_2452B2)
	.endif

	@ data/text/secret_base_trainers.inc:37 SecretBase_Text_Trainer1Intro
	.globl gText_Rom_2452EF
gText_Rom_2452EF: @ 0x082452EF
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだー\pあっ もしかして\nきみも ここを つかいたい?\pうーん ぼくに かてたら\nこのばしょ あげても いいよ!{EOS}"
	.if (. - gText_Rom_2452EF) > 0x56
	.error "gText_Rom_2452EF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2452EF) < 0x56
	.space 0x56 - (. - gText_Rom_2452EF)
	.endif

	@ data/text/secret_base_trainers.inc:40 SecretBase_Text_Trainer1AcceptBattle
	.globl gText_Rom_245345
gText_Rom_245345: @ 0x08245345
	.string "よしっ! ぼくの きちを まもるぞー!{EOS}"
	.if (. - gText_Rom_245345) > 0x14
	.error "gText_Rom_245345 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245345) < 0x14
	.space 0x14 - (. - gText_Rom_245345)
	.endif

	@ data/text/secret_base_trainers.inc:43 SecretBase_Text_Trainer1DeclineBattle
	.globl gText_Rom_245359
gText_Rom_245359: @ 0x08245359
	.string "えっ この ばしょに きょうみが ないの?\nそっかー{EOS}"
	.if (. - gText_Rom_245359) > 0x1b
	.error "gText_Rom_245359 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245359) < 0x1b
	.space 0x1b - (. - gText_Rom_245359)
	.endif

	@ data/text/secret_base_trainers.inc:46 SecretBase_Text_Trainer1Defeated
	.globl gText_Rom_245374
gText_Rom_245374: @ 0x08245374
	.string "もう ダメだ!\nこうさーん!{EOS}"
	.if (. - gText_Rom_245374) > 0xf
	.error "gText_Rom_245374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245374) < 0xf
	.space 0xf - (. - gText_Rom_245374)
	.endif
