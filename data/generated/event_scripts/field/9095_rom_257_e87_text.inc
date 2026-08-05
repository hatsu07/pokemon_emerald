	@ field-script:0x2578CC FieldScriptText_257E87
	.globl gText_Rom_257E87
gText_Rom_257E87: @ 0x08257E87
	.string "おや？　おまえさん\nその　ポケモンを　あずけると\lぜんぶで　ポケモンが　1ぴき　だけに\lなって　しまう　みたいじゃな\pもうちょっと　たくさん　つかまえてから\nきてみては　どうじゃ？"
	.byte EOS
	.if (. - gText_Rom_257E87) > 0x5b
	.error "gText_Rom_257E87 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257E87) < 0x5b
	.space 0x5b - (. - gText_Rom_257E87)
	.endif
