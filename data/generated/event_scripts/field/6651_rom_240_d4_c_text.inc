	@ field-script:0x240A9A FieldScriptText_240D4C
	.globl gText_Rom_240D4C
gText_Rom_240D4C: @ 0x08240D4C
	.string "うーん……\nかざんばいが　すくないよ　ペコペコ！\lガラスのどうぐ　できないよ　ペコペコ！\pあと　{0xFD}{0x02}ほ　あるけば\nあおいビードロ　つくれるよ　ペコペコ！{EOS}"
	.if (. - gText_Rom_240D4C) > 0x4d
	.error "gText_Rom_240D4C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240D4C) < 0x4d
	.space 0x4d - (. - gText_Rom_240D4C)
	.endif
