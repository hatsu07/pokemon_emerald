	@ field-script:0x1E25F3 FieldScriptText_263FB4
	.globl gText_Rom_263FB4
gText_Rom_263FB4: @ 0x08263FB4
	.string "あと　{0xFD}{0x02}には　キリの　だいすきな\nこの　きのみも　あげちゃう！$"
	.if (. - gText_Rom_263FB4) > 0x21
	.error "gText_Rom_263FB4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263FB4) < 0x21
	.space 0x21 - (. - gText_Rom_263FB4)
	.endif
