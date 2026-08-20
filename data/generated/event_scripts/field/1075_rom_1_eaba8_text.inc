	@ field-script:0x1EA5FB FieldScriptText_1EABA8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EABA8
gText_Rom_1EABA8: @ 0x081EABA8
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x01}　キンセツシティ{EOS}"
	.if (. - gText_Rom_1EABA8) != 0x1a
	.error "gText_Rom_1EABA8 must retain its original byte length"
	.endif
