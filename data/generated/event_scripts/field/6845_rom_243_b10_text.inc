	@ field-script:0x1F01E2 FieldScriptText_243B10
	.globl gText_Rom_243B10
gText_Rom_243B10: @ 0x08243B10
	.string "{0xFD}{0x01}は　パソコンの\nスイッチを　いれた！{EOS}"
	.if (. - gText_Rom_243B10) > 0x15
	.error "gText_Rom_243B10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_243B10) < 0x15
	.space 0x15 - (. - gText_Rom_243B10)
	.endif
