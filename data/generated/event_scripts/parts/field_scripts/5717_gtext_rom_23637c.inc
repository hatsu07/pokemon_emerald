	@ field-script:0x235DA3 FieldScriptText_23637C
	.globl gText_Rom_23637C
gText_Rom_23637C: @ 0x0823637C
	.string "ヒノアラシドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_23637C) > 0x14
	.error "gText_Rom_23637C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23637C) < 0x14
	.space 0x14 - (. - gText_Rom_23637C)
	.endif
