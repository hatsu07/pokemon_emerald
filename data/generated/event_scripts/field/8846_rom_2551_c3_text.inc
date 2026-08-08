	@ field-script:0x2562B7 FieldScriptText_2551C3
	.globl gText_Rom_2551C3
gText_Rom_2551C3: @ 0x082551C3
	.string "わしが　しってる　でんせつは　これだけ\nどの　でんせつが　ききたい？"
	.byte EOS
	.if (. - gText_Rom_2551C3) > 0x23
	.error "gText_Rom_2551C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551C3) < 0x23
	.space 0x23 - (. - gText_Rom_2551C3)
	.endif
