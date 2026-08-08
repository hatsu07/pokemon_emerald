	@ field-script:0x240AC5 FieldScriptText_240E02
	.globl gText_Rom_240E02
gText_Rom_240E02: @ 0x08240E02
	.string "{0xFD}{0x02}　だね　ペコペコ！\pよしっ！　どうぐを　つくるよ　ペコペコ！\nちょっと　まってなさいよ　ペコペコ$"
	.if (. - gText_Rom_240E02) > 0x33
	.error "gText_Rom_240E02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E02) < 0x33
	.space 0x33 - (. - gText_Rom_240E02)
	.endif
