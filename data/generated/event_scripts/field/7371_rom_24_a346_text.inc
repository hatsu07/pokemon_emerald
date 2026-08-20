	@ field-script:0x249737 FieldScriptText_24A346
	.globl gText_Rom_24A346
gText_Rom_24A346: @ 0x0824A346
	.string "しかい『はあい　そこまでえーー！{EOS}"
	.if (. - gText_Rom_24A346) > 0x11
	.error "gText_Rom_24A346 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A346) < 0x11
	.space 0x11 - (. - gText_Rom_24A346)
	.endif
