	@ field-script:0x242E2C FieldScriptText_2436B8
	.globl gText_Rom_2436B8
gText_Rom_2436B8: @ 0x082436B8
	.string "{0xFD}{0x01}は\nパソコンの　スイッチを　いれた！$"
	.if (. - gText_Rom_2436B8) > 0x15
	.error "gText_Rom_2436B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2436B8) < 0x15
	.space 0x15 - (. - gText_Rom_2436B8)
	.endif
