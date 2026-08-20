	@ field-script:0x24346F FieldScriptText_243D82
	.globl gText_Rom_243D82
gText_Rom_243D82: @ 0x08243D82
	.string "{0xFD}{0x01}は\n{0xFD}{0x02}を　わたした！{EOS}"
	.if (. - gText_Rom_243D82) > 0xe
	.error "gText_Rom_243D82 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243D82) < 0xe
	.space 0xe - (. - gText_Rom_243D82)
	.endif
