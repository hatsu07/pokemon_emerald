	@ field-script:0x21D3AF FieldScriptText_246669
	.globl gText_Rom_246669
gText_Rom_246669: @ 0x08246669
	.string "{0xFD}{0x01}は\nパソコンの　スイッチを　いれた！$"
	.if (. - gText_Rom_246669) > 0x15
	.error "gText_Rom_246669 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_246669) < 0x15
	.space 0x15 - (. - gText_Rom_246669)
	.endif
