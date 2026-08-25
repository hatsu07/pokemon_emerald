	@ field-script:0x2623D0 FieldScriptText_262452
	.globl FieldScriptText_262452
FieldScriptText_262452: @ 0x08262452
	.string "サファリゾーンを\nこのまま　しゅうりょう　しますか？{EOS}"
	.if (. - FieldScriptText_262452) > 0x1b
	.error "FieldScriptText_262452 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262452) < 0x1b
	.space 0x1b - (. - FieldScriptText_262452)
	.endif
	@ field-script:0x2623ED FieldScriptText_26246D
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_26246D
FieldScriptText_26246D: @ 0x0826246D
	.string "ピンポーン！　じかん　でーす！\nサファリゲームを　しゅうりょう　します{EOS}"
	.if (. - FieldScriptText_26246D) != 0x24
	.error "FieldScriptText_26246D must retain its original byte length"
	.endif
	@ field-script:0x2623FE FieldScriptText_262491
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_262491
FieldScriptText_262491: @ 0x08262491
	.string "サファリボールを　つかいきったので\nサファリゲームを　しゅうりょう　します{EOS}"
	.if (. - FieldScriptText_262491) != 0x26
	.error "FieldScriptText_262491 must retain its original byte length"
	.endif
	@ field-script:0x26241B FieldScriptText_2624B7
	.globl FieldScriptText_2624B7
FieldScriptText_2624B7: @ 0x082624B7
	.string "ポロックおきばに　ポロックを　おきますか？{EOS}"
	.if (. - FieldScriptText_2624B7) > 0x16
	.error "FieldScriptText_2624B7 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2624B7) < 0x16
	.space 0x16 - (. - FieldScriptText_2624B7)
	.endif
	@ field-script:0x26244A FieldScriptText_2624CD
	.globl FieldScriptText_2624CD
FieldScriptText_2624CD: @ 0x082624CD
	.string "まだ　{0xFD}{0x02}が　のこっています{EOS}"
	.if (. - FieldScriptText_2624CD) > 0xf
	.error "FieldScriptText_2624CD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2624CD) < 0xf
	.space 0xf - (. - FieldScriptText_2624CD)
	.endif
	@ field-script:0x262441 FieldScriptText_2624DC
	.globl FieldScriptText_2624DC
FieldScriptText_2624DC: @ 0x082624DC
	.string "{0xFD}{0x02}を\nおきました！{EOS}"
	.if (. - FieldScriptText_2624DC) > 0xb
	.error "FieldScriptText_2624DC may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2624DC) < 0xb
	.space 0xb - (. - FieldScriptText_2624DC)
	.endif
	@ field-script:0x212A12 FieldScriptText_2624E7
	.globl FieldScriptText_2624E7
FieldScriptText_2624E7: @ 0x082624E7
	.string "サファリゾーンへ　ようこそ！\pここでは　ホウエンでは　なかなか\nみることの　できない　ポケモンを\pしぜんの　すがたの　まま\nめに　することが　できます\pまた　ポケモントレーナーの\nようぼうに　おこたえ　して\pポケモンを\nつかまえる　ことも　できます！\pサファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - FieldScriptText_2624E7) > 0x93
	.error "FieldScriptText_2624E7 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2624E7) < 0x93
	.space 0x93 - (. - FieldScriptText_2624E7)
	.endif
	@ field-script:0x212A1D FieldScriptText_26257A
	.globl FieldScriptText_26257A
FieldScriptText_26257A: @ 0x0826257A
	.string "サファリゾーンへ　ようこそ！\nサファリゾーンは　はじめて　ですか？{EOS}"
	.if (. - FieldScriptText_26257A) > 0x22
	.error "FieldScriptText_26257A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26257A) < 0x22
	.space 0x22 - (. - FieldScriptText_26257A)
	.endif
	@ field-script:0x212A30 FieldScriptText_26259C
	.globl FieldScriptText_26259C
