	@ field-script:0x248B81 FieldScriptText_24A165
	.globl gText_Rom_24A165
gText_Rom_24A165: @ 0x0824A165
	.string "それでは　また　あとで\nとりに　きて　くださいね！$"
	.if (. - gText_Rom_24A165) > 0x1a
	.error "gText_Rom_24A165 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A165) < 0x1a
	.space 0x1a - (. - gText_Rom_24A165)
	.endif
