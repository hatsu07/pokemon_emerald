	@ field-script:0x2361F2 FieldScriptText_2364E1
	.globl gText_Rom_2364E1
gText_Rom_2364E1: @ 0x082364E1
	.string "おうじゃのしるしで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2364E1) > 0x14
	.error "gText_Rom_2364E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2364E1) < 0x14
	.space 0x14 - (. - gText_Rom_2364E1)
	.endif
