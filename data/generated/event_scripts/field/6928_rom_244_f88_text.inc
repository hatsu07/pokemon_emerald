	@ field-script:0x244E3A FieldScriptText_244F88
	.globl gText_Rom_244F88
gText_Rom_244F88: @ 0x08244F88
	.string "かわいく$"
	.if (. - gText_Rom_244F88) > 0x5
	.error "gText_Rom_244F88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F88) < 0x5
	.space 0x5 - (. - gText_Rom_244F88)
	.endif
