	@ field-script:0x1E8F23 FieldScriptText_1E9E44
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9E44
gText_Rom_1E9E44: @ 0x081E9E44
	.string "ここは　110ばん　どうろ\n{ESCAPE}{0x01}　カイナシティ$"
	.if (. - gText_Rom_1E9E44) != 0x19
	.error "gText_Rom_1E9E44 must retain its original byte length"
	.endif
