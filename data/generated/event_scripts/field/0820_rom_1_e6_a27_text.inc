	@ field-script:0x1E6830 FieldScriptText_1E6A27
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E6A27
gText_Rom_1E6A27: @ 0x081E6A27
	.string "ここは　102ばん　どうろ\n{ESCAPE}{0x03}　コトキタウン$"
	.if (. - gText_Rom_1E6A27) != 0x19
	.error "gText_Rom_1E6A27 must retain its original byte length"
	.endif
