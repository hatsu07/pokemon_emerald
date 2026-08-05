	@ field-script:0x244EFB FieldScriptText_244F24
	.globl gText_Rom_244F24
gText_Rom_244F24: @ 0x08244F24
	.string "{0xFD}{0x01}は　ふかふかの　つちに\n{0xFD}{0x02}のみを　うめた！$"
	.if (. - gText_Rom_244F24) > 0x19
	.error "gText_Rom_244F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F24) < 0x19
	.space 0x19 - (. - gText_Rom_244F24)
	.endif
