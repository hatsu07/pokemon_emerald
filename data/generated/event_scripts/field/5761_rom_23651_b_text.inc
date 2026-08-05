	@ field-script:0x236120 FieldScriptText_23651B
	.globl gText_Rom_23651B
gText_Rom_23651B: @ 0x0823651B
	.string "たべのこしで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23651B) > 0x11
	.error "gText_Rom_23651B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23651B) < 0x11
	.space 0x11 - (. - gText_Rom_23651B)
	.endif
