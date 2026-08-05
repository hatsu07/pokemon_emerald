	@ field-script:0x254E44 FieldScriptText_256500
	.globl gText_Rom_256500
gText_Rom_256500: @ 0x08256500
	.string "こんな　かんじで　いいの？"
	.byte EOS
	.if (. - gText_Rom_256500) > 0xe
	.error "gText_Rom_256500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_256500) < 0xe
	.space 0xe - (. - gText_Rom_256500)
	.endif
