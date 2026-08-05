	@ field-script:0x23603A FieldScriptText_23645D
	.globl gText_Rom_23645D
gText_Rom_23645D: @ 0x0823645D
	.string "インドメタシンで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23645D) > 0x13
	.error "gText_Rom_23645D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23645D) < 0x13
	.space 0x13 - (. - gText_Rom_23645D)
	.endif
