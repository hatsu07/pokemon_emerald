	@ field-script:0x244D96 FieldScriptText_244F02
	.globl FieldScriptText_244F02
FieldScriptText_244F02: @ 0x08244F02
	.string "ふかふかの　つちだ！{EOS}"
	.if (. - FieldScriptText_244F02) > 0xb
	.error "FieldScriptText_244F02 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F02) < 0xb
	.space 0xb - (. - FieldScriptText_244F02)
	.endif
	@ field-script:0x244DA0 FieldScriptText_244F0D
	.globl FieldScriptText_244F0D
FieldScriptText_244F0D: @ 0x08244F0D
	.string "ふかふかの　つちだ！\nきのみを　うめますか？{EOS}"
	.if (. - FieldScriptText_244F0D) > 0x17
	.error "FieldScriptText_244F0D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F0D) < 0x17
	.space 0x17 - (. - FieldScriptText_244F0D)
	.endif
	@ field-script:0x244EFB FieldScriptText_244F24
	.globl FieldScriptText_244F24
FieldScriptText_244F24: @ 0x08244F24
	.string "{0xFD}{0x01}は　ふかふかの　つちに\n{0xFD}{0x02}のみを　うめた！{EOS}"
	.if (. - FieldScriptText_244F24) > 0x19
	.error "FieldScriptText_244F24 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F24) < 0x19
	.space 0x19 - (. - FieldScriptText_244F24)
	.endif
	@ field-script:0x244DDD FieldScriptText_244F3D
	.globl FieldScriptText_244F3D
FieldScriptText_244F3D: @ 0x08244F3D
	.string "{0xFD}{0x02}のみを　うめた　ばしょだ！{EOS}"
	.if (. - FieldScriptText_244F3D) > 0x10
	.error "FieldScriptText_244F3D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F3D) < 0x10
	.space 0x10 - (. - FieldScriptText_244F3D)
	.endif
	@ field-script:0x244DEA FieldScriptText_244F4D
	.globl FieldScriptText_244F4D
FieldScriptText_244F4D: @ 0x08244F4D
	.string "{0xFD}{0x02}の　めが　でてきた！{EOS}"
	.if (. - FieldScriptText_244F4D) > 0xd
	.error "FieldScriptText_244F4D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F4D) < 0xd
	.space 0xd - (. - FieldScriptText_244F4D)
	.endif
	@ field-script:0x244DF7 FieldScriptText_244F5A
	.globl FieldScriptText_244F5A
FieldScriptText_244F5A: @ 0x08244F5A
	.string "{0xFD}{0x02}の　みきが　おおきく　なってきた！{EOS}"
	.if (. - FieldScriptText_244F5A) > 0x14
	.error "FieldScriptText_244F5A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F5A) < 0x14
	.space 0x14 - (. - FieldScriptText_244F5A)
	.endif
	@ field-script:0x244E09 FieldScriptText_244F6E
	.globl FieldScriptText_244F6E
FieldScriptText_244F6E: @ 0x08244F6E
	.string "{0xFD}{0x02}の　はなが　{0xFD}{0x03}　さいてる！{EOS}"
	.if (. - FieldScriptText_244F6E) > 0x11
	.error "FieldScriptText_244F6E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F6E) < 0x11
	.space 0x11 - (. - FieldScriptText_244F6E)
	.endif
	@ field-script:0x244E33 FieldScriptText_244F7F
	.globl FieldScriptText_244F7F
FieldScriptText_244F7F: @ 0x08244F7F
	.string "とてもうつくしく{EOS}"
	.if (. - FieldScriptText_244F7F) > 0x9
	.error "FieldScriptText_244F7F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F7F) < 0x9
	.space 0x9 - (. - FieldScriptText_244F7F)
	.endif
	@ field-script:0x244E3A FieldScriptText_244F88
	.globl FieldScriptText_244F88
FieldScriptText_244F88: @ 0x08244F88
	.string "かわいく{EOS}"
	.if (. - FieldScriptText_244F88) > 0x5
	.error "FieldScriptText_244F88 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F88) < 0x5
	.space 0x5 - (. - FieldScriptText_244F88)
	.endif
	@ field-script:0x244E2C FieldScriptText_244F8D
	.globl FieldScriptText_244F8D
FieldScriptText_244F8D: @ 0x08244F8D
	.string "きれいに{EOS}"
	.if (. - FieldScriptText_244F8D) > 0x5
	.error "FieldScriptText_244F8D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F8D) < 0x5
	.space 0x5 - (. - FieldScriptText_244F8D)
	.endif
	@ field-script:0x244E47 FieldScriptText_244F92
	.globl FieldScriptText_244F92
FieldScriptText_244F92: @ 0x08244F92
	.string "{0xFD}{0x02}のみが　{0xFD}{0x03}こ　できてる！\p{0xFD}{0x02}のみを　とりますか？{EOS}"
	.if (. - FieldScriptText_244F92) > 0x1d
	.error "FieldScriptText_244F92 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244F92) < 0x1d
	.space 0x1d - (. - FieldScriptText_244F92)
	.endif
	@ field-script:0x244E78 FieldScriptText_244FAF
	.globl FieldScriptText_244FAF
