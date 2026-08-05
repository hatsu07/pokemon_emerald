	@ field-script:0x21E0A7 FieldScriptText_21E106
	.globl gText_Rom_21E106
gText_Rom_21E106: @ 0x0821E106
	.string "エニシダ『やあ　やあ　やあ\n{0xFD}{0x01}{0xFD}{0x05}　{0xFD}{0x01}{0xFD}{0x05}！\pわたしは　ようじが　あって\nもう　ふねを　おりるんだけど\lあえて　よかったよ！\pリーグチャンピオン　おめでとう！\nそんな　きみを　しょうたい　したい\lところが　ある！\pそれは……　バトルフロンティア　だ！\pどんな　ところかって？\nとにかく　きてみれば　わかるよ\pこのふねの　せんちょうには\nはなしを　しておいた　から……\lつぎから　ふねに　のるときは\lバトルフロンティアに　いける　はずだよ！\pじゃあね　{0xFD}{0x01}{0xFD}{0x05}\nバトルフロンティアで　まっているよ！"
	.byte EOS
	.if (. - gText_Rom_21E106) > 0xfb
	.error "gText_Rom_21E106 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E106) < 0xfb
	.space 0xfb - (. - gText_Rom_21E106)
	.endif
