	@ field-script:0x25926B FieldScriptText_258C16
	.globl gText_Rom_258C16
gText_Rom_258C16: @ 0x08258C16
	.string "{0xFD}{0x02}さん　{0xFD}{0x03}さん\n{0xFD}{0x04}さんが　きました"
	.byte EOS
	.if (. - gText_Rom_258C16) > 0x15
	.error "gText_Rom_258C16 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_258C16) < 0x15
	.space 0x15 - (. - gText_Rom_258C16)
	.endif
