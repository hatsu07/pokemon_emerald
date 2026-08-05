	@ field-script:0x244D96 FieldScriptText_244F02
	.globl gText_Rom_244F02
gText_Rom_244F02: @ 0x08244F02
	.string "ふかふかの　つちだ！$"
	.if (. - gText_Rom_244F02) > 0xb
	.error "gText_Rom_244F02 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F02) < 0xb
	.space 0xb - (. - gText_Rom_244F02)
	.endif
