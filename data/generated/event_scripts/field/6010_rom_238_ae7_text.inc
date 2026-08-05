	@ field-script:0x238973 FieldScriptText_238AE7
	.globl gText_Rom_238AE7
gText_Rom_238AE7: @ 0x08238AE7
	.string "{0xFD}{0x01}は　バトルポイントを\n{0xFD}{0x02}　BP　もらった！"
	.byte EOS
	.if (. - gText_Rom_238AE7) > 0x19
	.error "gText_Rom_238AE7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_238AE7) < 0x19
	.space 0x19 - (. - gText_Rom_238AE7)
	.endif
