	@ field-script:0x235CD1 FieldScriptText_236309
	.globl gText_Rom_236309
gText_Rom_236309: @ 0x08236309
	.string "キッスクッションで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_236309) > 0x14
	.error "gText_Rom_236309 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_236309) < 0x14
	.space 0x14 - (. - gText_Rom_236309)
	.endif
