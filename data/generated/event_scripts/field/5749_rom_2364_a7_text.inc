	@ field-script:0x236166 FieldScriptText_2364A7
	.globl gText_Rom_2364A7
gText_Rom_2364A7: @ 0x082364A7
	.string "せんせいのツメで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2364A7) > 0x13
	.error "gText_Rom_2364A7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2364A7) < 0x13
	.space 0x13 - (. - gText_Rom_2364A7)
	.endif
