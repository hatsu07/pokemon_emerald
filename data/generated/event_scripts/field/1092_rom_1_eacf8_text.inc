	@ field-script:0x1EA682 FieldScriptText_1EACF8
	.globl gText_Rom_1EACF8
gText_Rom_1EACF8: @ 0x081EACF8
	.string "みえるぞ！　すなのとう　が！\nげんえい　と　よばれた　すなのとうが\nはっきりと　みえる！\pしかし　そのすがたは　はかなくて\nいまにも　くずれて　しまいそうだ……\pうーん　はいって　みたいが\nこわくて　ゆうきが　でん！$"
	.if (. - gText_Rom_1EACF8) > 0x6d
	.error "gText_Rom_1EACF8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EACF8) < 0x6d
	.space 0x6d - (. - gText_Rom_1EACF8)
	.endif
