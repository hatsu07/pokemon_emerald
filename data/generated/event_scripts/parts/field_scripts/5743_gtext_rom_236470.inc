	@ field-script:0x23605D FieldScriptText_236470
	.globl gText_Rom_236470
gText_Rom_236470: @ 0x08236470
	.string "マックスアップで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236470) > 0x13
	.error "gText_Rom_236470 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236470) < 0x13
	.space 0x13 - (. - gText_Rom_236470)
	.endif
