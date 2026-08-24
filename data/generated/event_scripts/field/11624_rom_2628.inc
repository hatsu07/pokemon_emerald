	@ field-script:0x2623D0 FieldScriptText_262452
	.globl gText_Rom_262452
gText_Rom_262452: @ 0x08262452
	.string "サファリゾーンを\nこのまま　しゅうりょう　しますか？{EOS}"
	.if (. - gText_Rom_262452) > 0x1b
	.error "gText_Rom_262452 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262452) < 0x1b
	.space 0x1b - (. - gText_Rom_262452)
	.endif
	@ field-script:0x2623ED FieldScriptText_26246D
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_26246D
gText_Rom_26246D: @ 0x0826246D
	.string "ピンポーン！　じかん　でーす！\nサファリゲームを　しゅうりょう　します{EOS}"
	.if (. - gText_Rom_26246D) != 0x24
	.error "gText_Rom_26246D must retain its original byte length"
	.endif
	@ field-script:0x2623FE FieldScriptText_262491
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_262491
gText_Rom_262491: @ 0x08262491
	.string "サファリボールを　つかいきったので\nサファリゲームを　しゅうりょう　します{EOS}"
	.if (. - gText_Rom_262491) != 0x26
	.error "gText_Rom_262491 must retain its original byte length"
	.endif
	@ field-script:0x26241B FieldScriptText_2624B7
	.globl gText_Rom_2624B7
gText_Rom_2624B7: @ 0x082624B7
	.string "ポロックおきばに　ポロックを　おきますか？{EOS}"
	.if (. - gText_Rom_2624B7) > 0x16
	.error "gText_Rom_2624B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624B7) < 0x16
	.space 0x16 - (. - gText_Rom_2624B7)
	.endif
	@ field-script:0x26244A FieldScriptText_2624CD
	.globl gText_Rom_2624CD
gText_Rom_2624CD: @ 0x082624CD
	.string "まだ　{0xFD}{0x02}が　のこっています{EOS}"
	.if (. - gText_Rom_2624CD) > 0xf
	.error "gText_Rom_2624CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624CD) < 0xf
	.space 0xf - (. - gText_Rom_2624CD)
	.endif
	@ field-script:0x262441 FieldScriptText_2624DC
	.globl gText_Rom_2624DC
gText_Rom_2624DC: @ 0x082624DC
	.string "{0xFD}{0x02}を\nおきました！{EOS}"
	.if (. - gText_Rom_2624DC) > 0xb
	.error "gText_Rom_2624DC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624DC) < 0xb
	.space 0xb - (. - gText_Rom_2624DC)
	.endif
	@ field-script:0x212A12 FieldScriptText_2624E7
	.globl gText_Rom_2624E7
gText_Rom_2624E7: @ 0x082624E7
	.string "サファリゾーンへ　ようこそ！\pここでは　ホウエンでは　なかなか\nみることの　できない　ポケモンを\pしぜんの　すがたの　まま\nめに　することが　できます\pまた　ポケモントレーナーの\nようぼうに　おこたえ　して\pポケモンを\nつかまえる　ことも　できます！\pサファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - gText_Rom_2624E7) > 0x93
	.error "gText_Rom_2624E7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2624E7) < 0x93
	.space 0x93 - (. - gText_Rom_2624E7)
	.endif
	@ field-script:0x212A1D FieldScriptText_26257A
	.globl gText_Rom_26257A
gText_Rom_26257A: @ 0x0826257A
	.string "サファリゾーンへ　ようこそ！\nサファリゾーンは　はじめて　ですか？{EOS}"
	.if (. - gText_Rom_26257A) > 0x22
	.error "gText_Rom_26257A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26257A) < 0x22
	.space 0x22 - (. - gText_Rom_26257A)
	.endif
	@ field-script:0x212A30 FieldScriptText_26259C
	.globl gText_Rom_26259C
gText_Rom_26259C: @ 0x0826259C
	.string "サファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - gText_Rom_26259C) > 0x15
	.error "gText_Rom_26259C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26259C) < 0x15
	.space 0x15 - (. - gText_Rom_26259C)
	.endif
	@ field-script:0x212A3A FieldScriptText_2625B1
	.globl gText_Rom_2625B1
