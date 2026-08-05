	@ field-script:0x259120 FieldScriptText_258CB1
	.globl gText_Rom_258CB1
gText_Rom_258CB1: @ 0x08258CB1
	.string "もし　よかったら\nいっしょに　きのみブレンダーで\lポロックを　つくろうや"
	.byte EOS
	.if (. - gText_Rom_258CB1) > 0x25
	.error "gText_Rom_258CB1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258CB1) < 0x25
	.space 0x25 - (. - gText_Rom_258CB1)
	.endif
