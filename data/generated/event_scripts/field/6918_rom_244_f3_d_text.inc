	@ field-script:0x244DDD FieldScriptText_244F3D
	.globl gText_Rom_244F3D
gText_Rom_244F3D: @ 0x08244F3D
	.string "{0xFD}{0x02}のみを　うめた　ばしょだ！{EOS}"
	.if (. - gText_Rom_244F3D) > 0x10
	.error "gText_Rom_244F3D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F3D) < 0x10
	.space 0x10 - (. - gText_Rom_244F3D)
	.endif
