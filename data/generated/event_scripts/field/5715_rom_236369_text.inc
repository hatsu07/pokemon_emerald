	@ field-script:0x235D80 FieldScriptText_236369
	.globl gText_Rom_236369
gText_Rom_236369: @ 0x08236369
	.string "メタモンドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236369) > 0x13
	.error "gText_Rom_236369 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236369) < 0x13
	.space 0x13 - (. - gText_Rom_236369)
	.endif
