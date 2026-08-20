	@ field-script:0x212B24 FieldScriptText_262672
	.globl gText_Rom_262672
gText_Rom_262672: @ 0x08262672
	.string "おかねが　たりませんよ！{EOS}"
	.if (. - gText_Rom_262672) > 0xd
	.error "gText_Rom_262672 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262672) < 0xd
	.space 0xd - (. - gText_Rom_262672)
	.endif
