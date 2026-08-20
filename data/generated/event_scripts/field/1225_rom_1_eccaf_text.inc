	@ field-script:0x1EC8AB FieldScriptText_1ECCAF
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1ECCAF
gText_Rom_1ECCAF: @ 0x081ECCAF
	.string "ここは　118ばん　どうろ\n{ESCAPE}{0x02}　キンセツシティ{EOS}"
	.if (. - gText_Rom_1ECCAF) != 0x1a
	.error "gText_Rom_1ECCAF must retain its original byte length"
	.endif
