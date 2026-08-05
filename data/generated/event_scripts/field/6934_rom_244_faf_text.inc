	@ field-script:0x244E78 FieldScriptText_244FAF
	.globl gText_Rom_244FAF
gText_Rom_244FAF: @ 0x08244FAF
	.string "{0xFD}{0x01}は　{0xFD}{0x02}のみを　{0xFD}{0x03}こ　とった！$"
	.if (. - gText_Rom_244FAF) > 0x13
	.error "gText_Rom_244FAF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244FAF) < 0x13
	.space 0x13 - (. - gText_Rom_244FAF)
	.endif
