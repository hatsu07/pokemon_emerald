	@ field-script:0x212A9D FieldScriptText_26267F
	.globl gText_Rom_26267F
gText_Rom_26267F: @ 0x0826267F
	.string "それでは　500えん　いただきます$"
	.if (. - gText_Rom_26267F) > 0x12
	.error "gText_Rom_26267F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26267F) < 0x12
	.space 0x12 - (. - gText_Rom_26267F)
	.endif
