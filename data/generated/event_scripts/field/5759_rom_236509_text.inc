	@ field-script:0x236238 FieldScriptText_236509
	.globl gText_Rom_236509
gText_Rom_236509: @ 0x08236509
	.string "ピントレンズで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236509) > 0x12
	.error "gText_Rom_236509 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236509) < 0x12
	.space 0x12 - (. - gText_Rom_236509)
	.endif
