	@ field-script:0x1EE43B FieldScriptText_1EE753
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EE753
gText_Rom_1EE753: @ 0x081EE753
	.string "{ESCAPE}{0x03}　123ばん　どうろ\n{ESCAPE}{0x02}　118ばん　どうろ$"
	.if (. - gText_Rom_1EE753) != 0x1c
	.error "gText_Rom_1EE753 must retain its original byte length"
	.endif