gText_Rom_2625B1: @ 0x082625B1
	.string "サファリゾーンでは\n30この　サファリボールを　つかって\lポケモンを　つかまえる　ことが　できます\pサファリボールを　つかいきるか\n500ぽ　あるくと\pゲームは　しゅうりょう　です\pサファリゾーンを　たのしんで　いってね！{EOS}"
	.if (. - gText_Rom_2625B1) > 0x70
	.error "gText_Rom_2625B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2625B1) < 0x70
	.space 0x70 - (. - gText_Rom_2625B1)
	.endif
	@ field-script:0x212A53 FieldScriptText_262621
	.globl gText_Rom_262621
gText_Rom_262621: @ 0x08262621
	.string "サファリゾーンへ　ようこそ！\p500えんで　ポケモン　つかまえほうだい！\nサファリゲームに　さんか　しますか？{EOS}"
	.if (. - gText_Rom_262621) > 0x38
	.error "gText_Rom_262621 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262621) < 0x38
	.space 0x38 - (. - gText_Rom_262621)
	.endif
	@ field-script:0x212A66 FieldScriptText_262659
	.globl gText_Rom_262659
gText_Rom_262659: @ 0x08262659
	.string "そうですか\nこんど　ぜひ　さんか　してください！{EOS}"
	.if (. - gText_Rom_262659) > 0x19
	.error "gText_Rom_262659 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262659) < 0x19
	.space 0x19 - (. - gText_Rom_262659)
	.endif
	@ field-script:0x212B24 FieldScriptText_262672
	.globl gText_Rom_262672
gText_Rom_262672: @ 0x08262672
	.string "おかねが　たりませんよ！{EOS}"
	.if (. - gText_Rom_262672) > 0xd
	.error "gText_Rom_262672 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262672) < 0xd
	.space 0xd - (. - gText_Rom_262672)
	.endif
	@ field-script:0x212A9D FieldScriptText_26267F
	.globl gText_Rom_26267F
gText_Rom_26267F: @ 0x0826267F
	.string "それでは　500えん　いただきます{EOS}"
	.if (. - gText_Rom_26267F) > 0x12
	.error "gText_Rom_26267F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26267F) < 0x12
	.space 0x12 - (. - gText_Rom_26267F)
	.endif
	@ field-script:0x212AAF FieldScriptText_262691
	.globl gText_Rom_262691
gText_Rom_262691: @ 0x08262691
	.string "では　サファリボールを　どうぞ！{EOS}"
	.if (. - gText_Rom_262691) > 0x11
	.error "gText_Rom_262691 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262691) < 0x11
	.space 0x11 - (. - gText_Rom_262691)
	.endif
	@ field-script:0x212AB9 FieldScriptText_2626A2
	.globl gText_Rom_2626A2
gText_Rom_2626A2: @ 0x082626A2
	.string "{0xFD}{0x01}は　サファリボールを\n30こ　うけとった！{EOS}"
	.if (. - gText_Rom_2626A2) > 0x18
	.error "gText_Rom_2626A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626A2) < 0x18
	.space 0x18 - (. - gText_Rom_2626A2)
	.endif
	@ field-script:0x212AC0 FieldScriptText_2626BA
	.globl gText_Rom_2626BA
gText_Rom_2626BA: @ 0x082626BA
	.string "じかんに　なりましたら\nこちらから　おしらせ　しますので\pぞんぶんに　おたのしみ　ください！\nでは　いってらっしゃい！{EOS}"
	.if (. - gText_Rom_2626BA) > 0x3c
	.error "gText_Rom_2626BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626BA) < 0x3c
	.space 0x3c - (. - gText_Rom_2626BA)
	.endif
	@ field-script:0x212B07 FieldScriptText_2626F6
	.globl gText_Rom_2626F6
gText_Rom_2626F6: @ 0x082626F6
	.string "おきゃくさん！\nボックスが　いっぱい　ですよ！{EOS}"
	.if (. - gText_Rom_2626F6) > 0x18
	.error "gText_Rom_2626F6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2626F6) < 0x18
	.space 0x18 - (. - gText_Rom_2626F6)
	.endif
	@ field-script:0x212B16 FieldScriptText_26270E
	.globl gText_Rom_26270E
