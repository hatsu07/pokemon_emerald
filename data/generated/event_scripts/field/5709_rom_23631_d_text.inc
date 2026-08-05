	@ field-script:0x235CF4 FieldScriptText_23631D
	.globl gText_Rom_23631D
gText_Rom_23631D: @ 0x0823631D
	.string "ムチュールドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23631D) > 0x14
	.error "gText_Rom_23631D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23631D) < 0x14
	.space 0x14 - (. - gText_Rom_23631D)
	.endif
