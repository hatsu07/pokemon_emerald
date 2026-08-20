	@ field-script:0x1E6CB8 FieldScriptText_1E7115
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E7115
gText_Rom_1E7115: @ 0x081E7115
	.string "ここは　103ばん　どうろ\n{ESCAPE}{0x01}　コトキタウン{EOS}"
	.if (. - gText_Rom_1E7115) != 0x19
	.error "gText_Rom_1E7115 must retain its original byte length"
	.endif
