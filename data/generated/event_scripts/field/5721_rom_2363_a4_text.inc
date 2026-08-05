	@ field-script:0x235DE9 FieldScriptText_2363A4
	.globl gText_Rom_2363A4
gText_Rom_2363A4: @ 0x082363A4
	.string "ワニノコドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2363A4) > 0x13
	.error "gText_Rom_2363A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2363A4) < 0x13
	.space 0x13 - (. - gText_Rom_2363A4)
	.endif
