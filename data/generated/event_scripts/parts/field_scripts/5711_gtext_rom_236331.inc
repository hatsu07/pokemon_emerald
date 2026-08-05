	@ field-script:0x235D17 FieldScriptText_236331
	.globl gText_Rom_236331
gText_Rom_236331: @ 0x08236331
	.string "トゲピードールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236331) > 0x13
	.error "gText_Rom_236331 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236331) < 0x13
	.space 0x13 - (. - gText_Rom_236331)
	.endif

	@ field-script:0x235D3A FieldScriptText_236344
	.globl gText_Rom_236344
gText_Rom_236344: @ 0x08236344
	.string "ニャースドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236344) > 0x13
	.error "gText_Rom_236344 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236344) < 0x13
	.space 0x13 - (. - gText_Rom_236344)
	.endif
