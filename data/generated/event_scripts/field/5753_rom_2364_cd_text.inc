	@ field-script:0x2361CF FieldScriptText_2364CD
	.globl gText_Rom_2364CD
gText_Rom_2364CD: @ 0x082364CD
	.string "こだわりハチマキで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2364CD) > 0x14
	.error "gText_Rom_2364CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2364CD) < 0x14
	.space 0x14 - (. - gText_Rom_2364CD)
	.endif
