	@ field-script:0x244E09 FieldScriptText_244F6E
	.globl gText_Rom_244F6E
gText_Rom_244F6E: @ 0x08244F6E
	.string "{0xFD}{0x02}の　はなが　{0xFD}{0x03}　さいてる！$"
	.if (. - gText_Rom_244F6E) > 0x11
	.error "gText_Rom_244F6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F6E) < 0x11
	.space 0x11 - (. - gText_Rom_244F6E)
	.endif
