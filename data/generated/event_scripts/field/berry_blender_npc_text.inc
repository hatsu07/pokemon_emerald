	@ field-script:0x258D89 FieldScriptText_2585D8
	.globl FieldScriptText_2585D8
FieldScriptText_2585D8: @ 0x082585D8
	.string "お！　おじさんと　いっしょに\nポロックを　つくりたいのかい？"
	.byte EOS
	.if (. - FieldScriptText_2585D8) > 0x1f
	.error "FieldScriptText_2585D8 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2585D8) < 0x1f
	.space 0x1f - (. - FieldScriptText_2585D8)
	.endif
	@ field-script:0x258E50 FieldScriptText_2585F7
	.globl FieldScriptText_2585F7
FieldScriptText_2585F7: @ 0x082585F7
	.string "そうか！"
	.byte EOS
	.if (. - FieldScriptText_2585F7) > 0x5
	.error "FieldScriptText_2585F7 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2585F7) < 0x5
	.space 0x5 - (. - FieldScriptText_2585F7)
	.endif
	@ field-script:0x258DA2 FieldScriptText_2585FC
	.globl FieldScriptText_2585FC
FieldScriptText_2585FC: @ 0x082585FC
	.string "そうか…\nおじさん　さみしい…"
	.byte EOS
	.if (. - FieldScriptText_2585FC) > 0x10
	.error "FieldScriptText_2585FC may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2585FC) < 0x10
	.space 0x10 - (. - FieldScriptText_2585FC)
	.endif
	@ field-script:0x258DEB FieldScriptText_25860C
	.globl FieldScriptText_25860C
FieldScriptText_25860C: @ 0x0825860C
	.string "じゃあ　ポロックの　つくりかたは\nもう　しってるかい？"
	.byte EOS
	.if (. - FieldScriptText_25860C) > 0x1c
	.error "FieldScriptText_25860C may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25860C) < 0x1c
	.space 0x1c - (. - FieldScriptText_25860C)
	.endif
	@ field-script:0x258E04 FieldScriptText_258628
	.globl FieldScriptText_258628
FieldScriptText_258628: @ 0x08258628
	.string "じゃあ　はじめるぞ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - FieldScriptText_258628) > 0x1a
	.error "FieldScriptText_258628 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258628) < 0x1a
	.space 0x1a - (. - FieldScriptText_258628)
	.endif
	@ field-script:0x258E12 FieldScriptText_258642
	.globl FieldScriptText_258642
FieldScriptText_258642: @ 0x08258642
	.string "よし　せつめいするぞ！\pなぁに　かんたんな　ことだ！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おせば　いいだけだ\pまあ　じっさいに　やってみれば\nすぐ　わかるさ！"
	.byte EOS
	.if (. - FieldScriptText_258642) > 0x60
	.error "FieldScriptText_258642 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258642) < 0x60
	.space 0x60 - (. - FieldScriptText_258642)
	.endif
	@ field-script:0x258DAC FieldScriptText_2586A2
	.globl FieldScriptText_2586A2
FieldScriptText_2586A2: @ 0x082586A2
	.string "あれ？\nでも　きのみを　もってない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ"
	.byte EOS
	.if (. - FieldScriptText_2586A2) > 0x30
	.error "FieldScriptText_2586A2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2586A2) < 0x30
	.space 0x30 - (. - FieldScriptText_2586A2)
	.endif
	@ field-script:0x258DCE FieldScriptText_2586D2
	.globl FieldScriptText_2586D2
FieldScriptText_2586D2: @ 0x082586D2
	.string "しかたないなぁ　もう\pおじさんの　あまった　きのみで\nよければ　あげるよ！\pこれで　いっしょに　きのみブレンダーで\nポロックを　つくろうや"
	.byte EOS
	.if (. - FieldScriptText_2586D2) > 0x46
	.error "FieldScriptText_2586D2 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2586D2) < 0x46
	.space 0x46 - (. - FieldScriptText_2586D2)
	.endif
	@ field-script:0x258DC4 FieldScriptText_258718
	.globl FieldScriptText_258718
