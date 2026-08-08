	@ field-script:0x255088 FieldScriptText_254F01
	.globl gText_Rom_254F01
gText_Rom_254F01: @ 0x08254F01
	.string "これ　わしが　もってる　グッズ\nなにか　ほしいの　あったら　いってね"
	.byte EOS
	.if (. - gText_Rom_254F01) > 0x23
	.error "gText_Rom_254F01 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F01) < 0x23
	.space 0x23 - (. - gText_Rom_254F01)
	.endif
