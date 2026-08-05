	@ field-script:0x236215 FieldScriptText_2364F5
	.globl gText_Rom_2364F5
gText_Rom_2364F5: @ 0x082364F5
	.string "きあいのハチマキで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2364F5) > 0x14
	.error "gText_Rom_2364F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2364F5) < 0x14
	.space 0x14 - (. - gText_Rom_2364F5)
	.endif
