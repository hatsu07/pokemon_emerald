	@ field-script:0x245BA5 FieldScriptText_2450A2
	.globl gText_Rom_2450A2
gText_Rom_2450A2: @ 0x082450A2
	.string "ふといツルが　おちてきた！{EOS}"
	.if (. - gText_Rom_2450A2) > 0xe
	.error "gText_Rom_2450A2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2450A2) < 0xe
	.space 0xe - (. - gText_Rom_2450A2)
	.endif
