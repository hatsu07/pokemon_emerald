	@ field-script:0x244D7B FieldScriptText_245069
	.globl gText_Rom_245069
gText_Rom_245069: @ 0x08245069
	.string "！$"
	.if (. - gText_Rom_245069) > 0x2
	.error "gText_Rom_245069 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_245069) < 0x2
	.space 0x2 - (. - gText_Rom_245069)
	.endif