FieldScriptText_26259C: @ 0x0826259C
	.string "サファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - FieldScriptText_26259C) > 0x15
	.error "FieldScriptText_26259C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26259C) < 0x15
	.space 0x15 - (. - FieldScriptText_26259C)
	.endif
	@ field-script:0x212A3A FieldScriptText_2625B1
	.globl FieldScriptText_2625B1
FieldScriptText_2625B1: @ 0x082625B1
	.string "サファリゾーンでは\n30この　サファリボールを　つかって\lポケモンを　つかまえる　ことが　できます\pサファリボールを　つかいきるか\n500ぽ　あるくと\pゲームは　しゅうりょう　です\pサファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - FieldScriptText_2625B1) > 0x70
	.error "FieldScriptText_2625B1 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2625B1) < 0x70
	.space 0x70 - (. - FieldScriptText_2625B1)
	.endif
	@ field-script:0x212A53 FieldScriptText_262621
	.globl FieldScriptText_262621
FieldScriptText_262621: @ 0x08262621
	.string "サファリゾーンへ　ようこそ！\p500えんで　ポケモン　つかまえほうだい！\nサファリゲームに　さんか　しますか？{EOS}"
	.if (. - FieldScriptText_262621) > 0x38
	.error "FieldScriptText_262621 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262621) < 0x38
	.space 0x38 - (. - FieldScriptText_262621)
	.endif
	@ field-script:0x212A66 FieldScriptText_262659
	.globl FieldScriptText_262659
FieldScriptText_262659: @ 0x08262659
	.string "そうですか\nこんど　ぜひ　さんか　してください！{EOS}"
	.if (. - FieldScriptText_262659) > 0x19
	.error "FieldScriptText_262659 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262659) < 0x19
	.space 0x19 - (. - FieldScriptText_262659)
	.endif
	@ field-script:0x212B24 FieldScriptText_262672
	.globl FieldScriptText_262672
FieldScriptText_262672: @ 0x08262672
	.string "おかねが　たりませんよ！{EOS}"
	.if (. - FieldScriptText_262672) > 0xd
	.error "FieldScriptText_262672 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262672) < 0xd
	.space 0xd - (. - FieldScriptText_262672)
	.endif
	@ field-script:0x212A9D FieldScriptText_26267F
	.globl FieldScriptText_26267F
FieldScriptText_26267F: @ 0x0826267F
	.string "それでは　500えん　いただきます{EOS}"
	.if (. - FieldScriptText_26267F) > 0x12
	.error "FieldScriptText_26267F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26267F) < 0x12
	.space 0x12 - (. - FieldScriptText_26267F)
	.endif
	@ field-script:0x212AAF FieldScriptText_262691
	.globl FieldScriptText_262691
FieldScriptText_262691: @ 0x08262691
	.string "では　サファリボールを　どうぞ！{EOS}"
	.if (. - FieldScriptText_262691) > 0x11
	.error "FieldScriptText_262691 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262691) < 0x11
	.space 0x11 - (. - FieldScriptText_262691)
	.endif
	@ field-script:0x212AB9 FieldScriptText_2626A2
	.globl FieldScriptText_2626A2
FieldScriptText_2626A2: @ 0x082626A2
	.string "{0xFD}{0x01}は　サファリボールを\n30こ　うけとった！{EOS}"
	.if (. - FieldScriptText_2626A2) > 0x18
	.error "FieldScriptText_2626A2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2626A2) < 0x18
	.space 0x18 - (. - FieldScriptText_2626A2)
	.endif
	@ field-script:0x212AC0 FieldScriptText_2626BA
	.globl FieldScriptText_2626BA
