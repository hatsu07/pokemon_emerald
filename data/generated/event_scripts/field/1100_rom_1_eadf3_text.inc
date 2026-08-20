	@ field-script:0x1EA34F FieldScriptText_1EADF3
	.globl gText_Rom_1EADF3
gText_Rom_1EADF3: @ 0x081EADF3
	.string "ねっこのかせきは\nすなに　もぐって　しまった……{EOS}"
	.if (. - gText_Rom_1EADF3) > 0x19
	.error "gText_Rom_1EADF3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EADF3) < 0x19
	.space 0x19 - (. - gText_Rom_1EADF3)
	.endif
