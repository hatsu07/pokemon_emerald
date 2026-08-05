	@ field-script:0x1EA60D FieldScriptText_1EABE5
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EABE5
gText_Rom_1EABE5: @ 0x081EABE5
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x02}　112ばん　どうろ$"
	.if (. - gText_Rom_1EABE5) != 0x1c
	.error "gText_Rom_1EABE5 must retain its original byte length"
	.endif