FieldScriptText_2626BA: @ 0x082626BA
	.string "じかんに　なりましたら\nこちらから　おしらせ　しますので\pぞんぶんに　おたのしみ　ください！\nでは　いってらっしゃい！{EOS}"
	.if (. - FieldScriptText_2626BA) > 0x3c
	.error "FieldScriptText_2626BA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2626BA) < 0x3c
	.space 0x3c - (. - FieldScriptText_2626BA)
	.endif
	@ field-script:0x212B07 FieldScriptText_2626F6
	.globl FieldScriptText_2626F6
FieldScriptText_2626F6: @ 0x082626F6
	.string "おきゃくさん！\nボックスが　いっぱい　ですよ！{EOS}"
	.if (. - FieldScriptText_2626F6) > 0x18
	.error "FieldScriptText_2626F6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2626F6) < 0x18
	.space 0x18 - (. - FieldScriptText_2626F6)
	.endif
	@ field-script:0x212B16 FieldScriptText_26270E
	.globl FieldScriptText_26270E
FieldScriptText_26270E: @ 0x0826270E
	.string "あ！　おきゃくさん\nポロックケースを　おもちで　ないですね？\pサファリゾーンは　ポロックを　つかうと\nより　おたのしみ　いただけますので\pぜひ　ポロックケースを\nおもちに　なって　おこし　ください\pポロックケースは\nミナモシティの　コンテストかいじょうで\lうけとることが　できますよ{EOS}"
	.if (. - FieldScriptText_26270E) > 0x8e
	.error "FieldScriptText_26270E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26270E) < 0x8e
	.space 0x8e - (. - FieldScriptText_26270E)
	.endif
	@ field-script:0x21EAB2 FieldScriptText_26279C
	.globl FieldScriptText_26279C
FieldScriptText_26279C: @ 0x0826279C
	.string "まだ　じかんが　のこっていますが\nサファリゾーンを　やめますか？{EOS}"
	.if (. - FieldScriptText_26279C) > 0x21
	.error "FieldScriptText_26279C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26279C) < 0x21
	.space 0x21 - (. - FieldScriptText_26279C)
	.endif
	@ field-script:0x21EAC5 FieldScriptText_2627BD
	.globl FieldScriptText_2627BD
FieldScriptText_2627BD: @ 0x082627BD
	.string "では　ひきつづき　おたのしみ　ください！{EOS}"
	.if (. - FieldScriptText_2627BD) > 0x15
	.error "FieldScriptText_2627BD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2627BD) < 0x15
	.space 0x15 - (. - FieldScriptText_2627BD)
	.endif
	@ field-script:0x21EADC FieldScriptText_2627D2
	.globl FieldScriptText_2627D2
FieldScriptText_2627D2: @ 0x082627D2
	.string "わかりました\pそれでは　のこりの　サファリボールを\nおあずかり　します\pおつかれさまでした\nまた　ごりよう　ください{EOS}"
	.if (. - FieldScriptText_2627D2) > 0x3b
	.error "FieldScriptText_2627D2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2627D2) < 0x3b
	.space 0x3b - (. - FieldScriptText_2627D2)
	.endif
	@ field-script:0x21EAD2 FieldScriptText_26280D
	.globl FieldScriptText_26280D
FieldScriptText_26280D: @ 0x0826280D
	.string "それでは　いってらっしゃい！\lなにか　ありましたら\nわたしに　こえを　かけて　くださいね{EOS}"
	.if (. - FieldScriptText_26280D) > 0x2d
	.error "FieldScriptText_26280D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26280D) < 0x2d
	.space 0x2d - (. - FieldScriptText_26280D)
	.endif
	@ field-script:0x21EA8C FieldScriptText_26283A
	.globl FieldScriptText_26283A
FieldScriptText_26283A: @ 0x0826283A
	.string "しってた？\pあの　しかくい　はこに　ポロックを　おくと\nポケモンが　あつまって　くるんだよ！{EOS}"
	.if (. - FieldScriptText_26283A) > 0x2f
	.error "FieldScriptText_26283A may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26283A) < 0x2f
	.space 0x2f - (. - FieldScriptText_26283A)
	.endif
	@ field-script:0x21EA95 FieldScriptText_262869
	.globl FieldScriptText_262869
