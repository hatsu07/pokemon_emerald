	@ field-script:0x1EDC3F FieldScriptText_1EE0A3
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EE0A3
gText_Rom_1EE0A3: @ 0x081EE0A3
	.string "ここは　120ばん　どうろ\n{ESCAPE}{0x02}　ヒワマキシティ{EOS}"
	.if (. - gText_Rom_1EE0A3) != 0x1a
	.error "gText_Rom_1EE0A3 must retain its original byte length"
	.endif
