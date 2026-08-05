	@ field-script:0x23A54A FieldScriptText_23AE22
	.globl gText_Rom_23AE22
gText_Rom_23AE22: @ 0x0823AE22
	.string "こちらでは　フロンティアパスの\nせつめいを　いたします！"
	.byte EOS
	.if (. - gText_Rom_23AE22) > 0x1d
	.error "gText_Rom_23AE22 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AE22) < 0x1d
	.space 0x1d - (. - gText_Rom_23AE22)
	.endif
