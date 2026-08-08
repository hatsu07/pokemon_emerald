	@ field-script:0x255166 FieldScriptText_254F94
	.globl gText_Rom_254F94
gText_Rom_254F94: @ 0x08254F94
	.string "こうかん　して　くれないの？\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254F94) > 0x19
	.error "gText_Rom_254F94 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F94) < 0x19
	.space 0x19 - (. - gText_Rom_254F94)
	.endif
