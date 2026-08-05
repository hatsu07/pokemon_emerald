	@ field-script:0x244E47 FieldScriptText_244F92
	.globl gText_Rom_244F92
gText_Rom_244F92: @ 0x08244F92
	.string "{0xFD}{0x02}のみが　{0xFD}{0x03}こ　できてる！\p{0xFD}{0x02}のみを　とりますか？$"
	.if (. - gText_Rom_244F92) > 0x1d
	.error "gText_Rom_244F92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F92) < 0x1d
	.space 0x1d - (. - gText_Rom_244F92)
	.endif
