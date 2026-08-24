	@ field-script:0x258FF5 FieldScriptText_2589B4
	.globl gText_Rom_2589B4
gText_Rom_2589B4: @ 0x082589B4
	.string "あらあら！"
	.byte EOS
	.if (. - gText_Rom_2589B4) > 0x6
	.error "gText_Rom_2589B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589B4) < 0x6
	.space 0x6 - (. - gText_Rom_2589B4)
	.endif
	@ field-script:0x258F8C FieldScriptText_2589BA
	.globl gText_Rom_2589BA
gText_Rom_2589BA: @ 0x082589BA
	.string "あらあら……\pおばさん　たち　とっても　ショック！"
	.byte EOS
	.if (. - gText_Rom_2589BA) > 0x1a
	.error "gText_Rom_2589BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589BA) < 0x1a
	.space 0x1a - (. - gText_Rom_2589BA)
	.endif
	@ field-script:0x258FA0 FieldScriptText_2589D4
	.globl gText_Rom_2589D4
gText_Rom_2589D4: @ 0x082589D4
	.string "じゃあ　もちろん　ポロックの　つくりかたは\nしっているわね？"
	.byte EOS
	.if (. - gText_Rom_2589D4) > 0x1f
	.error "gText_Rom_2589D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589D4) < 0x1f
	.space 0x1f - (. - gText_Rom_2589D4)
	.endif
	@ field-script:0x258FB9 FieldScriptText_2589F3
	.globl gText_Rom_2589F3
gText_Rom_2589F3: @ 0x082589F3
	.string "あらあら！　じゃあ　はじめるよ！\pレッツ　きのみブレンダー！！"
	.byte EOS
	.if (. - gText_Rom_2589F3) > 0x20
	.error "gText_Rom_2589F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2589F3) < 0x20
	.space 0x20 - (. - gText_Rom_2589F3)
	.endif
	@ field-script:0x258FC7 FieldScriptText_258A13
	.globl gText_Rom_258A13
gText_Rom_258A13: @ 0x08258A13
	.string "あらあら！\pじゃあ　おばさんが\nやさしく　せつめいして　あげるわね！\pきのみブレンダーの　マークが\nじぶんの　ところに　きたら\lボタンを　バシッと　おすだけで　いいのよ！\lかんたん　ねー！"
	.byte EOS
	.if (. - gText_Rom_258A13) > 0x5f
	.error "gText_Rom_258A13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258A13) < 0x5f
	.space 0x5f - (. - gText_Rom_258A13)
	.endif
	@ field-script:0x258F96 FieldScriptText_258A72
	.globl gText_Rom_258A72
gText_Rom_258A72: @ 0x08258A72
	.string "あなた　きのみを　もってないわね\pきのみが　ないと　ポロックは\nつくれないのよ……\pおばさん　たち　いつでも　ここで\nポロックを　つくっているから\lきのみを　みつけたら　また　やろうね！"
	.byte EOS
	.if (. - gText_Rom_258A72) > 0x5e
	.error "gText_Rom_258A72 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258A72) < 0x5e
	.space 0x5e - (. - gText_Rom_258A72)
	.endif
	@ field-script:0x259019 FieldScriptText_258AD0
	.globl gText_Rom_258AD0
gText_Rom_258AD0: @ 0x08258AD0
	.string "ポロックケースが\nいっぱいの　ようね\pポロックを　へらしてから\nまた　きてね"
	.byte EOS
	.if (. - gText_Rom_258AD0) > 0x27
	.error "gText_Rom_258AD0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258AD0) < 0x27
	.space 0x27 - (. - gText_Rom_258AD0)
	.endif
	@ field-script:0x259023 FieldScriptText_258AF7
	.globl gText_Rom_258AF7
gText_Rom_258AF7: @ 0x08258AF7
	.string "ポロックケースを\nまだ　もって　ないようね\pポロックケースを\nもらってから　また　きてね"
	.byte EOS
	.if (. - gText_Rom_258AF7) > 0x2d
	.error "gText_Rom_258AF7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258AF7) < 0x2d
	.space 0x2d - (. - gText_Rom_258AF7)
	.endif
	@ field-script:0x2590D4 FieldScriptText_258B24
	.globl gText_Rom_258B24
gText_Rom_258B24: @ 0x08258B24
	.string "よっしっ！　きょうこそ\nブレンダーの　さいこうそくどを　だすぞ！"
	.byte EOS
	.if (. - gText_Rom_258B24) > 0x21
	.error "gText_Rom_258B24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B24) < 0x21
	.space 0x21 - (. - gText_Rom_258B24)
	.endif
	@ field-script:0x258F73 FieldScriptText_258B45
	.globl gText_Rom_258B45
