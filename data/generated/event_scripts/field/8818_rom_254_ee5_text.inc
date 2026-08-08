	@ field-script:0x25509F FieldScriptText_254EE5
	.globl gText_Rom_254EE5
gText_Rom_254EE5: @ 0x08254EE5
	.string "でも　きみとは　このまえ\nグッズの　こうかん　したよね"
	.byte EOS
	.if (. - gText_Rom_254EE5) > 0x1c
	.error "gText_Rom_254EE5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254EE5) < 0x1c
	.space 0x1c - (. - gText_Rom_254EE5)
	.endif
