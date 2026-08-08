	@ field-script:0x1F64CF FieldScriptText_22A790
	.globl gText_Rom_22A790
gText_Rom_22A790: @ 0x0822A790
	.string "まっておったぞ……$"
	.if (. - gText_Rom_22A790) > 0xa
	.error "gText_Rom_22A790 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A790) < 0xa
	.space 0xa - (. - gText_Rom_22A790)
	.endif
