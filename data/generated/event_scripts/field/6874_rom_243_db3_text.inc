	@ field-script:0x242D28 FieldScriptText_243DB3
	.globl gText_Rom_243DB3
gText_Rom_243DB3: @ 0x08243DB3
	.string "{0xFD}{0x01}は　{0xFD}{0x02}\n「{0xFD}{0x03}」を　みつけた！{EOS}"
	.if (. - gText_Rom_243DB3) > 0x13
	.error "gText_Rom_243DB3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243DB3) < 0x13
	.space 0x13 - (. - gText_Rom_243DB3)
	.endif
