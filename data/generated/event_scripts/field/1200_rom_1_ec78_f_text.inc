	@ field-script:0x1EC44B FieldScriptText_1EC78F
	.globl gText_Rom_1EC78F
gText_Rom_1EC78F: @ 0x081EC78F
	.string "くうきが　うまーい！$"
	.if (. - gText_Rom_1EC78F) > 0xb
	.error "gText_Rom_1EC78F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EC78F) < 0xb
	.space 0xb - (. - gText_Rom_1EC78F)
	.endif
