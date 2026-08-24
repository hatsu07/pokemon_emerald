	@ field-script:0x258D89 FieldScriptText_2585D8
	.globl gText_Rom_2585D8
gText_Rom_2585D8: @ 0x082585D8
	.string "お！　おじさんと　いっしょに\nポロックを　つくりたいのかい？"
	.byte EOS
	.if (. - gText_Rom_2585D8) > 0x1f
	.error "gText_Rom_2585D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585D8) < 0x1f
	.space 0x1f - (. - gText_Rom_2585D8)
	.endif
	@ field-script:0x258E50 FieldScriptText_2585F7
	.globl gText_Rom_2585F7
gText_Rom_2585F7: @ 0x082585F7
	.string "そうか！"
	.byte EOS
	.if (. - gText_Rom_2585F7) > 0x5
	.error "gText_Rom_2585F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585F7) < 0x5
	.space 0x5 - (. - gText_Rom_2585F7)
	.endif
	@ field-script:0x258DA2 FieldScriptText_2585FC
	.globl gText_Rom_2585FC
gText_Rom_2585FC: @ 0x082585FC
	.string "そうか…\nおじさん　さみしい…"
	.byte EOS
	.if (. - gText_Rom_2585FC) > 0x10
	.error "gText_Rom_2585FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2585FC) < 0x10
	.space 0x10 - (. - gText_Rom_2585FC)
	.endif
	@ field-script:0x258DEB FieldScriptText_25860C
	.globl gText_Rom_25860C
gText_Rom_25860C: @ 0x0825860C
	.string "じゃあ　ポロックの　つくりかたは\nもう　しってるかい？"
	.byte EOS
	.if (. - gText_Rom_25860C) > 0x1c
	.error "gText_Rom_25860C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25860C) < 0x1c
	.space 0x1c - (. - gText_Rom_25860C)
	.endif
	@ field-script:0x258E04 FieldScriptText_258628
	.globl gText_Rom_258628
gText_Rom_258628: @ 0x08258628
	.string "じゃあ　はじめるぞ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_258628) > 0x1a
	.error "gText_Rom_258628 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258628) < 0x1a
	.space 0x1a - (. - gText_Rom_258628)
	.endif
	@ field-script:0x258E12 FieldScriptText_258642
	.globl gText_Rom_258642
gText_Rom_258642: @ 0x08258642
	.string "よし　せつめいするぞ！\pなぁに　かんたんな　ことだ！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おせば　いいだけだ\pまあ　じっさいに　やってみれば\nすぐ　わかるさ！"
	.byte EOS
	.if (. - gText_Rom_258642) > 0x60
	.error "gText_Rom_258642 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258642) < 0x60
	.space 0x60 - (. - gText_Rom_258642)
	.endif
	@ field-script:0x258DAC FieldScriptText_2586A2
	.globl gText_Rom_2586A2
gText_Rom_2586A2: @ 0x082586A2
	.string "あれ？\nでも　きのみを　もってない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ"
	.byte EOS
	.if (. - gText_Rom_2586A2) > 0x30
	.error "gText_Rom_2586A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2586A2) < 0x30
	.space 0x30 - (. - gText_Rom_2586A2)
	.endif
	@ field-script:0x258DCE FieldScriptText_2586D2
	.globl gText_Rom_2586D2
gText_Rom_2586D2: @ 0x082586D2
	.string "しかたないなぁ　もう\pおじさんの　あまった　きのみで\nよければ　あげるよ！\pこれで　いっしょに　きのみブレンダーで\nポロックを　つくろうや"
	.byte EOS
	.if (. - gText_Rom_2586D2) > 0x46
	.error "gText_Rom_2586D2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2586D2) < 0x46
	.space 0x46 - (. - gText_Rom_2586D2)
	.endif
	@ field-script:0x258DC4 FieldScriptText_258718
	.globl gText_Rom_258718
gText_Rom_258718: @ 0x08258718
	.string "おじさんの　あまりの　きのみが　あれば\nあげるん　だけど…\pきょうは　もう　あまって　ないんだ\nまた　こんど　やろうな"
	.byte EOS
	.if (. - gText_Rom_258718) > 0x3c
	.error "gText_Rom_258718 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258718) < 0x3c
	.space 0x3c - (. - gText_Rom_258718)
	.endif
	@ field-script:0x258E6B FieldScriptText_258754
	.globl gText_Rom_258754
gText_Rom_258754: @ 0x08258754
	.string "でも　ポロックケースが\nいっぱいの　ようだね\pポロックを　へらしてから\nまた　おいで"
	.byte EOS
	.if (. - gText_Rom_258754) > 0x2b
	.error "gText_Rom_258754 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258754) < 0x2b
	.space 0x2b - (. - gText_Rom_258754)
	.endif
	@ field-script:0x258E75 FieldScriptText_25877F
	.globl gText_Rom_25877F
gText_Rom_25877F: @ 0x0825877F
	.string "でも　ポロックケースを\nまだもって　ないようだね\pポロックケースを\nもらってから　またおいで"
	.byte EOS
	.if (. - gText_Rom_25877F) > 0x2f
	.error "gText_Rom_25877F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25877F) < 0x2f
	.space 0x2f - (. - gText_Rom_25877F)
	.endif
	@ field-script:0x206E2A FieldScriptText_2587AE
	.globl gText_Rom_2587AE
