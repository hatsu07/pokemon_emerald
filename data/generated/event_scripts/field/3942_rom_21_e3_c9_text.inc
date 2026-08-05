	@ field-script:0x21DF6E FieldScriptText_21E3C9
	.globl gText_Rom_21E3C9
gText_Rom_21E3C9: @ 0x0821E3C9
	.string "1ごうしつ"
	.byte EOS
	.if (. - gText_Rom_21E3C9) > 0x6
	.error "gText_Rom_21E3C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3C9) < 0x6
	.space 0x6 - (. - gText_Rom_21E3C9)
	.endif
