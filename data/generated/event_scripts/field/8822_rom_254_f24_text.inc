	@ field-script:0x2550EA FieldScriptText_254F24
	.globl gText_Rom_254F24
gText_Rom_254F24: @ 0x08254F24
	.string "ほしい　グッズ　ないの？\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254F24) > 0x17
	.error "gText_Rom_254F24 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F24) < 0x17
	.space 0x17 - (. - gText_Rom_254F24)
	.endif
