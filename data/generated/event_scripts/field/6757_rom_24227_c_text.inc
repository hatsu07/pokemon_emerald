	@ field-script:0x241D06 FieldScriptText_24227C
	.globl gText_Rom_24227C
gText_Rom_24227C: @ 0x0824227C
	.string "どれを　こうかん　するんだい？{EOS}"
	.if (. - gText_Rom_24227C) > 0x10
	.error "gText_Rom_24227C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24227C) < 0x10
	.space 0x10 - (. - gText_Rom_24227C)
	.endif
