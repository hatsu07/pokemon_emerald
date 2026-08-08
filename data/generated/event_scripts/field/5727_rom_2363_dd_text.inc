	@ field-script:0x235EC6 FieldScriptText_2363DD
	.globl gText_Rom_2363DD
gText_Rom_2363DD: @ 0x082363DD
	.string "フシギバナドールで　よろしい　ですか？"
	.byte EOS
	.if (. - gText_Rom_2363DD) > 0x14
	.error "gText_Rom_2363DD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2363DD) < 0x14
	.space 0x14 - (. - gText_Rom_2363DD)
	.endif
