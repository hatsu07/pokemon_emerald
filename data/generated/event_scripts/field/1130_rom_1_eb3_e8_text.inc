	@ field-script:0x1EB1A7 FieldScriptText_1EB3E8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EB3E8
gText_Rom_1EB3E8: @ 0x081EB3E8
	.string "ここは　113ばん　どうろ\n{ESCAPE}{0x02}　ハジツゲタウン$"
	.if (. - gText_Rom_1EB3E8) != 0x1a
	.error "gText_Rom_1EB3E8 must retain its original byte length"
	.endif
