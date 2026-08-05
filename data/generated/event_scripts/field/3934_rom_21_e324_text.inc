	@ field-script:0x21E036 FieldScriptText_21E324
	.globl gText_Rom_21E324
gText_Rom_21E324: @ 0x0821E324
	.string "まっ　ふなたびを　たのしんでくれよ"
	.byte EOS
	.if (. - gText_Rom_21E324) > 0x12
	.error "gText_Rom_21E324 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E324) < 0x12
	.space 0x12 - (. - gText_Rom_21E324)
	.endif