FieldScriptText_262869: @ 0x08262869
	.string "この　さきに　いきたい　けど\nじてんしゃ　もって　くるの　わすれた……\pおくに　めずらしい　ポケモンが\nいそうな　きが　するのに！{EOS}"
	.if (. - FieldScriptText_262869) > 0x42
	.error "FieldScriptText_262869 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262869) < 0x42
	.space 0x42 - (. - FieldScriptText_262869)
	.endif
	@ field-script:0x21EA29 FieldScriptText_2628AB
	.globl FieldScriptText_2628AB
FieldScriptText_2628AB: @ 0x082628AB
	.string "ポケモンに　ポロックを　なげても\nしらんぷり　される　ときが　あるのよ\pポケモンにも　すききらいが　あるのかしら？{EOS}"
	.if (. - FieldScriptText_2628AB) > 0x3a
	.error "FieldScriptText_2628AB may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2628AB) < 0x3a
	.space 0x3a - (. - FieldScriptText_2628AB)
	.endif

	@ field-script:0x21EA0C FieldScriptText_2628E5
	.globl FieldScriptText_2628E5
FieldScriptText_2628E5: @ 0x082628E5
	.string "ぜぇ……　ぜぇ……\nやっと　ここまで　きたけど……\pつかれちゃって　ポケモン　つかまえる\nげんきも　のこって　ないよ……{EOS}"
	.if (. - FieldScriptText_2628E5) > 0x3d
	.error "FieldScriptText_2628E5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2628E5) < 0x3d
	.space 0x3d - (. - FieldScriptText_2628E5)
	.endif
	@ field-script:0x21EA16 FieldScriptText_262922
	.globl FieldScriptText_262922
FieldScriptText_262922: @ 0x08262922
	.string "ホウエンに　いない　みずポケモンを\nさがしに　きたんだけど……\pみずうみは　どこにあるのか\nきみ　しってるかい？{EOS}"
	.if (. - FieldScriptText_262922) > 0x39
	.error "FieldScriptText_262922 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262922) < 0x39
	.space 0x39 - (. - FieldScriptText_262922)
	.endif
	@ field-script:0x21EA1F FieldScriptText_26295B
	.globl FieldScriptText_26295B
FieldScriptText_26295B: @ 0x0826295B
	.string "ここで　めずらしい　ポケモンを\nたくさん　つかまえて\lともだちと　こうかん　するんだ！{EOS}"
	.if (. - FieldScriptText_26295B) > 0x2c
	.error "FieldScriptText_26295B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_26295B) < 0x2c
	.space 0x2c - (. - FieldScriptText_26295B)
	.endif
	@ field-script:0x21EA9E FieldScriptText_262987
	.globl FieldScriptText_262987
FieldScriptText_262987: @ 0x08262987
	.string "ポロックおきばに　おいた　ポロックが\nいつのまにか　なくなっていた……\pしらない　うちに\nポケモンが　たべちゃったのかな？{EOS}"
	.if (. - FieldScriptText_262987) > 0x3e
	.error "FieldScriptText_262987 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262987) < 0x3e
	.space 0x3e - (. - FieldScriptText_262987)
	.endif
	@ field-script:0x212B4D FieldScriptText_2629C5
	.globl FieldScriptText_2629C5
FieldScriptText_2629C5: @ 0x082629C5
	.string "サファリゾーンの　おとくな　じょうほう！\pであった　ポケモンに\nポロックを　なげると　にげにくく　なります！{EOS}"
	.if (. - FieldScriptText_2629C5) > 0x37
	.error "FieldScriptText_2629C5 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2629C5) < 0x37
	.space 0x37 - (. - FieldScriptText_2629C5)
	.endif
	@ field-script:0x21EA32 FieldScriptText_2629FC
	.globl FieldScriptText_2629FC
