	@ field-script:0x23A557 FieldScriptText_23AE3F
	.globl gText_Rom_23AE3F
gText_Rom_23AE3F: @ 0x0823AE3F
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - gText_Rom_23AE3F) > 0x12
	.error "gText_Rom_23AE3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AE3F) < 0x12
	.space 0x12 - (. - gText_Rom_23AE3F)
	.endif
