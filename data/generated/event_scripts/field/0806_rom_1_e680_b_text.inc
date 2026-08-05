	@ field-script:0x1E660B FieldScriptText_1E680B
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E680B
gText_Rom_1E680B: @ 0x081E680B
	.string "ここは　101ばん　どうろ\n{ESCAPE}{0x00}　コトキタウン$"
	.if (. - gText_Rom_1E680B) != 0x19
	.error "gText_Rom_1E680B must retain its original byte length"
	.endif
