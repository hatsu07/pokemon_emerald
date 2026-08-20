	@ field-script:0x240846 FieldScriptText_240D99
	.globl gText_Rom_240D99
gText_Rom_240D99: @ 0x08240D99
	.string "おほっ\nかざんばい　あつまってるよ　ペコペコ！\lガラスのどうぐ　つくるよ　ペコペコ！\pどれが　いいかね　ペコペコ{EOS}"
	.if (. - gText_Rom_240D99) > 0x39
	.error "gText_Rom_240D99 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D99) < 0x39
	.space 0x39 - (. - gText_Rom_240D99)
	.endif
