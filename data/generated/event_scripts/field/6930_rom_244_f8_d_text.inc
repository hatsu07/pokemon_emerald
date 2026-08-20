	@ field-script:0x244E2C FieldScriptText_244F8D
	.globl gText_Rom_244F8D
gText_Rom_244F8D: @ 0x08244F8D
	.string "きれいに{EOS}"
	.if (. - gText_Rom_244F8D) > 0x5
	.error "gText_Rom_244F8D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_244F8D) < 0x5
	.space 0x5 - (. - gText_Rom_244F8D)
	.endif
