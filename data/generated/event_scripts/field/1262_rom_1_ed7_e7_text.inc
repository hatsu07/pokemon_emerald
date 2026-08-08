	@ field-script:0x1ED037 FieldScriptText_1ED7E7
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1ED7E7
gText_Rom_1ED7E7: @ 0x081ED7E7
	.string "ここは　119ばん　どうろ\n{ESCAPE}{0x03}　ヒワマキシティ$"
	.if (. - gText_Rom_1ED7E7) != 0x1a
	.error "gText_Rom_1ED7E7 must retain its original byte length"
	.endif
