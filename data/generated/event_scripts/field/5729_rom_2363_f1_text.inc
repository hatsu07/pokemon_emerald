	@ field-script:0x235EE9 FieldScriptText_2363F1
	.globl gText_Rom_2363F1
gText_Rom_2363F1: @ 0x082363F1
	.string "リザードンドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2363F1) > 0x14
	.error "gText_Rom_2363F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2363F1) < 0x14
	.space 0x14 - (. - gText_Rom_2363F1)
	.endif
