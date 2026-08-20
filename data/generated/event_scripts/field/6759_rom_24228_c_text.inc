	@ field-script:0x2420F1 FieldScriptText_24228C
	.globl gText_Rom_24228C
gText_Rom_24228C: @ 0x0824228C
	.string "{0xFD}{0x02}　を　{0xFD}{0x03}に\nこうかん　するんだな？{EOS}"
	.if (. - gText_Rom_24228C) > 0x15
	.error "gText_Rom_24228C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24228C) < 0x15
	.space 0x15 - (. - gText_Rom_24228C)
	.endif
