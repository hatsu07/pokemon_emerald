	@ field-script:0x1EB561 FieldScriptText_1EB7B3
	.globl gText_Rom_1EB7B3
gText_Rom_1EB7B3: @ 0x081EB7B3
	.string "ばうっ！！　ばばうっ！！{EOS}"
	.if (. - gText_Rom_1EB7B3) > 0xd
	.error "gText_Rom_1EB7B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB7B3) < 0xd
	.space 0xd - (. - gText_Rom_1EB7B3)
	.endif
