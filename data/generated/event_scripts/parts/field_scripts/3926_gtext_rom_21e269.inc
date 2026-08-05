	@ field-script:0x21DEC0 FieldScriptText_21E269
	.globl gText_Rom_21E269
gText_Rom_21E269: @ 0x0821E269
	.string "おつかれさまです　ただいま\nミナモシティに　とうちゃく　しました"
	.byte EOS
	.if (. - gText_Rom_21E269) > 0x21
	.error "gText_Rom_21E269 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E269) < 0x21
	.space 0x21 - (. - gText_Rom_21E269)
	.endif
