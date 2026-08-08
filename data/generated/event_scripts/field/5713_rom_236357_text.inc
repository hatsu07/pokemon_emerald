	@ field-script:0x235D5D FieldScriptText_236357
	.globl gText_Rom_236357
gText_Rom_236357: @ 0x08236357
	.string "ピッピドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236357) > 0x12
	.error "gText_Rom_236357 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236357) < 0x12
	.space 0x12 - (. - gText_Rom_236357)
	.endif