FieldScriptText_258718: @ 0x08258718
	.string "おじさんの　あまりの　きのみが　あれば\nあげるん　だけど…\pきょうは　もう　あまって　ないんだ\nまた　こんど　やろうな"
	.byte EOS
	.if (. - FieldScriptText_258718) > 0x3c
	.error "FieldScriptText_258718 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258718) < 0x3c
	.space 0x3c - (. - FieldScriptText_258718)
	.endif
	@ field-script:0x258E6B FieldScriptText_258754
	.globl FieldScriptText_258754
FieldScriptText_258754: @ 0x08258754
	.string "でも　ポロックケースが\nいっぱいの　ようだね\pポロックを　へらしてから\nまた　おいで"
	.byte EOS
	.if (. - FieldScriptText_258754) > 0x2b
	.error "FieldScriptText_258754 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258754) < 0x2b
	.space 0x2b - (. - FieldScriptText_258754)
	.endif
	@ field-script:0x258E75 FieldScriptText_25877F
	.globl FieldScriptText_25877F
FieldScriptText_25877F: @ 0x0825877F
	.string "でも　ポロックケースを\nまだもって　ないようだね\pポロックケースを\nもらってから　またおいで"
	.byte EOS
	.if (. - FieldScriptText_25877F) > 0x2f
	.error "FieldScriptText_25877F may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25877F) < 0x2f
	.space 0x2f - (. - FieldScriptText_25877F)
	.endif
	@ field-script:0x206E2A FieldScriptText_2587AE
	.globl FieldScriptText_2587AE
FieldScriptText_2587AE: @ 0x082587AE
	.string "はやく　まぜようぜ！！"
	.byte EOS
	.if (. - FieldScriptText_2587AE) > 0xc
	.error "FieldScriptText_2587AE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2587AE) < 0xc
	.space 0xc - (. - FieldScriptText_2587AE)
	.endif
	@ field-script:0x206E33 FieldScriptText_2587BA
	.globl FieldScriptText_2587BA
FieldScriptText_2587BA: @ 0x082587BA
	.string "どんな　ポロックが　できるのかしら？\nドキドキ　しちゃう！"
	.byte EOS
	.if (. - FieldScriptText_2587BA) > 0x1e
	.error "FieldScriptText_2587BA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2587BA) < 0x1e
	.space 0x1e - (. - FieldScriptText_2587BA)
	.endif
	@ field-script:0x258E96 FieldScriptText_2587D8
	.globl FieldScriptText_2587D8
FieldScriptText_2587D8: @ 0x082587D8
	.string "よっしっ！　おにいさん　たちと　いっしょに\nポロックを　つくりたいんだね！"
	.byte EOS
	.if (. - FieldScriptText_2587D8) > 0x26
	.error "FieldScriptText_2587D8 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2587D8) < 0x26
	.space 0x26 - (. - FieldScriptText_2587D8)
	.endif
	@ field-script:0x258F18 FieldScriptText_2587FE
	.globl FieldScriptText_2587FE
FieldScriptText_2587FE: @ 0x082587FE
	.string "よっしっ！"
	.byte EOS
	.if (. - FieldScriptText_2587FE) > 0x6
	.error "FieldScriptText_2587FE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2587FE) < 0x6
	.space 0x6 - (. - FieldScriptText_2587FE)
	.endif
	@ field-script:0x258EAF FieldScriptText_258804
	.globl FieldScriptText_258804
FieldScriptText_258804: @ 0x08258804
	.string "ざんねんだよ……\pでも　おにいさん　たちは\nいつでも　きみを　まってる　からね！"
	.byte EOS
	.if (. - FieldScriptText_258804) > 0x29
	.error "FieldScriptText_258804 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258804) < 0x29
	.space 0x29 - (. - FieldScriptText_258804)
	.endif
	@ field-script:0x258EC3 FieldScriptText_25882D
	.globl FieldScriptText_25882D
