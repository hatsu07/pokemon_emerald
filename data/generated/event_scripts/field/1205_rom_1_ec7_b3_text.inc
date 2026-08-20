	@ field-script:0x1EC466 FieldScriptText_1EC7B3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EC7B3
gText_Rom_1EC7B3: @ 0x081EC7B3
	.string "ここは　117ばん　どうろ\n{ESCAPE}{0x03}　キンセツシティ{EOS}"
	.if (. - gText_Rom_1EC7B3) != 0x1a
	.error "gText_Rom_1EC7B3 must retain its original byte length"
	.endif
