	@ field-script:0x1E8F3E FieldScriptText_1E9EC1
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1E9EC1
gText_Rom_1E9EC1: @ 0x081E9EC1
	.string "ここは　110ばん　どうろ\n{ESCAPE}{0x02}　103ばん　どうろ{EOS}"
	.if (. - gText_Rom_1E9EC1) != 0x1c
	.error "gText_Rom_1E9EC1 must retain its original byte length"
	.endif
