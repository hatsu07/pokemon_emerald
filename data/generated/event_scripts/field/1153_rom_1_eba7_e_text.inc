	@ field-script:0x1EB862 FieldScriptText_1EBA7E
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EBA7E
gText_Rom_1EBA7E: @ 0x081EBA7E
	.string "ここは　115ばん　どうろ\n{ESCAPE}{0x01}　カナズミシティ$"
	.if (. - gText_Rom_1EBA7E) != 0x1a
	.error "gText_Rom_1EBA7E must retain its original byte length"
	.endif
