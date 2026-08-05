	@ field-script:0x25634E FieldScriptText_2551B4
	.globl gText_Rom_2551B4
gText_Rom_2551B4: @ 0x082551B4
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_2551B4) > 0xf
	.error "gText_Rom_2551B4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551B4) < 0xf
	.space 0xf - (. - gText_Rom_2551B4)
	.endif
