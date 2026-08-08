	@ field-script:0x235F0C FieldScriptText_236405
	.globl gText_Rom_236405
gText_Rom_236405: @ 0x08236405
	.string "カメックスドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236405) > 0x14
	.error "gText_Rom_236405 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236405) < 0x14
	.space 0x14 - (. - gText_Rom_236405)
	.endif
