	@ field-script:0x23A373 FieldScriptText_23A782
	.globl gText_Rom_23A782
gText_Rom_23A782: @ 0x0823A782
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - gText_Rom_23A782) > 0x12
	.error "gText_Rom_23A782 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23A782) < 0x12
	.space 0x12 - (. - gText_Rom_23A782)
	.endif
