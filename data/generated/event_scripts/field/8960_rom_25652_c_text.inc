	@ field-script:0x254E73 FieldScriptText_25652C
	.globl gText_Rom_25652C
gText_Rom_25652C: @ 0x0825652C
	.string "わし　ナウイおやじ\nいまどきの　ナウイことば　おしえるよ"
	.byte EOS
	.if (. - gText_Rom_25652C) > 0x1d
	.error "gText_Rom_25652C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25652C) < 0x1d
	.space 0x1d - (. - gText_Rom_25652C)
	.endif
