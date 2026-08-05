	@ field-script:0x212A3A FieldScriptText_2625B1
	.globl gText_Rom_2625B1
gText_Rom_2625B1: @ 0x082625B1
	.string "サファリゾーンでは\n30この　サファリボールを　つかって\lポケモンを　つかまえる　ことが　できます\pサファリボールを　つかいきるか\n500ぽ　あるくと\pゲームは　しゅうりょう　です\pサファリゾーンを　たのしんで　いってね！$"
	.if (. - gText_Rom_2625B1) > 0x70
	.error "gText_Rom_2625B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2625B1) < 0x70
	.space 0x70 - (. - gText_Rom_2625B1)
	.endif