FieldScriptText_2629FC: @ 0x082629FC
	.string "あるき　つかれたら　ちょっと　ひといき！\n「みんなの　きゅうけいじょ」{EOS}"
	.if (. - FieldScriptText_2629FC) > 0x24
	.error "FieldScriptText_2629FC may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2629FC) < 0x24
	.space 0x24 - (. - FieldScriptText_2629FC)
	.endif
	@ field-script:0x222986 FieldScriptText_262A20
	.globl FieldScriptText_262A20
FieldScriptText_262A20: @ 0x08262A20
	.string "おれ　ポロック　もってないけど\nポケモン　たくさん　つかまえたよ\pちかづいて　ボールを　なげる　だけで\nけっこう　つかまえられる　もんだよ！{EOS}"
	.if (. - FieldScriptText_262A20) > 0x47
	.error "FieldScriptText_262A20 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262A20) < 0x47
	.space 0x47 - (. - FieldScriptText_262A20)
	.endif
	@ field-script:0x22298F FieldScriptText_262A67
	.globl FieldScriptText_262A67
FieldScriptText_262A67: @ 0x08262A67
	.string "ポロックを　つかうと　いつもより\nちょっぴり　にげにくく　なるみたい\pだから　にげにくい　ポケモンに　つかっても\nあんまり　いみが　ないかもね{EOS}"
	.if (. - FieldScriptText_262A67) > 0x48
	.error "FieldScriptText_262A67 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262A67) < 0x48
	.space 0x48 - (. - FieldScriptText_262A67)
	.endif
	@ field-script:0x222998 FieldScriptText_262AAF
	.globl FieldScriptText_262AAF
FieldScriptText_262AAF: @ 0x08262AAF
	.string "ポロックおきばに　ポロック　おいて\nポケモンを　つかまえると\pおなじ　ような　せいかくの　ポケモンが\nあつまる　きが　するなあ{EOS}"
	.if (. - FieldScriptText_262AAF) > 0x40
	.error "FieldScriptText_262AAF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262AAF) < 0x40
	.space 0x40 - (. - FieldScriptText_262AAF)
	.endif
	@ field-script:0x21EB52 FieldScriptText_262AEF
	.globl FieldScriptText_262AEF
FieldScriptText_262AEF: @ 0x08262AEF
	.string "このさきは　ただいま　こうじちゅう　のため\nたちいり　きんしに　なっています{EOS}"
	.if (. - FieldScriptText_262AEF) > 0x27
	.error "FieldScriptText_262AEF may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262AEF) < 0x27
	.space 0x27 - (. - FieldScriptText_262AEF)
	.endif
	@ field-script:0x21EB5B FieldScriptText_262B16
	.globl FieldScriptText_262B16
FieldScriptText_262B16: @ 0x08262B16
	.string "サファリゾーンの　かくちょう　こうじが\nしゅうりょう　しました\pあたらしい　エリアも\nたのしんで　くださいね！{EOS}"
	.if (. - FieldScriptText_262B16) > 0x38
	.error "FieldScriptText_262B16 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262B16) < 0x38
	.space 0x38 - (. - FieldScriptText_262B16)
	.endif
	@ field-script:0x21EB64 FieldScriptText_262B4E
	.globl FieldScriptText_262B4E
FieldScriptText_262B4E: @ 0x08262B4E
	.string "このさきは　ただいま　こうじちゅう　のため\nたちいり　きんしに　なっています{EOS}"
	.if (. - FieldScriptText_262B4E) > 0x27
	.error "FieldScriptText_262B4E may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262B4E) < 0x27
	.space 0x27 - (. - FieldScriptText_262B4E)
	.endif
	@ field-script:0x21EB6D FieldScriptText_262B75
	.globl FieldScriptText_262B75
