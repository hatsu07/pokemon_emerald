	@ field-script:0x1EA616 FieldScriptText_1EAC01
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EAC01
gText_Rom_1EAC01: @ 0x081EAC01
	.string "ここは　111ばん　どうろ\n{ESCAPE}{0x02}　113ばん　どうろ$"
	.if (. - gText_Rom_1EAC01) != 0x1c
	.error "gText_Rom_1EAC01 must retain its original byte length"
	.endif
