	@ field-script:0x21D543 FieldScriptText_24661D
	.globl gText_Rom_24661D
gText_Rom_24661D: @ 0x0824661D
	.string "とうろく　できる　かずは\n10かしょ　まで　です\pどれか　かいじょ　すれば\nとうろく　できます$"
	.if (. - gText_Rom_24661D) > 0x30
	.error "gText_Rom_24661D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24661D) < 0x30
	.space 0x30 - (. - gText_Rom_24661D)
	.endif
