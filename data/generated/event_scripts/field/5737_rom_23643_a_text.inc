	@ field-script:0x235FF4 FieldScriptText_23643A
	.globl gText_Rom_23643A
gText_Rom_23643A: @ 0x0823643A
	.string "ブロムヘキシンで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23643A) > 0x13
	.error "gText_Rom_23643A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23643A) < 0x13
	.space 0x13 - (. - gText_Rom_23643A)
	.endif