FieldScriptText_25882D: @ 0x0825882D
	.string "もちろん　ポロックの　つくりかたは\nしっているよね？"
	.byte EOS
	.if (. - FieldScriptText_25882D) > 0x1b
	.error "FieldScriptText_25882D may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_25882D) < 0x1b
	.space 0x1b - (. - FieldScriptText_25882D)
	.endif
	@ field-script:0x258EDC FieldScriptText_258848
	.globl FieldScriptText_258848
FieldScriptText_258848: @ 0x08258848
	.string "よっしっ！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - FieldScriptText_258848) > 0x20
	.error "FieldScriptText_258848 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258848) < 0x20
	.space 0x20 - (. - FieldScriptText_258848)
	.endif
	@ field-script:0x258EEA FieldScriptText_258868
	.globl FieldScriptText_258868
FieldScriptText_258868: @ 0x08258868
	.string "よっしっ！\nおにいさんが　せつめいして　あげよう！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おすんだよ！\pとっても\nかんたんな　ことだろう？"
	.byte EOS
	.if (. - FieldScriptText_258868) > 0x55
	.error "FieldScriptText_258868 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258868) < 0x55
	.space 0x55 - (. - FieldScriptText_258868)
	.endif
	@ field-script:0x258EB9 FieldScriptText_2588BD
	.globl FieldScriptText_2588BD
FieldScriptText_2588BD: @ 0x082588BD
	.string "……と　おもったら\nきみ　きのみを　もっていない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ……\pおにいさん　たちは\nいつも　ここに　いるから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - FieldScriptText_2588BD) > 0x64
	.error "FieldScriptText_2588BD may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2588BD) < 0x64
	.space 0x64 - (. - FieldScriptText_2588BD)
	.endif
	@ field-script:0x258F3C FieldScriptText_258921
	.globl FieldScriptText_258921
FieldScriptText_258921: @ 0x08258921
	.string "……と　おもったら\nポロックケースが　いっぱいの　ようだね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - FieldScriptText_258921) > 0x32
	.error "FieldScriptText_258921 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258921) < 0x32
	.space 0x32 - (. - FieldScriptText_258921)
	.endif
	@ field-script:0x258F46 FieldScriptText_258953
	.globl FieldScriptText_258953
FieldScriptText_258953: @ 0x08258953
	.string "……と　おもったら\nきみ　ポロックケースを\lまだ　もって　ないようだね\pポロックケースを\nもらってから　また　きてね"
	.byte EOS
	.if (. - FieldScriptText_258953) > 0x3b
	.error "FieldScriptText_258953 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258953) < 0x3b
	.space 0x3b - (. - FieldScriptText_258953)
	.endif
	@ analyzed canonical ROM range 0x0825898E-0x082589B3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0825898E: @ 0x0825898E
	.string "あらあら!　おばさん　たちと　いっしょに\nポロックを　つくりたいのかしら?{EOS}"
	@ field-script:0x258FF5 FieldScriptText_2589B4
	.globl FieldScriptText_2589B4
FieldScriptText_2589B4: @ 0x082589B4
	.string "あらあら！"
	.byte EOS
	.if (. - FieldScriptText_2589B4) > 0x6
	.error "FieldScriptText_2589B4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2589B4) < 0x6
	.space 0x6 - (. - FieldScriptText_2589B4)
	.endif
	@ field-script:0x258F8C FieldScriptText_2589BA
	.globl FieldScriptText_2589BA
FieldScriptText_2589BA: @ 0x082589BA
	.string "あらあら……\pおばさん　たち　とっても　ショック！"
	.byte EOS
	.if (. - FieldScriptText_2589BA) > 0x1a
	.error "FieldScriptText_2589BA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2589BA) < 0x1a
	.space 0x1a - (. - FieldScriptText_2589BA)
	.endif
	@ field-script:0x258FA0 FieldScriptText_2589D4
	.globl FieldScriptText_2589D4
FieldScriptText_2589D4: @ 0x082589D4
	.string "じゃあ　もちろん　ポロックの　つくりかたは\nしっているわね？"
	.byte EOS
	.if (. - FieldScriptText_2589D4) > 0x1f
	.error "FieldScriptText_2589D4 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2589D4) < 0x1f
	.space 0x1f - (. - FieldScriptText_2589D4)
	.endif
	@ field-script:0x258FB9 FieldScriptText_2589F3
	.globl FieldScriptText_2589F3
