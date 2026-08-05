	@ field-script:0x1E6839 FieldScriptText_1E6A40
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E6A40
gText_Rom_1E6A40: @ 0x081E6A40
	.string "ここは　102ばん　どうろ\n{ESCAPE}{0x02}　トウカシティ$"
	.if (. - gText_Rom_1E6A40) != 0x19
	.error "gText_Rom_1E6A40 must retain its original byte length"
	.endif
