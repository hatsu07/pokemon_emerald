	@ field-script:0x25691A FieldScriptText_2569B8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2569B8
gText_Rom_2569B8: @ 0x082569B8
	.string "{0xFD}{0x02}　は　ダイビングを　つかった！"
	.byte EOS
	.if (. - gText_Rom_2569B8) != 0x12
	.error "gText_Rom_2569B8 must retain its original byte length"
	.endif
