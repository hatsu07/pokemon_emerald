	@ field-script:0x1E8F50 FieldScriptText_1E9EEB
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9EEB
gText_Rom_1E9EEB: @ 0x081E9EEB
	.string "ここは　110ばん　どうろ\n{ESCAPE}{0x00}　キンセツシティ$"
	.if (. - gText_Rom_1E9EEB) != 0x1a
	.error "gText_Rom_1E9EEB must retain its original byte length"
	.endif
