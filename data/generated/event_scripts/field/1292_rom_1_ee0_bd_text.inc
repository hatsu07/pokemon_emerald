	@ field-script:0x1EDC48 FieldScriptText_1EE0BD
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EE0BD
gText_Rom_1EE0BD: @ 0x081EE0BD
	.string "{ESCAPE}{0x03}　121ばん　どうろ\n{ESCAPE}{0x02}　120ばん　どうろ$"
	.if (. - gText_Rom_1EE0BD) != 0x1c
	.error "gText_Rom_1EE0BD must retain its original byte length"
	.endif
