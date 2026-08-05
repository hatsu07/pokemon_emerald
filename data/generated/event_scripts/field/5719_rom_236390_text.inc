	@ field-script:0x235DC6 FieldScriptText_236390
	.globl gText_Rom_236390
gText_Rom_236390: @ 0x08236390
	.string "チコリータドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236390) > 0x14
	.error "gText_Rom_236390 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236390) < 0x14
	.space 0x14 - (. - gText_Rom_236390)
	.endif
