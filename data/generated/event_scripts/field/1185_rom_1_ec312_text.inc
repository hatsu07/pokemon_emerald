	@ field-script:0x1EBC02 FieldScriptText_1EC312
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EC312
gText_Rom_1EC312: @ 0x081EC312
	.string "ここは　116ばん　どうろ\n{ESCAPE}{0x02}　カナズミシティ$"
	.if (. - gText_Rom_1EC312) != 0x1a
	.error "gText_Rom_1EC312 must retain its original byte length"
	.endif