gText_Rom_2587AE: @ 0x082587AE
	.string "はやく　まぜようぜ！！"
	.byte EOS
	.if (. - gText_Rom_2587AE) > 0xc
	.error "gText_Rom_2587AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587AE) < 0xc
	.space 0xc - (. - gText_Rom_2587AE)
	.endif
	@ field-script:0x206E33 FieldScriptText_2587BA
	.globl gText_Rom_2587BA
gText_Rom_2587BA: @ 0x082587BA
	.string "どんな　ポロックが　できるのかしら？\nドキドキ　しちゃう！"
	.byte EOS
	.if (. - gText_Rom_2587BA) > 0x1e
	.error "gText_Rom_2587BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587BA) < 0x1e
	.space 0x1e - (. - gText_Rom_2587BA)
	.endif
	@ field-script:0x258E96 FieldScriptText_2587D8
	.globl gText_Rom_2587D8
gText_Rom_2587D8: @ 0x082587D8
	.string "よっしっ！　おにいさん　たちと　いっしょに\nポロックを　つくりたいんだね！"
	.byte EOS
	.if (. - gText_Rom_2587D8) > 0x26
	.error "gText_Rom_2587D8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587D8) < 0x26
	.space 0x26 - (. - gText_Rom_2587D8)
	.endif
	@ field-script:0x258F18 FieldScriptText_2587FE
	.globl gText_Rom_2587FE
gText_Rom_2587FE: @ 0x082587FE
	.string "よっしっ！"
	.byte EOS
	.if (. - gText_Rom_2587FE) > 0x6
	.error "gText_Rom_2587FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2587FE) < 0x6
	.space 0x6 - (. - gText_Rom_2587FE)
	.endif
	@ field-script:0x258EAF FieldScriptText_258804
	.globl gText_Rom_258804
gText_Rom_258804: @ 0x08258804
	.string "ざんねんだよ……\pでも　おにいさん　たちは\nいつでも　きみを　まってる　からね！"
	.byte EOS
	.if (. - gText_Rom_258804) > 0x29
	.error "gText_Rom_258804 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258804) < 0x29
	.space 0x29 - (. - gText_Rom_258804)
	.endif
	@ field-script:0x258EC3 FieldScriptText_25882D
	.globl gText_Rom_25882D
gText_Rom_25882D: @ 0x0825882D
	.string "もちろん　ポロックの　つくりかたは\nしっているよね？"
	.byte EOS
	.if (. - gText_Rom_25882D) > 0x1b
	.error "gText_Rom_25882D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25882D) < 0x1b
	.space 0x1b - (. - gText_Rom_25882D)
	.endif
	@ field-script:0x258EDC FieldScriptText_258848
	.globl gText_Rom_258848
gText_Rom_258848: @ 0x08258848
	.string "よっしっ！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_258848) > 0x20
	.error "gText_Rom_258848 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258848) < 0x20
	.space 0x20 - (. - gText_Rom_258848)
	.endif
	@ field-script:0x258EEA FieldScriptText_258868
	.globl gText_Rom_258868
gText_Rom_258868: @ 0x08258868
	.string "よっしっ！\nおにいさんが　せつめいして　あげよう！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　おすんだよ！\pとっても\nかんたんな　ことだろう？"
	.byte EOS
	.if (. - gText_Rom_258868) > 0x55
	.error "gText_Rom_258868 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258868) < 0x55
	.space 0x55 - (. - gText_Rom_258868)
	.endif
	@ field-script:0x258EB9 FieldScriptText_2588BD
	.globl gText_Rom_2588BD
gText_Rom_2588BD: @ 0x082588BD
	.string "……と　おもったら\nきみ　きのみを　もっていない　みたいだね\pきのみが　ないと　ポロックは\nつくれないんだよ……\pおにいさん　たちは\nいつも　ここに　いるから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - gText_Rom_2588BD) > 0x64
	.error "gText_Rom_2588BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2588BD) < 0x64
	.space 0x64 - (. - gText_Rom_2588BD)
	.endif
	@ field-script:0x258F3C FieldScriptText_258921
	.globl gText_Rom_258921
gText_Rom_258921: @ 0x08258921
	.string "……と　おもったら\nポロックケースが　いっぱいの　ようだね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - gText_Rom_258921) > 0x32
	.error "gText_Rom_258921 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258921) < 0x32
	.space 0x32 - (. - gText_Rom_258921)
	.endif
	@ field-script:0x258F46 FieldScriptText_258953
	.globl gText_Rom_258953
gText_Rom_258953: @ 0x08258953
	.string "……と　おもったら\nきみ　ポロックケースを\lまだ　もって　ないようだね\pポロックケースを\nもらってから　また　きてね"
	.byte EOS
	.if (. - gText_Rom_258953) > 0x3b
	.error "gText_Rom_258953 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258953) < 0x3b
	.space 0x3b - (. - gText_Rom_258953)
	.endif
	@ analyzed canonical ROM range 0x0825898E-0x082589B3
	@ semantic recovery: script_data; byte-verified against linked ROM
EventText_JP_0825898E: @ 0x0825898E
	.string "あらあら!　おばさん　たちと　いっしょに\nポロックを　つくりたいのかしら?{EOS}"
