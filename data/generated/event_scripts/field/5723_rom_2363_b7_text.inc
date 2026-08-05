	@ field-script:0x235E80 FieldScriptText_2363B7
	.globl gText_Rom_2363B7
gText_Rom_2363B7: @ 0x082363B7
	.string "ラプラスドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2363B7) > 0x13
	.error "gText_Rom_2363B7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2363B7) < 0x13
	.space 0x13 - (. - gText_Rom_2363B7)
	.endif
