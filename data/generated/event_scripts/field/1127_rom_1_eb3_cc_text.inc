	@ field-script:0x1EB19E FieldScriptText_1EB3CC
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB3CC
gText_Rom_1EB3CC: @ 0x081EB3CC
	.string "ここは　113ばん　どうろ\n{ESCAPE}{0x03}　111ばん　どうろ$"
	.if (. - gText_Rom_1EB3CC) != 0x1c
	.error "gText_Rom_1EB3CC must retain its original byte length"
	.endif
