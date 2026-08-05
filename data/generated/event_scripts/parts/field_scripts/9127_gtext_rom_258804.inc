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
