	@ field-script:0x246516 FieldScriptText_246378
	.globl gText_Rom_246378
gText_Rom_246378: @ 0x08246378
	.string "えっ　なにを　してるかって？\pポケモンの　わざを　つかって\nここに　ぼくだけの　へやを\lつくろうと　おもってね！\pそうだっ　この　わざマシンを　あげるから\nきみも　つくって　みるかい？{EOS}"
	.if (. - gText_Rom_246378) > 0x5d
	.error "gText_Rom_246378 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246378) < 0x5d
	.space 0x5d - (. - gText_Rom_246378)
	.endif
