	@ field-script:0x209E3A FieldScriptText_209EC8
	.globl gText_Rom_209EC8
gText_Rom_209EC8: @ 0x08209EC8
	.string "{0xFD}{0x02}は　わざを　1つしか\nもってない　ようじゃ……{EOS}"
	.if (. - gText_Rom_209EC8) > 0x1a
	.error "gText_Rom_209EC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EC8) < 0x1a
	.space 0x1a - (. - gText_Rom_209EC8)
	.endif
