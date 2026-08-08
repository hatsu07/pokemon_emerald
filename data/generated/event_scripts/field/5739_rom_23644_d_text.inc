	@ field-script:0x236017 FieldScriptText_23644D
	.globl gText_Rom_23644D
gText_Rom_23644D: @ 0x0823644D
	.string "キトサンで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23644D) > 0x10
	.error "gText_Rom_23644D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23644D) < 0x10
	.space 0x10 - (. - gText_Rom_23644D)
	.endif
