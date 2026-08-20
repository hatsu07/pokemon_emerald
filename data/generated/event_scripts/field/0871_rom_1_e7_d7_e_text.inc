	@ field-script:0x1E7528 FieldScriptText_1E7D7E
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7D7E
gText_Rom_1E7D7E: @ 0x081E7D7E
	.string "ここは　104ばん　どうろ\n{ESCAPE}{0x00}　カナズミシティ{EOS}"
	.if (. - gText_Rom_1E7D7E) != 0x1a
	.error "gText_Rom_1E7D7E must retain its original byte length"
	.endif
