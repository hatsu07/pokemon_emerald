	@ field-script:0x207187 FieldScriptText_24A629
	.globl gText_Rom_24A629
gText_Rom_24A629: @ 0x0824A629
	.string "えらんだ　コンテストが\nおともだちと　ちがう　ようです！$"
	.if (. - gText_Rom_24A629) > 0x1d
	.error "gText_Rom_24A629 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A629) < 0x1d
	.space 0x1d - (. - gText_Rom_24A629)
	.endif
