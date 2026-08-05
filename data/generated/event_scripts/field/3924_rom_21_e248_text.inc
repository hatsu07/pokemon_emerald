	@ field-script:0x21DF02 FieldScriptText_21E248
	.globl gText_Rom_21E248
gText_Rom_21E248: @ 0x0821E248
	.string "おつかれさまです　ただいま\nカイナシティに　とうちゃく　しました"
	.byte EOS
	.if (. - gText_Rom_21E248) > 0x21
	.error "gText_Rom_21E248 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E248) < 0x21
	.space 0x21 - (. - gText_Rom_21E248)
	.endif
