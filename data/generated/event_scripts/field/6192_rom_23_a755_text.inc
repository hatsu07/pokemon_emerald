	@ field-script:0x23A366 FieldScriptText_23A755
	.globl gText_Rom_23A755
gText_Rom_23A755: @ 0x0823A755
	.string "こちらでは　バトルフロンティアに　ある\nさまざまな　しせつの\lごあんないを　いたします！"
	.byte EOS
	.if (. - gText_Rom_23A755) > 0x2d
	.error "gText_Rom_23A755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A755) < 0x2d
	.space 0x2d - (. - gText_Rom_23A755)
	.endif
