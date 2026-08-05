	@ field-script:0x244DEA FieldScriptText_244F4D
	.globl gText_Rom_244F4D
gText_Rom_244F4D: @ 0x08244F4D
	.string "{0xFD}{0x02}の　めが　でてきた！$"
	.if (. - gText_Rom_244F4D) > 0xd
	.error "gText_Rom_244F4D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F4D) < 0xd
	.space 0xd - (. - gText_Rom_244F4D)
	.endif
