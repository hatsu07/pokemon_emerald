	@ field-script:0x207017 FieldScriptText_24A86C
	.globl gText_Rom_24A86C
gText_Rom_24A86C: @ 0x0824A86C
	.string "ワイヤレスアダプタか　つうしんケーブルを\nつないだ　ともだちが　2にん　いじょう\lあつまると　おこなえます！\pさんかする　かたには\nまず　エントリーする　モードを\lえらんで　いただきます！\p2にん　から　4にん　まで　じゆうに\nとうろく　できる　エメラルドモードと\p4にんせんようの　うけつけから　さんかする\nともだちとも　いっしょに　とうろく　できる\lグローバルモードと\p2しゅるいの　モードが　ありますので\nともだちと　そうだんして\lおなじ　モードを　えらんで　くださいね！\pともだちと　おなじ　モードで\nおなじ　コンテストを　えらぶと\lエントリー　かんりょうと　なります！\pいつもの　とおりに　コンテストが\nはじまりますので　がんばって　くださいね！{EOS}"
	.if (. - gText_Rom_24A86C) > 0x149
	.error "gText_Rom_24A86C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A86C) < 0x149
	.space 0x149 - (. - gText_Rom_24A86C)
	.endif
