	@ field-script:0x240AAC FieldScriptText_240E35
	.globl gText_Rom_240E35
gText_Rom_240E35: @ 0x08240E35
	.string "{0xFD}{0x02}　だね　ペコペコ！\pだけど　それを　つくるには\nかざんばいが　たりないよ　ペコペコ！\pかざんばいの　つもっている　ところを\nあと　{0xFD}{0x03}ほ　あるかないと　ペコペコ！\pどれが　いいかね　ペコペコ$"
	.if (. - gText_Rom_240E35) > 0x62
	.error "gText_Rom_240E35 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240E35) < 0x62
	.space 0x62 - (. - gText_Rom_240E35)
	.endif
