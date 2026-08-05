	@ field-script:0x1EA697 FieldScriptText_1EAE0C
	.globl gText_Rom_1EAE0C
gText_Rom_1EAE0C: @ 0x081EAE0C
	.string "しまった！\p111ばんどうろに　いくなら\nいわくだきを　もっていけ　って\lキンセツの　おじさんに　いわれてたんだ！\pおじさん？　サイクルショップの\nむかいがわの　いえに　すんでるよ$"
	.if (. - gText_Rom_1EAE0C) > 0x5b
	.error "gText_Rom_1EAE0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EAE0C) < 0x5b
	.space 0x5b - (. - gText_Rom_1EAE0C)
	.endif
