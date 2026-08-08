	@ field-script:0x1EC8B4 FieldScriptText_1ECCC9
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1ECCC9
gText_Rom_1ECCC9: @ 0x081ECCC9
	.string "ここは　118ばん　どうろ\n{ESCAPE}{0x00}　119ばん　どうろ$"
	.if (. - gText_Rom_1ECCC9) != 0x1c
	.error "gText_Rom_1ECCC9 must retain its original byte length"
	.endif