FieldScriptText_262B75: @ 0x08262B75
	.string "わーい　わーい！\nはじめて　みる　ポケモンが　いっぱい！{EOS}"
	.if (. - FieldScriptText_262B75) > 0x1d
	.error "FieldScriptText_262B75 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262B75) < 0x1d
	.space 0x1d - (. - FieldScriptText_262B75)
	.endif
	@ field-script:0x21EB76 FieldScriptText_262B92
	.globl FieldScriptText_262B92
FieldScriptText_262B92: @ 0x08262B92
	.string "このへんに　いる　ポケモンは\nはじめて　みるやつ　ばっかりだ！\pそんな　めずらしい　ポケモンが\nつかまえ　ほうだい　だなんて　すげー！{EOS}"
	.if (. - FieldScriptText_262B92) > 0x44
	.error "FieldScriptText_262B92 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262B92) < 0x44
	.space 0x44 - (. - FieldScriptText_262B92)
	.endif
	@ field-script:0x21EB7F FieldScriptText_262BD6
	.globl FieldScriptText_262BD6
FieldScriptText_262BD6: @ 0x08262BD6
	.string "このへんに　いる　ポケモンは\nホウエンちほう　いがいの　とちに\lすんでる　ポケモン　らしいぜ{EOS}"
	.if (. - FieldScriptText_262BD6) > 0x2f
	.error "FieldScriptText_262BD6 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262BD6) < 0x2f
	.space 0x2f - (. - FieldScriptText_262BD6)
	.endif
	@ field-script:0x21EB88 FieldScriptText_262C05
	.globl FieldScriptText_262C05
FieldScriptText_262C05: @ 0x08262C05
	.string "サファリボールが　あと　すこししか\nのこって　ないんだよ\lなにを　つかまえるか　まよっちゃうなあ{EOS}"
	.if (. - FieldScriptText_262C05) > 0x31
	.error "FieldScriptText_262C05 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262C05) < 0x31
	.space 0x31 - (. - FieldScriptText_262C05)
	.endif
	@ field-script:0x21EB91 FieldScriptText_262C36
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_262C36
FieldScriptText_262C36: @ 0x08262C36
	.string "ピカチュウが　ここで　みられるって\nきいたんだけど　どこに　いるのかしら{EOS}"
	.if (. - FieldScriptText_262C36) != 0x25
	.error "FieldScriptText_262C36 must retain its original byte length"
	.endif
	@ field-script:0x21EB9A FieldScriptText_262C5B
	.globl FieldScriptText_262C5B
FieldScriptText_262C5B: @ 0x08262C5B
	.string "あーん　ポケモンが\nなかなか　つかまらないわっ！\pこのままじゃ　にゅうじょうりょうの\nモトが　とれないわっ！{EOS}"
	.if (. - FieldScriptText_262C5B) > 0x37
	.error "FieldScriptText_262C5B may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_262C5B) < 0x37
	.space 0x37 - (. - FieldScriptText_262C5B)
	.endif
	@ Embedded ROM bytes: file offset 0x262C92, size 0x61
	.byte 0x47, 0x04, 0x01, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x85, 0x07, 0x20, 0x08
	.byte 0x16, 0x04, 0x80, 0x00, 0x00, 0x96, 0x02, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xEE
	.byte 0x2C, 0x26, 0x08, 0x17, 0x04, 0x80, 0x80, 0x00, 0x05, 0xEE, 0x2C, 0x26, 0x08, 0x02, 0x47, 0x04
	.byte 0x01, 0x01, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0x85, 0x07, 0x20, 0x08, 0x16, 0x04
	.byte 0x80, 0x01, 0x00, 0x96, 0x02, 0x00, 0x21, 0x0D, 0x80, 0x00, 0x00, 0x06, 0x01, 0xEE, 0x2C, 0x26
	.byte 0x08, 0x17, 0x04, 0x80, 0x80, 0x00, 0x05, 0xEE, 0x2C, 0x26, 0x08, 0x02, 0x25, 0xA2, 0x00, 0x27
	.byte 0x02
