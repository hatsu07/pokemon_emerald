	@ field-script:0x21DFB7 FieldScriptText_21E2E5
	.globl gText_Rom_21E2E5
gText_Rom_21E2E5: @ 0x0821E2E5
	.string "とうちゃく　したぞ！"
	.byte EOS
	.if (. - gText_Rom_21E2E5) > 0xb
	.error "gText_Rom_21E2E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21E2E5) < 0xb
	.space 0xb - (. - gText_Rom_21E2E5)
	.endif
