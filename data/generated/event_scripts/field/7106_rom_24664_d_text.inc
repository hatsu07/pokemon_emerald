	@ field-script:0x21D510 FieldScriptText_24664D
	.globl gText_Rom_24664D
gText_Rom_24664D: @ 0x0824664D
	.string "とうろく　しました！$"
	.if (. - gText_Rom_24664D) > 0xb
	.error "gText_Rom_24664D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24664D) < 0xb
	.space 0xb - (. - gText_Rom_24664D)
	.endif
