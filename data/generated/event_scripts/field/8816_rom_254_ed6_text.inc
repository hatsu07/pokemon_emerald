	@ field-script:0x255095 FieldScriptText_254ED6
	.globl gText_Rom_254ED6
gText_Rom_254ED6: @ 0x08254ED6
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_254ED6) > 0xf
	.error "gText_Rom_254ED6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254ED6) < 0xf
	.space 0xf - (. - gText_Rom_254ED6)
	.endif
