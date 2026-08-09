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
	@ Original ROM bytes: 0x25898E-0x2589B3 (0x26 bytes)
	@ semanticized-mass: charmap string (38 bytes including EOS)
	.string "あらあら！　おばさん　たちと　いっしょに\nポロックを　つくりたいのかしら？"
	.byte EOS
