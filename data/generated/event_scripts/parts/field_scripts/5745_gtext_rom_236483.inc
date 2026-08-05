	@ field-script:0x2361AC FieldScriptText_236483
	.globl gText_Rom_236483
gText_Rom_236483: @ 0x08236483
	.string "ひかりのこなで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236483) > 0x12
	.error "gText_Rom_236483 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236483) < 0x12
	.space 0x12 - (. - gText_Rom_236483)
	.endif