FieldScriptText_2589F3: @ 0x082589F3
	.string "あらあら！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - FieldScriptText_2589F3) > 0x20
	.error "FieldScriptText_2589F3 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_2589F3) < 0x20
	.space 0x20 - (. - FieldScriptText_2589F3)
	.endif
	@ field-script:0x258FC7 FieldScriptText_258A13
	.globl FieldScriptText_258A13
FieldScriptText_258A13: @ 0x08258A13
	.string "あらあら！\pじゃあ　おばさんが\nやさしく　せつめいして　あげるわね！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　バシッと　おすだけで　いいのよ！\lかんたん　ねー！"
	.byte EOS
	.if (. - FieldScriptText_258A13) > 0x5f
	.error "FieldScriptText_258A13 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258A13) < 0x5f
	.space 0x5f - (. - FieldScriptText_258A13)
	.endif
	@ field-script:0x258F96 FieldScriptText_258A72
	.globl FieldScriptText_258A72
FieldScriptText_258A72: @ 0x08258A72
	.string "あなた　きのみを　もってないわね\pきのみが　ないと　ポロックは\nつくれないのよ……\pおばさん　たち　いつでも　ここで\nポロックを　つくっているから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - FieldScriptText_258A72) > 0x5e
	.error "FieldScriptText_258A72 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258A72) < 0x5e
	.space 0x5e - (. - FieldScriptText_258A72)
	.endif
	@ field-script:0x259019 FieldScriptText_258AD0
	.globl FieldScriptText_258AD0
FieldScriptText_258AD0: @ 0x08258AD0
	.string "ポロックケースが\nいっぱいの　ようね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - FieldScriptText_258AD0) > 0x27
	.error "FieldScriptText_258AD0 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258AD0) < 0x27
	.space 0x27 - (. - FieldScriptText_258AD0)
	.endif
	@ field-script:0x259023 FieldScriptText_258AF7
	.globl FieldScriptText_258AF7
FieldScriptText_258AF7: @ 0x08258AF7
	.string "ポロックケースを\nまだ　もって　ないようね\pポロックケースを\nもらってから　また　きてね"
	.byte EOS
	.if (. - FieldScriptText_258AF7) > 0x2d
	.error "FieldScriptText_258AF7 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258AF7) < 0x2d
	.space 0x2d - (. - FieldScriptText_258AF7)
	.endif
	@ field-script:0x2590D4 FieldScriptText_258B24
	.globl FieldScriptText_258B24
FieldScriptText_258B24: @ 0x08258B24
	.string "よっしっ！　きょうこそ\nブレンダーの　さいこうそくどを　だすぞ！"
	.byte EOS
	.if (. - FieldScriptText_258B24) > 0x21
	.error "FieldScriptText_258B24 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258B24) < 0x21
	.space 0x21 - (. - FieldScriptText_258B24)
	.endif
	@ field-script:0x258F73 FieldScriptText_258B45
	.globl FieldScriptText_258B45
FieldScriptText_258B45: @ 0x08258B45
	.string "あらあら！\nあなた　まぜるの　うまそうね！\lいっしょに　やらない？"
	.byte EOS
	.if (. - FieldScriptText_258B45) > 0x22
	.error "FieldScriptText_258B45 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258B45) < 0x22
	.space 0x22 - (. - FieldScriptText_258B45)
	.endif
	@ field-script:0x2590E6 FieldScriptText_258B67
	.globl FieldScriptText_258B67
FieldScriptText_258B67: @ 0x08258B67
	.string "おいしい　ポロックを　つくって\nわたしの　ポケモンを\lもっと　もっと　かわいく　するのー"
	.byte EOS
	.if (. - FieldScriptText_258B67) > 0x2d
	.error "FieldScriptText_258B67 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258B67) < 0x2d
	.space 0x2d - (. - FieldScriptText_258B67)
	.endif
	@ field-script:0x2591C4 FieldScriptText_258B94
	.globl FieldScriptText_258B94