gText_Rom_26270E: @ 0x0826270E
	.string "あ！　おきゃくさん\nポロックケースを　おもちで　ないですね？\pサファリゾーンは　ポロックを　つかうと\nより　おたのしみ　いただけますので\pぜひ　ポロックケースを\nおもちに　なって　おこし　ください\pポロックケースは\nミナモシティの　コンテストかいじょうで\lうけとることが　できますよ{EOS}"
	.if (. - gText_Rom_26270E) > 0x8e
	.error "gText_Rom_26270E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26270E) < 0x8e
	.space 0x8e - (. - gText_Rom_26270E)
	.endif
	@ field-script:0x21EAB2 FieldScriptText_26279C
	.globl gText_Rom_26279C
gText_Rom_26279C: @ 0x0826279C
	.string "まだ　じかんが　のこっていますが\nサファリゾーンを　やめますか？{EOS}"
	.if (. - gText_Rom_26279C) > 0x21
	.error "gText_Rom_26279C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26279C) < 0x21
	.space 0x21 - (. - gText_Rom_26279C)
	.endif
	@ field-script:0x21EAC5 FieldScriptText_2627BD
	.globl gText_Rom_2627BD
gText_Rom_2627BD: @ 0x082627BD
	.string "では　ひきつづき　おたのしみ　ください！{EOS}"
	.if (. - gText_Rom_2627BD) > 0x15
	.error "gText_Rom_2627BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2627BD) < 0x15
	.space 0x15 - (. - gText_Rom_2627BD)
	.endif
	@ field-script:0x21EADC FieldScriptText_2627D2
	.globl gText_Rom_2627D2
gText_Rom_2627D2: @ 0x082627D2
	.string "わかりました\pそれでは　のこりの　サファリボールを\nおあずかり　します\pおつかれさまでした\nまた　ごりよう　ください{EOS}"
	.if (. - gText_Rom_2627D2) > 0x3b
	.error "gText_Rom_2627D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2627D2) < 0x3b
	.space 0x3b - (. - gText_Rom_2627D2)
	.endif
	@ field-script:0x21EAD2 FieldScriptText_26280D
	.globl gText_Rom_26280D
gText_Rom_26280D: @ 0x0826280D
	.string "それでは　いってらっしゃい！\lなにか　ありましたら\nわたしに　こえを　かけて　くださいね{EOS}"
	.if (. - gText_Rom_26280D) > 0x2d
	.error "gText_Rom_26280D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26280D) < 0x2d
	.space 0x2d - (. - gText_Rom_26280D)
	.endif
	@ field-script:0x21EA8C FieldScriptText_26283A
	.globl gText_Rom_26283A
gText_Rom_26283A: @ 0x0826283A
	.string "しってた？\pあの　しかくい　はこに　ポロックを　おくと\nポケモンが　あつまって　くるんだよ！{EOS}"
	.if (. - gText_Rom_26283A) > 0x2f
	.error "gText_Rom_26283A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26283A) < 0x2f
	.space 0x2f - (. - gText_Rom_26283A)
	.endif
	@ field-script:0x21EA95 FieldScriptText_262869
	.globl gText_Rom_262869
gText_Rom_262869: @ 0x08262869
	.string "この　さきに　いきたい　けど\nじてんしゃ　もって　くるの　わすれた……\pおくに　めずらしい　ポケモンが\nいそうな　きが　するのに！{EOS}"
	.if (. - gText_Rom_262869) > 0x42
	.error "gText_Rom_262869 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262869) < 0x42
	.space 0x42 - (. - gText_Rom_262869)
	.endif
	@ field-script:0x21EA29 FieldScriptText_2628AB
	.globl gText_Rom_2628AB
gText_Rom_2628AB: @ 0x082628AB
	.string "ポケモンに　ポロックを　なげても\nしらんぷり　される　ときが　あるのよ\pポケモンにも　すききらいが　あるのかしら？{EOS}"
	.if (. - gText_Rom_2628AB) > 0x3a
	.error "gText_Rom_2628AB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2628AB) < 0x3a
	.space 0x3a - (. - gText_Rom_2628AB)
	.endif

	@ field-script:0x21EA0C FieldScriptText_2628E5
	.globl gText_Rom_2628E5
gText_Rom_2628E5: @ 0x082628E5
	.string "ぜぇ……　ぜぇ……\nやっと　ここまで　きたけど……\pつかれちゃって　ポケモン　つかまえる\nげんきも　のこって　ないよ……{EOS}"
	.if (. - gText_Rom_2628E5) > 0x3d
	.error "gText_Rom_2628E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2628E5) < 0x3d
	.space 0x3d - (. - gText_Rom_2628E5)
	.endif