FieldScriptText_244FAF: @ 0x08244FAF
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを　{0xFD}{0x03}こ　とった！{EOS}"
	.if (. - FieldScriptText_244FAF) > 0x13
	.error "FieldScriptText_244FAF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244FAF) < 0x13
	.space 0x13 - (. - FieldScriptText_244FAF)
	.endif
	@ field-script:0x244E83 FieldScriptText_244FC2
	.globl FieldScriptText_244FC2
FieldScriptText_244FC2: @ 0x08244FC2
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nきのみポケットに　しまった！\pつちは　もとの　ふかふかに　もどった！{EOS}"
	.if (. - FieldScriptText_244FC2) > 0x2d
	.error "FieldScriptText_244FC2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244FC2) < 0x2d
	.space 0x2d - (. - FieldScriptText_244FC2)
	.endif
	@ field-script:0x244E8C FieldScriptText_244FEF
	.globl FieldScriptText_244FEF
FieldScriptText_244FEF: @ 0x08244FEF
	.string "バッグの　きのみポケットが　いっぱいだった\p{0xFD}{0x02}のみを　あきらめた{EOS}"
	.if (. - FieldScriptText_244FEF) > 0x22
	.error "FieldScriptText_244FEF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_244FEF) < 0x22
	.space 0x22 - (. - FieldScriptText_244FEF)
	.endif
	@ field-script:0x244E95 FieldScriptText_245011
	.globl FieldScriptText_245011
FieldScriptText_245011: @ 0x08245011
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを\nそのままに　しておいた{EOS}"
	.if (. - FieldScriptText_245011) > 0x16
	.error "FieldScriptText_245011 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_245011) < 0x16
	.space 0x16 - (. - FieldScriptText_245011)
	.endif
	@ field-script:0x244EBA FieldScriptText_245027
	.globl FieldScriptText_245027
FieldScriptText_245027: @ 0x08245027
	.string "もっている　ホエルコじょうろ　で\n{0xFD}{0x02}に　みずを　あげますか？{EOS}"
	.if (. - FieldScriptText_245027) > 0x20
	.error "FieldScriptText_245027 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_245027) < 0x20
	.space 0x20 - (. - FieldScriptText_245027)
	.endif
	@ field-script:0x244EDD FieldScriptText_245047
	.globl FieldScriptText_245047
FieldScriptText_245047: @ 0x08245047
	.string "{0xFD}{0x01}は　{0xFD}{0x02}に　みずを　あげた！{EOS}"
	.if (. - FieldScriptText_245047) > 0x11
	.error "FieldScriptText_245047 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_245047) < 0x11
	.space 0x11 - (. - FieldScriptText_245047)
	.endif
	@ field-script:0x244EEA FieldScriptText_245058
	.globl FieldScriptText_245058
FieldScriptText_245058: @ 0x08245058
	.string "とっても　よろこんでる　みたい！{EOS}"
	.if (. - FieldScriptText_245058) > 0x11
	.error "FieldScriptText_245058 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_245058) < 0x11
	.space 0x11 - (. - FieldScriptText_245058)
	.endif
	@ field-script:0x244D7B FieldScriptText_245069
	.globl FieldScriptText_245069
FieldScriptText_245069: @ 0x08245069
	.string "！{EOS}"
	.if (. - FieldScriptText_245069) > 0x2
	.error "FieldScriptText_245069 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_245069) < 0x2
	.space 0x2 - (. - FieldScriptText_245069)
	.endif
	@ field-script:0x245B9B FieldScriptText_24506B
	.globl FieldScriptText_24506B
FieldScriptText_24506B: @ 0x0824506B
	.string "ツルを　おとせば　うえに　のぼれそう{EOS}"
	.if (. - FieldScriptText_24506B) > 0x13
	.error "FieldScriptText_24506B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24506B) < 0x13
	.space 0x13 - (. - FieldScriptText_24506B)
	.endif
	@ field-script:0x245B6A FieldScriptText_24507E
	.globl FieldScriptText_24507E
FieldScriptText_24507E: @ 0x0824507E
	.string "ツルを　おとせば　うえに　のぼれそう\pひみつのちからを　つかいますか？{EOS}"
	.if (. - FieldScriptText_24507E) > 0x24
	.error "FieldScriptText_24507E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_24507E) < 0x24
	.space 0x24 - (. - FieldScriptText_24507E)
	.endif
	@ field-script:0x245BA5 FieldScriptText_2450A2
	.globl FieldScriptText_2450A2
FieldScriptText_2450A2: @ 0x082450A2
	.string "ふといツルが　おちてきた！{EOS}"
	.if (. - FieldScriptText_2450A2) > 0xe
	.error "FieldScriptText_2450A2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2450A2) < 0xe
	.space 0xe - (. - FieldScriptText_2450A2)
	.endif
	@ field-script:0x245BF4 FieldScriptText_2450B0
	.globl FieldScriptText_2450B0
FieldScriptText_2450B0: @ 0x082450B0
	.string "くさのかたまりを　どければ\nなかへ　はいれそう{EOS}"
	.if (. - FieldScriptText_2450B0) > 0x18
	.error "FieldScriptText_2450B0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2450B0) < 0x18
	.space 0x18 - (. - FieldScriptText_2450B0)
	.endif
	@ field-script:0x245BC3 FieldScriptText_2450C8
	.globl FieldScriptText_2450C8
