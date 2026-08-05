	@ field-script:0x21DF63 FieldScriptText_21E3B8
	.globl gText_Rom_21E3B8
gText_Rom_21E3B8: @ 0x0821E3B8
	.string "ピーコ『ピひょ　ピひょひょ……！"
	.byte EOS
	.if (. - gText_Rom_21E3B8) > 0x11
	.error "gText_Rom_21E3B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E3B8) < 0x11
	.space 0x11 - (. - gText_Rom_21E3B8)
	.endif
