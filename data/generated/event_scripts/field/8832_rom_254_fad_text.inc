	@ field-script:0x25517E FieldScriptText_254FAD
	.globl gText_Rom_254FAD
gText_Rom_254FAD: @ 0x08254FAD
	.string "きみ　{0xFD}{0x03}が　いっぱいで\nもう　もてないよ"
	.byte EOS
	.if (. - gText_Rom_254FAD) > 0x16
	.error "gText_Rom_254FAD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254FAD) < 0x16
	.space 0x16 - (. - gText_Rom_254FAD)
	.endif
