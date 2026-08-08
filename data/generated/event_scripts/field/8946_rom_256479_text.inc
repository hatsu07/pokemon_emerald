	@ field-script:0x254DF1 FieldScriptText_256479
	.globl gText_Rom_256479
gText_Rom_256479: @ 0x08256479
	.string "そう……\nわし　ざんねん……"
	.byte EOS
	.if (. - gText_Rom_256479) > 0xf
	.error "gText_Rom_256479 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256479) < 0xf
	.space 0xf - (. - gText_Rom_256479)
	.endif
