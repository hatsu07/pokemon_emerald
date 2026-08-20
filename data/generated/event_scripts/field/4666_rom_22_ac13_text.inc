	@ field-script:0x229EA9 FieldScriptText_22AC13
	.globl gText_Rom_22AC13
gText_Rom_22AC13: @ 0x0822AC13
	.string "バトルパレスで\nさいごに　おこなった　たたかいを\lフロンティアパスに　きろく　するか？{EOS}"
	.if (. - gText_Rom_22AC13) > 0x2c
	.error "gText_Rom_22AC13 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22AC13) < 0x2c
	.space 0x2c - (. - gText_Rom_22AC13)
	.endif
