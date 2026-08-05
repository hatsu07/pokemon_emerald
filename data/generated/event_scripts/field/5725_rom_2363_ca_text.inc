	@ field-script:0x235EA3 FieldScriptText_2363CA
	.globl gText_Rom_2363CA
gText_Rom_2363CA: @ 0x082363CA
	.string "カビゴンドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2363CA) > 0x13
	.error "gText_Rom_2363CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2363CA) < 0x13
	.space 0x13 - (. - gText_Rom_2363CA)
	.endif
