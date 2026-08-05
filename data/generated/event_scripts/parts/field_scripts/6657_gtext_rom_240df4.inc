	@ field-script:0x240AB8 FieldScriptText_240DF4
	.globl gText_Rom_240DF4
gText_Rom_240DF4: @ 0x08240DF4
	.string "どれが　いいかね　ペコペコ$"
	.if (. - gText_Rom_240DF4) > 0xe
	.error "gText_Rom_240DF4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_240DF4) < 0xe
	.space 0xe - (. - gText_Rom_240DF4)
	.endif
