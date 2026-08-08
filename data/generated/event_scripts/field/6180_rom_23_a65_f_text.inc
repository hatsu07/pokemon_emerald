	@ field-script:0x23A28F FieldScriptText_23A65F
	.globl gText_Rom_23A65F
gText_Rom_23A65F: @ 0x0823A65F
	.string "{0xFD}{0x01}は\nフロンティアパスを　もらった！"
	.byte EOS
	.if (. - gText_Rom_23A65F) > 0x14
	.error "gText_Rom_23A65F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A65F) < 0x14
	.space 0x14 - (. - gText_Rom_23A65F)
	.endif