FieldScriptText_2450C8: @ 0x082450C8
	.string "くさのかたまりを　どければ\nなかへ　はいれそう\pひみつのちからを　つかいますか？{EOS}"
	.if (. - FieldScriptText_2450C8) > 0x29
	.error "FieldScriptText_2450C8 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2450C8) < 0x29
	.space 0x29 - (. - FieldScriptText_2450C8)
	.endif
	@ field-script:0x245BFE FieldScriptText_2450F1
	.globl FieldScriptText_2450F1
FieldScriptText_2450F1: @ 0x082450F1
	.string "ちいさな　いりぐちを　はっけん！{EOS}"
	.if (. - FieldScriptText_2450F1) > 0x11
	.error "FieldScriptText_2450F1 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2450F1) < 0x11
	.space 0x11 - (. - FieldScriptText_2450F1)
	.endif
	@ data/text/secret_base_trainers.inc:1 SecretBase_Text_Trainer0Intro
	.globl SecretBase_Text_Trainer0Intro
SecretBase_Text_Trainer0Intro: @ 0x08245102
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pせっかく きたんだから\nポケモン しょうぶ しない?{EOS}"
	.if (. - SecretBase_Text_Trainer0Intro) > 0x55
	.error "SecretBase_Text_Trainer0Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0Intro) < 0x55
	.space 0x55 - (. - SecretBase_Text_Trainer0Intro)
	.endif

	@ data/text/secret_base_trainers.inc:4 SecretBase_Text_Trainer0AcceptBattle
	.globl SecretBase_Text_Trainer0AcceptBattle
