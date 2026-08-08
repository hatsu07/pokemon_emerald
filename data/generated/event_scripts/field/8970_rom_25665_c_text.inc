	@ field-script:0x245B24 FieldScriptText_25665C
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25665C
gText_Rom_25665C: @ 0x0825665C
	.string "{0xFD}{0x02}　は\n{0xFD}{0x03}を　つかった！"
	.byte EOS
	.if (. - gText_Rom_25665C) != 0xf
	.error "gText_Rom_25665C must retain its original byte length"
	.endif