gText_Rom_258B45: @ 0x08258B45
	.string "あらあら！\nあなた　まぜるの　うまそうね！\lいっしょに　やらない？"
	.byte EOS
	.if (. - gText_Rom_258B45) > 0x22
	.error "gText_Rom_258B45 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B45) < 0x22
	.space 0x22 - (. - gText_Rom_258B45)
	.endif
	@ field-script:0x2590E6 FieldScriptText_258B67
	.globl gText_Rom_258B67
gText_Rom_258B67: @ 0x08258B67
	.string "おいしい　ポロックを　つくって\nわたしの　ポケモンを\lもっと　もっと　かわいく　するのー"
	.byte EOS
	.if (. - gText_Rom_258B67) > 0x2d
	.error "gText_Rom_258B67 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B67) < 0x2d
	.space 0x2d - (. - gText_Rom_258B67)
	.endif
	@ field-script:0x2591C4 FieldScriptText_258B94
	.globl gText_Rom_258B94
gText_Rom_258B94: @ 0x08258B94
	.string "きのみブレンダーで　ともだちと　いっしょに\nきのみから　ポロックを　つくります\pつうしんに　はいる　まえに\nレポートを　かいても　よろしいですか？"
	.byte EOS
	.if (. - gText_Rom_258B94) > 0x4a
	.error "gText_Rom_258B94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258B94) < 0x4a
	.space 0x4a - (. - gText_Rom_258B94)
	.endif
	@ field-script:0x25920C FieldScriptText_258BDE
	.globl gText_Rom_258BDE
gText_Rom_258BDE: @ 0x08258BDE
	.string "ともだちを　さがしています\n……Bボタンで　キャンセル"
	.byte EOS
	.if (. - gText_Rom_258BDE) > 0x1c
	.error "gText_Rom_258BDE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258BDE) < 0x1c
	.space 0x1c - (. - gText_Rom_258BDE)
	.endif
	@ field-script:0x25924F FieldScriptText_258BFA
	.globl gText_Rom_258BFA
gText_Rom_258BFA: @ 0x08258BFA
	.string "{0xFD}{0x02}さんが　きました"
	.byte EOS
	.if (. - gText_Rom_258BFA) > 0xb
	.error "gText_Rom_258BFA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258BFA) < 0xb
	.space 0xb - (. - gText_Rom_258BFA)
	.endif
	@ field-script:0x25925D FieldScriptText_258C05
	.globl gText_Rom_258C05
gText_Rom_258C05: @ 0x08258C05
	.string "{0xFD}{0x02}さんと　{0xFD}{0x03}さんが\nきました"
	.byte EOS
	.if (. - gText_Rom_258C05) > 0x11
	.error "gText_Rom_258C05 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C05) < 0x11
	.space 0x11 - (. - gText_Rom_258C05)
	.endif
	@ field-script:0x25926B FieldScriptText_258C16
	.globl gText_Rom_258C16
gText_Rom_258C16: @ 0x08258C16
	.string "{0xFD}{0x02}さん　{0xFD}{0x03}さん\n{0xFD}{0x04}さんが　きました"
	.byte EOS
	.if (. - gText_Rom_258C16) > 0x15
	.error "gText_Rom_258C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C16) < 0x15
	.space 0x15 - (. - gText_Rom_258C16)
	.endif
	@ field-script:0x2591E3 FieldScriptText_258C2B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C2B
gText_Rom_258C2B: @ 0x08258C2B
	.string "きのみが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C2B) != 0x1b
	.error "gText_Rom_258C2B must retain its original byte length"
	.endif
	@ field-script:0x259294 FieldScriptText_258C46
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C46
gText_Rom_258C46: @ 0x08258C46
	.string "ポロックケースが　いっぱい　なので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C46) != 0x23
	.error "gText_Rom_258C46 must retain its original byte length"
	.endif
	@ field-script:0x25929E FieldScriptText_258C69
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_258C69
gText_Rom_258C69: @ 0x08258C69
	.string "ポロックケースが　ないので\nきのみブレンダーは　つかえません"
	.byte EOS
	.if (. - gText_Rom_258C69) != 0x1f
	.error "gText_Rom_258C69 must retain its original byte length"
	.endif
	@ field-script:0x2590FC FieldScriptText_258C88
	.globl gText_Rom_258C88
gText_Rom_258C88: @ 0x08258C88
	.string "わしは　ポロックを\nつくるのが　だいすきで\pいつも　きのみを\nもって　きてるんだ"
	.byte EOS
	.if (. - gText_Rom_258C88) > 0x29
	.error "gText_Rom_258C88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C88) < 0x29
	.space 0x29 - (. - gText_Rom_258C88)
	.endif