FieldScriptText_258B94: @ 0x08258B94
	.string "きのみブレンダーで　ともだちと　いっしょに\nきのみから　ポロックを　つくります\pつうしんに　はいる　まえに\nレポートを　かいても　よろしいですか？"
	.byte EOS
	.if (. - FieldScriptText_258B94) > 0x4a
	.error "FieldScriptText_258B94 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258B94) < 0x4a
	.space 0x4a - (. - FieldScriptText_258B94)
	.endif
	@ field-script:0x25920C FieldScriptText_258BDE
	.globl FieldScriptText_258BDE
FieldScriptText_258BDE: @ 0x08258BDE
	.string "ともだちを　さがしています\n……Bボタンで　キャンセル"
	.byte EOS
	.if (. - FieldScriptText_258BDE) > 0x1c
	.error "FieldScriptText_258BDE may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258BDE) < 0x1c
	.space 0x1c - (. - FieldScriptText_258BDE)
	.endif
	@ field-script:0x25924F FieldScriptText_258BFA
	.globl FieldScriptText_258BFA
FieldScriptText_258BFA: @ 0x08258BFA
	.string "{0xFD}{0x02}さんが　きました"
	.byte EOS
	.if (. - FieldScriptText_258BFA) > 0xb
	.error "FieldScriptText_258BFA may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258BFA) < 0xb
	.space 0xb - (. - FieldScriptText_258BFA)
	.endif
	@ field-script:0x25925D FieldScriptText_258C05
	.globl FieldScriptText_258C05
FieldScriptText_258C05: @ 0x08258C05
	.string "{0xFD}{0x02}さんと　{0xFD}{0x03}さんが\nきました"
	.byte EOS
	.if (. - FieldScriptText_258C05) > 0x11
	.error "FieldScriptText_258C05 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258C05) < 0x11
	.space 0x11 - (. - FieldScriptText_258C05)
	.endif
	@ field-script:0x25926B FieldScriptText_258C16
	.globl FieldScriptText_258C16
FieldScriptText_258C16: @ 0x08258C16
	.string "{0xFD}{0x02}さん　{0xFD}{0x03}さん\n{0xFD}{0x04}さんが　きました"
	.byte EOS
	.if (. - FieldScriptText_258C16) > 0x15
	.error "FieldScriptText_258C16 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258C16) < 0x15
	.space 0x15 - (. - FieldScriptText_258C16)
	.endif
	@ field-script:0x2591E3 FieldScriptText_258C2B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_258C2B
FieldScriptText_258C2B: @ 0x08258C2B
	.string "きのみが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - FieldScriptText_258C2B) != 0x1b
	.error "FieldScriptText_258C2B must retain its original byte length"
	.endif
	@ field-script:0x259294 FieldScriptText_258C46
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_258C46
FieldScriptText_258C46: @ 0x08258C46
	.string "ポロックケースが　いっぱい　なので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - FieldScriptText_258C46) != 0x23
	.error "FieldScriptText_258C46 must retain its original byte length"
	.endif
	@ field-script:0x25929E FieldScriptText_258C69
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl FieldScriptText_258C69
FieldScriptText_258C69: @ 0x08258C69
	.string "ポロックケースが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - FieldScriptText_258C69) != 0x1f
	.error "FieldScriptText_258C69 must retain its original byte length"
	.endif
	@ field-script:0x2590FC FieldScriptText_258C88
	.globl FieldScriptText_258C88
FieldScriptText_258C88: @ 0x08258C88
	.string "わしは　ポロックを\nつくるのが　だいすきで\pいつも　きのみを\nもって　きてるんだ"
	.byte EOS
	.if (. - FieldScriptText_258C88) > 0x29
	.error "FieldScriptText_258C88 may not grow beyond its original slot"
	.endif
	.if (. - FieldScriptText_258C88) < 0x29
	.space 0x29 - (. - FieldScriptText_258C88)
	.endif