SecretBase_Text_Trainer0AcceptBattle: @ 0x08245157
	.string "それじゃ いくよ!{EOS}"
	.if (. - SecretBase_Text_Trainer0AcceptBattle) > 0xa
	.error "SecretBase_Text_Trainer0AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0AcceptBattle) < 0xa
	.space 0xa - (. - SecretBase_Text_Trainer0AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:7 SecretBase_Text_Trainer0DeclineBattle
	.globl SecretBase_Text_Trainer0DeclineBattle
SecretBase_Text_Trainer0DeclineBattle: @ 0x08245161
	.string "えっ いまは むりなんだ…{EOS}"
	.if (. - SecretBase_Text_Trainer0DeclineBattle) > 0xe
	.error "SecretBase_Text_Trainer0DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0DeclineBattle) < 0xe
	.space 0xe - (. - SecretBase_Text_Trainer0DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:10 SecretBase_Text_Trainer0Defeated
	.globl SecretBase_Text_Trainer0Defeated
SecretBase_Text_Trainer0Defeated: @ 0x0824516F
	.string "うわっ きみって つよいなー\nぼくが まけたこと ひみつに してね!{EOS}"
	.if (. - SecretBase_Text_Trainer0Defeated) > 0x23
	.error "SecretBase_Text_Trainer0Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0Defeated) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer0Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:13 SecretBase_Text_Trainer0PostBattle
	.globl SecretBase_Text_Trainer0PostBattle
SecretBase_Text_Trainer0PostBattle: @ 0x08245192
	.string "ぼくの ひみつきち どうかなー\nまた あしたも あそびに きてね!{EOS}"
	.if (. - SecretBase_Text_Trainer0PostBattle) > 0x22
	.error "SecretBase_Text_Trainer0PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0PostBattle) < 0x22
	.space 0x22 - (. - SecretBase_Text_Trainer0PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:16 SecretBase_Text_Trainer0PreChampion
	.globl SecretBase_Text_Trainer0PreChampion
SecretBase_Text_Trainer0PreChampion: @ 0x082451B4
	.string "きみは もう ひみつきちを つくったかい?\pぼくは あっち こっち まわって\nやっと この ばしょに きめたんだ!\pゆっくり して いってね!{EOS}"
	.if (. - SecretBase_Text_Trainer0PreChampion) > 0x48
	.error "SecretBase_Text_Trainer0PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer0PreChampion) < 0x48
	.space 0x48 - (. - SecretBase_Text_Trainer0PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:19 SecretBase_Text_Trainer5Intro
	.globl SecretBase_Text_Trainer5Intro
SecretBase_Text_Trainer5Intro: @ 0x082451FC
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!\pあっ もし よかったら\nポケモン しょうぶ しない?{EOS}"
	.if (. - SecretBase_Text_Trainer5Intro) > 0x58
	.error "SecretBase_Text_Trainer5Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer5Intro) < 0x58
	.space 0x58 - (. - SecretBase_Text_Trainer5Intro)
	.endif

	@ data/text/secret_base_trainers.inc:22 SecretBase_Text_Trainer5AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer5AcceptBattle
SecretBase_Text_Trainer5AcceptBattle: @ 0x08245254
	.string "それじゃ いくわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer5AcceptBattle) != 0xb
	.error "SecretBase_Text_Trainer5AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:25 SecretBase_Text_Trainer5DeclineBattle
	.globl SecretBase_Text_Trainer5DeclineBattle
SecretBase_Text_Trainer5DeclineBattle: @ 0x0824525F
	.string "そう いまは むりなのね…{EOS}"
	.if (. - SecretBase_Text_Trainer5DeclineBattle) > 0xe
	.error "SecretBase_Text_Trainer5DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer5DeclineBattle) < 0xe
	.space 0xe - (. - SecretBase_Text_Trainer5DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:28 SecretBase_Text_Trainer5Defeated
	.globl SecretBase_Text_Trainer5Defeated
SecretBase_Text_Trainer5Defeated: @ 0x0824526D
	.string "うーん わたしの まけね…\nわたしが まけたのは ないしょの ひみつね!{EOS}"
	.if (. - SecretBase_Text_Trainer5Defeated) > 0x25
	.error "SecretBase_Text_Trainer5Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer5Defeated) < 0x25
	.space 0x25 - (. - SecretBase_Text_Trainer5Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:31 SecretBase_Text_Trainer5PostBattle
	.globl SecretBase_Text_Trainer5PostBattle
SecretBase_Text_Trainer5PostBattle: @ 0x08245292
	.string "このちかくに くることが あったら\nまた あそびに よってね!{EOS}"
	.if (. - SecretBase_Text_Trainer5PostBattle) > 0x20
	.error "SecretBase_Text_Trainer5PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer5PostBattle) < 0x20
	.space 0x20 - (. - SecretBase_Text_Trainer5PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:34 SecretBase_Text_Trainer5PreChampion
	.globl SecretBase_Text_Trainer5PreChampion
SecretBase_Text_Trainer5PreChampion: @ 0x082452B2
	.string "ひみつきちを つくれる ばしょは\nほかにも たくさん あるけど\lここが いちばん きにいったの!\pねっ! すてきでしょ!{EOS}"
	.if (. - SecretBase_Text_Trainer5PreChampion) > 0x3d
	.error "SecretBase_Text_Trainer5PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer5PreChampion) < 0x3d
	.space 0x3d - (. - SecretBase_Text_Trainer5PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:37 SecretBase_Text_Trainer1Intro
	.globl SecretBase_Text_Trainer1Intro
SecretBase_Text_Trainer1Intro: @ 0x082452EF
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだー\pあっ もしかして\nきみも ここを つかいたい?\pうーん ぼくに かてたら\nこのばしょ あげても いいよ!{EOS}"
	.if (. - SecretBase_Text_Trainer1Intro) > 0x56
	.error "SecretBase_Text_Trainer1Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1Intro) < 0x56
	.space 0x56 - (. - SecretBase_Text_Trainer1Intro)
	.endif

	@ data/text/secret_base_trainers.inc:40 SecretBase_Text_Trainer1AcceptBattle
	.globl SecretBase_Text_Trainer1AcceptBattle
SecretBase_Text_Trainer1AcceptBattle: @ 0x08245345
	.string "よしっ! ぼくの きちを まもるぞー!{EOS}"
	.if (. - SecretBase_Text_Trainer1AcceptBattle) > 0x14
	.error "SecretBase_Text_Trainer1AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1AcceptBattle) < 0x14
	.space 0x14 - (. - SecretBase_Text_Trainer1AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:43 SecretBase_Text_Trainer1DeclineBattle
	.globl SecretBase_Text_Trainer1DeclineBattle
SecretBase_Text_Trainer1DeclineBattle: @ 0x08245359
	.string "えっ この ばしょに きょうみが ないの?\nそっかー{EOS}"
	.if (. - SecretBase_Text_Trainer1DeclineBattle) > 0x1b
	.error "SecretBase_Text_Trainer1DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1DeclineBattle) < 0x1b
	.space 0x1b - (. - SecretBase_Text_Trainer1DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:46 SecretBase_Text_Trainer1Defeated
	.globl SecretBase_Text_Trainer1Defeated
SecretBase_Text_Trainer1Defeated: @ 0x08245374
	.string "もう ダメだ!\nこうさーん!{EOS}"
	.if (. - SecretBase_Text_Trainer1Defeated) > 0xf
	.error "SecretBase_Text_Trainer1Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1Defeated) < 0xf
	.space 0xf - (. - SecretBase_Text_Trainer1Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:49 SecretBase_Text_Trainer1PostBattle
	.globl SecretBase_Text_Trainer1PostBattle
SecretBase_Text_Trainer1PostBattle: @ 0x08245383
	.string "よしっ ぼくが いつか ひっこしたら\nこの ばしょは きみの ものさ!{EOS}"
	.if (. - SecretBase_Text_Trainer1PostBattle) > 0x24
	.error "SecretBase_Text_Trainer1PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1PostBattle) < 0x24
	.space 0x24 - (. - SecretBase_Text_Trainer1PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:52 SecretBase_Text_Trainer1PreChampion
	.globl SecretBase_Text_Trainer1PreChampion
SecretBase_Text_Trainer1PreChampion: @ 0x082453A7
	.string "この ばしょは にんきが あるから\nいつも うまって いるんだよー\pぼくは ずっと まっていて\nやっと つかえる ように なったんだ!{EOS}"
	.if (. - SecretBase_Text_Trainer1PreChampion) > 0x44
	.error "SecretBase_Text_Trainer1PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer1PreChampion) < 0x44
	.space 0x44 - (. - SecretBase_Text_Trainer1PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:55 SecretBase_Text_Trainer6Intro
	.globl SecretBase_Text_Trainer6Intro
SecretBase_Text_Trainer6Intro: @ 0x082453EB
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ\pどう わたしの じつりょく みてみる?{EOS}"
	.if (. - SecretBase_Text_Trainer6Intro) > 0x51
	.error "SecretBase_Text_Trainer6Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6Intro) < 0x51
	.space 0x51 - (. - SecretBase_Text_Trainer6Intro)
	.endif

	@ data/text/secret_base_trainers.inc:58 SecretBase_Text_Trainer6AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer6AcceptBattle
SecretBase_Text_Trainer6AcceptBattle: @ 0x0824543C
	.string "ほんきで いくわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer6AcceptBattle) != 0xb
	.error "SecretBase_Text_Trainer6AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:61 SecretBase_Text_Trainer6DeclineBattle
	.globl SecretBase_Text_Trainer6DeclineBattle
SecretBase_Text_Trainer6DeclineBattle: @ 0x08245447
	.string "それじゃ また こんどね!{EOS}"
	.if (. - SecretBase_Text_Trainer6DeclineBattle) > 0xe
	.error "SecretBase_Text_Trainer6DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6DeclineBattle) < 0xe
	.space 0xe - (. - SecretBase_Text_Trainer6DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:64 SecretBase_Text_Trainer6Defeated
	.globl SecretBase_Text_Trainer6Defeated
SecretBase_Text_Trainer6Defeated: @ 0x08245455
	.string "うーん わたしも まだまだねー\nもっと  べんきょう しないと!{EOS}"
	.if (. - SecretBase_Text_Trainer6Defeated) > 0x21
	.error "SecretBase_Text_Trainer6Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6Defeated) < 0x21
	.space 0x21 - (. - SecretBase_Text_Trainer6Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:67 SecretBase_Text_Trainer6PostBattle
	.globl SecretBase_Text_Trainer6PostBattle
SecretBase_Text_Trainer6PostBattle: @ 0x08245476
	.string "しょうぶ してくれて どうも ありがとう!\nまた あしたも きてねー{EOS}"
	.if (. - SecretBase_Text_Trainer6PostBattle) > 0x23
	.error "SecretBase_Text_Trainer6PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer6PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:70 SecretBase_Text_Trainer6PreChampion
	.globl SecretBase_Text_Trainer6PreChampion
SecretBase_Text_Trainer6PreChampion: @ 0x08245499
	.string "わたしの ポケモン けんきゅうじょへ\nようこそ!\pここで ポケモン しょうぶに ついて\nこっそり べんきょう してるのよ{EOS}"
	.if (. - SecretBase_Text_Trainer6PreChampion) > 0x3d
	.error "SecretBase_Text_Trainer6PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer6PreChampion) < 0x3d
	.space 0x3d - (. - SecretBase_Text_Trainer6PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:73 SecretBase_Text_Trainer2Intro
	.globl SecretBase_Text_Trainer2Intro
SecretBase_Text_Trainer2Intro: @ 0x082454D6
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!\pどう ポケモン しょうぶでも するかい?{EOS}"
	.if (. - SecretBase_Text_Trainer2Intro) > 0x56
	.error "SecretBase_Text_Trainer2Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2Intro) < 0x56
	.space 0x56 - (. - SecretBase_Text_Trainer2Intro)
	.endif

	@ data/text/secret_base_trainers.inc:76 SecretBase_Text_Trainer2AcceptBattle
	.globl SecretBase_Text_Trainer2AcceptBattle
SecretBase_Text_Trainer2AcceptBattle: @ 0x0824552C
	.string "そう こなくっちゃ!{EOS}"
	.if (. - SecretBase_Text_Trainer2AcceptBattle) > 0xb
	.error "SecretBase_Text_Trainer2AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2AcceptBattle) < 0xb
	.space 0xb - (. - SecretBase_Text_Trainer2AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:79 SecretBase_Text_Trainer2DeclineBattle
	.globl SecretBase_Text_Trainer2DeclineBattle
SecretBase_Text_Trainer2DeclineBattle: @ 0x08245537
	.string "よういが できたら\nいつでも こえを かけてね!{EOS}"
	.if (. - SecretBase_Text_Trainer2DeclineBattle) > 0x19
	.error "SecretBase_Text_Trainer2DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2DeclineBattle) < 0x19
	.space 0x19 - (. - SecretBase_Text_Trainer2DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:82 SecretBase_Text_Trainer2Defeated
	.globl SecretBase_Text_Trainer2Defeated
SecretBase_Text_Trainer2Defeated: @ 0x08245550
	.string "やられたー!\nだけど ポケモン しょうぶは たのしいー!{EOS}"
	.if (. - SecretBase_Text_Trainer2Defeated) > 0x1d
	.error "SecretBase_Text_Trainer2Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2Defeated) < 0x1d
	.space 0x1d - (. - SecretBase_Text_Trainer2Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:85 SecretBase_Text_Trainer2PostBattle
	.globl SecretBase_Text_Trainer2PostBattle
SecretBase_Text_Trainer2PostBattle: @ 0x0824556D
	.string "さてと グッズでも かいに いこうかな\pぼくの ひみつきちを\nみんなに たのしんで ほしい からね!{EOS}"
	.if (. - SecretBase_Text_Trainer2PostBattle) > 0x33
	.error "SecretBase_Text_Trainer2PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2PostBattle) < 0x33
	.space 0x33 - (. - SecretBase_Text_Trainer2PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:88 SecretBase_Text_Trainer2PreChampion
	.globl SecretBase_Text_Trainer2PreChampion
SecretBase_Text_Trainer2PreChampion: @ 0x082455A0
	.string "おおきな いえも いいけど\nぼくは こういう ばしょが すきなんだ\pだって いろいろな ひとが\nあそびに きてくれる からねー!{EOS}"
	.if (. - SecretBase_Text_Trainer2PreChampion) > 0x41
	.error "SecretBase_Text_Trainer2PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer2PreChampion) < 0x41
	.space 0x41 - (. - SecretBase_Text_Trainer2PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:91 SecretBase_Text_Trainer7Intro
	.globl SecretBase_Text_Trainer7Intro
SecretBase_Text_Trainer7Intro: @ 0x082455E1
	.string "わたし グッズの おかいものが\nだいすき です!\pそれと おなじくらい ポケモンを そだてるの\nだいすき です!\pもし よかったら わたしの ポケモンちゃんと\nしょうぶして くれますか?{EOS}"
	.if (. - SecretBase_Text_Trainer7Intro) > 0x5e
	.error "SecretBase_Text_Trainer7Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7Intro) < 0x5e
	.space 0x5e - (. - SecretBase_Text_Trainer7Intro)
	.endif
	@ data/text/secret_base_trainers.inc:94 SecretBase_Text_Trainer7AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer7AcceptBattle
SecretBase_Text_Trainer7AcceptBattle: @ 0x0824563F
	.string "それでは おねがいします{EOS}"
	.if (. - SecretBase_Text_Trainer7AcceptBattle) != 0xd
	.error "SecretBase_Text_Trainer7AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:97 SecretBase_Text_Trainer7DeclineBattle
	.globl SecretBase_Text_Trainer7DeclineBattle
SecretBase_Text_Trainer7DeclineBattle: @ 0x0824564C
	.string "そう それは ざんねん です…{EOS}"
	.if (. - SecretBase_Text_Trainer7DeclineBattle) > 0x10
	.error "SecretBase_Text_Trainer7DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7DeclineBattle) < 0x10
	.space 0x10 - (. - SecretBase_Text_Trainer7DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:100 SecretBase_Text_Trainer7Defeated
	.globl SecretBase_Text_Trainer7Defeated
SecretBase_Text_Trainer7Defeated: @ 0x0824565C
	.string "まいりました……{EOS}"
	.if (. - SecretBase_Text_Trainer7Defeated) > 0x9
	.error "SecretBase_Text_Trainer7Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7Defeated) < 0x9
	.space 0x9 - (. - SecretBase_Text_Trainer7Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:103 SecretBase_Text_Trainer7PostBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer7PostBattle
SecretBase_Text_Trainer7PostBattle: @ 0x08245665
	.string "ああ たのしかった!\nつぎは おかいものを たのしもう かしら{EOS}"
	.if (. - SecretBase_Text_Trainer7PostBattle) != 0x20
	.error "SecretBase_Text_Trainer7PostBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:106 SecretBase_Text_Trainer7PreChampion
	.globl SecretBase_Text_Trainer7PreChampion
SecretBase_Text_Trainer7PreChampion: @ 0x08245685
	.string "わたし グッズの おかいものが\nだいすき です\pそれと おなじくらい ポケモンを そだてるの\nだいすき です{EOS}"
	.if (. - SecretBase_Text_Trainer7PreChampion) > 0x37
	.error "SecretBase_Text_Trainer7PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer7PreChampion) < 0x37
	.space 0x37 - (. - SecretBase_Text_Trainer7PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:109 SecretBase_Text_Trainer3Intro
	.globl SecretBase_Text_Trainer3Intro
SecretBase_Text_Trainer3Intro: @ 0x082456BC
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ……\pうん せっかく みつけて くれたんだから\nポケモン しょうぶ しようか?{EOS}"
	.if (. - SecretBase_Text_Trainer3Intro) > 0x5c
	.error "SecretBase_Text_Trainer3Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3Intro) < 0x5c
	.space 0x5c - (. - SecretBase_Text_Trainer3Intro)
	.endif

	@ data/text/secret_base_trainers.inc:112 SecretBase_Text_Trainer3AcceptBattle
	.globl SecretBase_Text_Trainer3AcceptBattle
SecretBase_Text_Trainer3AcceptBattle: @ 0x08245718
	.string "かんたんには おわらせ ないよ!{EOS}"
	.if (. - SecretBase_Text_Trainer3AcceptBattle) > 0x11
	.error "SecretBase_Text_Trainer3AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3AcceptBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer3AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:115 SecretBase_Text_Trainer3DeclineBattle
	.globl SecretBase_Text_Trainer3DeclineBattle
SecretBase_Text_Trainer3DeclineBattle: @ 0x08245729
	.string "もしかして さがすのに つかれちゃった?{EOS}"
	.if (. - SecretBase_Text_Trainer3DeclineBattle) > 0x15
	.error "SecretBase_Text_Trainer3DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3DeclineBattle) < 0x15
	.space 0x15 - (. - SecretBase_Text_Trainer3DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:118 SecretBase_Text_Trainer3Defeated
	.globl SecretBase_Text_Trainer3Defeated
SecretBase_Text_Trainer3Defeated: @ 0x0824573E
	.string "おわっちゃった……{EOS}"
	.if (. - SecretBase_Text_Trainer3Defeated) > 0xa
	.error "SecretBase_Text_Trainer3Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3Defeated) < 0xa
	.space 0xa - (. - SecretBase_Text_Trainer3Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:121 SecretBase_Text_Trainer3PostBattle
	.globl SecretBase_Text_Trainer3PostBattle
SecretBase_Text_Trainer3PostBattle: @ 0x08245748
	.string "きみの ひみつきちは どこなんだい!\nこんど あそびに いこうかなー{EOS}"
	.if (. - SecretBase_Text_Trainer3PostBattle) > 0x23
	.error "SecretBase_Text_Trainer3PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer3PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:124 SecretBase_Text_Trainer3PreChampion
	.globl SecretBase_Text_Trainer3PreChampion
SecretBase_Text_Trainer3PreChampion: @ 0x0824576B
	.string "みつかり にくい ばしょに\nひみつきちを つくる ひとが いるけど\lこっそりと かくれて いたいのかなぁ{EOS}"
	.if (. - SecretBase_Text_Trainer3PreChampion) > 0x35
	.error "SecretBase_Text_Trainer3PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer3PreChampion) < 0x35
	.space 0x35 - (. - SecretBase_Text_Trainer3PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:127 SecretBase_Text_Trainer8Intro
	.globl SecretBase_Text_Trainer8Intro
SecretBase_Text_Trainer8Intro: @ 0x082457A0
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!\pついでに ポケモン しょうぶも しない?{EOS}"
	.if (. - SecretBase_Text_Trainer8Intro) > 0x53
	.error "SecretBase_Text_Trainer8Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8Intro) < 0x53
	.space 0x53 - (. - SecretBase_Text_Trainer8Intro)
	.endif

	@ data/text/secret_base_trainers.inc:130 SecretBase_Text_Trainer8AcceptBattle
	.globl SecretBase_Text_Trainer8AcceptBattle
SecretBase_Text_Trainer8AcceptBattle: @ 0x082457F3
	.string "じぶんの ひみつきちで まけられないわ!{EOS}"
	.if (. - SecretBase_Text_Trainer8AcceptBattle) > 0x15
	.error "SecretBase_Text_Trainer8AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8AcceptBattle) < 0x15
	.space 0x15 - (. - SecretBase_Text_Trainer8AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:133 SecretBase_Text_Trainer8DeclineBattle
	.globl SecretBase_Text_Trainer8DeclineBattle
SecretBase_Text_Trainer8DeclineBattle: @ 0x08245808
	.string "いつでも しょうぶ まってるわ!{EOS}"
	.if (. - SecretBase_Text_Trainer8DeclineBattle) > 0x11
	.error "SecretBase_Text_Trainer8DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8DeclineBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer8DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:136 SecretBase_Text_Trainer8Defeated
	.globl SecretBase_Text_Trainer8Defeated
SecretBase_Text_Trainer8Defeated: @ 0x08245819
	.string "えっ もしかして わたしの まけ?{EOS}"
	.if (. - SecretBase_Text_Trainer8Defeated) > 0x12
	.error "SecretBase_Text_Trainer8Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8Defeated) < 0x12
	.space 0x12 - (. - SecretBase_Text_Trainer8Defeated)
	.endif
	@ data/text/secret_base_trainers.inc:139 SecretBase_Text_Trainer8PostBattle
	.globl SecretBase_Text_Trainer8PostBattle
SecretBase_Text_Trainer8PostBattle: @ 0x0824582B
	.string "グッズあつめ まけないわよ!\nまた あそびに きてね!{EOS}"
	.if (. - SecretBase_Text_Trainer8PostBattle) > 0x1c
	.error "SecretBase_Text_Trainer8PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8PostBattle) < 0x1c
	.space 0x1c - (. - SecretBase_Text_Trainer8PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:142 SecretBase_Text_Trainer8PreChampion
	.globl SecretBase_Text_Trainer8PreChampion
SecretBase_Text_Trainer8PreChampion: @ 0x08245847
	.string "グッズを てにいれる ほうほうは\nいろいろ あるって はなしよ\pどっちが すてきな グッズを\nてにいれるか きょうそうね!{EOS}"
	.if (. - SecretBase_Text_Trainer8PreChampion) > 0x3e
	.error "SecretBase_Text_Trainer8PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer8PreChampion) < 0x3e
	.space 0x3e - (. - SecretBase_Text_Trainer8PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:145 SecretBase_Text_Trainer4Intro
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer4Intro
SecretBase_Text_Trainer4Intro: @ 0x08245885
	.string "すきな ばしょを さがして\nすきな グッズを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pそんな ぼくと しょうぶ しよう!{EOS}"
	.if (. - SecretBase_Text_Trainer4Intro) != 0x4c
	.error "SecretBase_Text_Trainer4Intro must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:148 SecretBase_Text_Trainer4AcceptBattle
	.globl SecretBase_Text_Trainer4AcceptBattle
SecretBase_Text_Trainer4AcceptBattle: @ 0x082458D1
	.string "きみの じつりょくを みせてくれ!{EOS}"
	.if (. - SecretBase_Text_Trainer4AcceptBattle) > 0x12
	.error "SecretBase_Text_Trainer4AcceptBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4AcceptBattle) < 0x12
	.space 0x12 - (. - SecretBase_Text_Trainer4AcceptBattle)
	.endif

	@ data/text/secret_base_trainers.inc:151 SecretBase_Text_Trainer4DeclineBattle
	.globl SecretBase_Text_Trainer4DeclineBattle
SecretBase_Text_Trainer4DeclineBattle: @ 0x082458E3
	.string "まぁ そんな ときも あるよね!{EOS}"
	.if (. - SecretBase_Text_Trainer4DeclineBattle) > 0x11
	.error "SecretBase_Text_Trainer4DeclineBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4DeclineBattle) < 0x11
	.space 0x11 - (. - SecretBase_Text_Trainer4DeclineBattle)
	.endif

	@ data/text/secret_base_trainers.inc:154 SecretBase_Text_Trainer4Defeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer4Defeated
SecretBase_Text_Trainer4Defeated: @ 0x082458F4
	.string "きみの じつりょくは じゅうぶん わかった!{EOS}"
	.if (. - SecretBase_Text_Trainer4Defeated) != 0x17
	.error "SecretBase_Text_Trainer4Defeated must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:157 SecretBase_Text_Trainer4PostBattle
	.globl SecretBase_Text_Trainer4PostBattle
SecretBase_Text_Trainer4PostBattle: @ 0x0824590B
	.string "きみも ぼくも もっと つよく なれる!\nおたがいに がんばろうね!{EOS}"
	.if (. - SecretBase_Text_Trainer4PostBattle) > 0x23
	.error "SecretBase_Text_Trainer4PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4PostBattle) < 0x23
	.space 0x23 - (. - SecretBase_Text_Trainer4PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:160 SecretBase_Text_Trainer4PreChampion
	.globl SecretBase_Text_Trainer4PreChampion
SecretBase_Text_Trainer4PreChampion: @ 0x0824592E
	.string "すきな ばしょを さがして\nすきな ものを おく!\pすきな ポケモンを そだてて\nぼくも いっしょに つよくなる\pまいにち たのしいねー{EOS}"
	.if (. - SecretBase_Text_Trainer4PreChampion) > 0x45
	.error "SecretBase_Text_Trainer4PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer4PreChampion) < 0x45
	.space 0x45 - (. - SecretBase_Text_Trainer4PreChampion)
	.endif

	@ data/text/secret_base_trainers.inc:163 SecretBase_Text_Trainer9Intro
	.globl SecretBase_Text_Trainer9Intro
SecretBase_Text_Trainer9Intro: @ 0x08245973
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!\pしょうぶの センスも ためして みる?{EOS}"
	.if (. - SecretBase_Text_Trainer9Intro) > 0x70
	.error "SecretBase_Text_Trainer9Intro may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9Intro) < 0x70
	.space 0x70 - (. - SecretBase_Text_Trainer9Intro)
	.endif

	@ data/text/secret_base_trainers.inc:166 SecretBase_Text_Trainer9AcceptBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer9AcceptBattle
SecretBase_Text_Trainer9AcceptBattle: @ 0x082459E3
	.string "おもいっきり いくわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer9AcceptBattle) != 0xd
	.error "SecretBase_Text_Trainer9AcceptBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:169 SecretBase_Text_Trainer9DeclineBattle
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl SecretBase_Text_Trainer9DeclineBattle
SecretBase_Text_Trainer9DeclineBattle: @ 0x082459F0
	.string "いつでも わたしの センスを みせるわよ!{EOS}"
	.if (. - SecretBase_Text_Trainer9DeclineBattle) != 0x16
	.error "SecretBase_Text_Trainer9DeclineBattle must retain its original byte length"
	.endif

	@ data/text/secret_base_trainers.inc:172 SecretBase_Text_Trainer9Defeated
	.globl SecretBase_Text_Trainer9Defeated
SecretBase_Text_Trainer9Defeated: @ 0x08245A06
	.string "すごい さいのうね!\nそこしれぬ つよさを かんじたわ……{EOS}"
	.if (. - SecretBase_Text_Trainer9Defeated) > 0x1e
	.error "SecretBase_Text_Trainer9Defeated may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9Defeated) < 0x1e
	.space 0x1e - (. - SecretBase_Text_Trainer9Defeated)
	.endif

	@ data/text/secret_base_trainers.inc:175 SecretBase_Text_Trainer9PostBattle
	.globl SecretBase_Text_Trainer9PostBattle
SecretBase_Text_Trainer9PostBattle: @ 0x08245A24
	.string "わたしの センス どうだった?\nもっと センスを みがくわよー{EOS}"
	.if (. - SecretBase_Text_Trainer9PostBattle) > 0x20
	.error "SecretBase_Text_Trainer9PostBattle may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9PostBattle) < 0x20
	.space 0x20 - (. - SecretBase_Text_Trainer9PostBattle)
	.endif

	@ data/text/secret_base_trainers.inc:178 SecretBase_Text_Trainer9PreChampion
	.globl SecretBase_Text_Trainer9PreChampion
SecretBase_Text_Trainer9PreChampion: @ 0x08245A44
	.string "グッズの しゅるいや おきかたを みれば\nそのひとが どんな センスの もちぬしか\lよーく わかるわね!\pわたしの センスは どうかしら?\nうふふっ なにも いえないって かんじね!{EOS}"
	.if (. - SecretBase_Text_Trainer9PreChampion) > 0x5c
	.error "SecretBase_Text_Trainer9PreChampion may not grow beyond its original slot"
	.endif
	.if (. - SecretBase_Text_Trainer9PreChampion) < 0x5c
	.space 0x5c - (. - SecretBase_Text_Trainer9PreChampion)
	.endif
