	@ field-script:0x256889 FieldScriptText_2568D8
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2568D8
gText_Rom_2568D8: @ 0x082568D8
	.string "{0xFD}{0x02}　は　たきのぼりを　つかった！"
	.byte EOS
	.if (. - gText_Rom_2568D8) != 0x12
	.error "gText_Rom_2568D8 must retain its original byte length"
	.endif
