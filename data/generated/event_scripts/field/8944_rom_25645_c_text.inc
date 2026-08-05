	@ field-script:0x254DAF FieldScriptText_25645C
	.globl gText_Rom_25645C
gText_Rom_25645C: @ 0x0825645C
	.string "わし　シンガーソングおやじ\nわしの　うた　きいてくれる？"
	.byte EOS
	.if (. - gText_Rom_25645C) > 0x1d
	.error "gText_Rom_25645C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25645C) < 0x1d
	.space 0x1d - (. - gText_Rom_25645C)
	.endif
