	@ field-script:0x244E33 FieldScriptText_244F7F
	.globl gText_Rom_244F7F
gText_Rom_244F7F: @ 0x08244F7F
	.string "とてもうつくしく$"
	.if (. - gText_Rom_244F7F) > 0x9
	.error "gText_Rom_244F7F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F7F) < 0x9
	.space 0x9 - (. - gText_Rom_244F7F)
	.endif
