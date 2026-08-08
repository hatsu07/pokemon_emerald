	@ field-script:0x21E00D FieldScriptText_21E336
	.globl gText_Rom_21E336
gText_Rom_21E336: @ 0x0821E336
	.string "まどの　むこうに\nすいへいせんが　ひろがっている！"
	.byte EOS
	.if (. - gText_Rom_21E336) > 0x1a
	.error "gText_Rom_21E336 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E336) < 0x1a
	.space 0x1a - (. - gText_Rom_21E336)
	.endif
