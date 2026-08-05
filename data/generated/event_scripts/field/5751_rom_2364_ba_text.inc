	@ field-script:0x236189 FieldScriptText_2364BA
	.globl gText_Rom_2364BA
gText_Rom_2364BA: @ 0x082364BA
	.string "メンタルハーブで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2364BA) > 0x13
	.error "gText_Rom_2364BA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2364BA) < 0x13
	.space 0x13 - (. - gText_Rom_2364BA)
	.endif
