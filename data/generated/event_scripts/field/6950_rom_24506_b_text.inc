	@ field-script:0x245B9B FieldScriptText_24506B
	.globl gText_Rom_24506B
gText_Rom_24506B: @ 0x0824506B
	.string "ツルを　おとせば　うえに　のぼれそう{EOS}"
	.if (. - gText_Rom_24506B) > 0x13
	.error "gText_Rom_24506B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24506B) < 0x13
	.space 0x13 - (. - gText_Rom_24506B)
	.endif
