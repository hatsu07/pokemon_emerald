	@ field-script:0x23A499 FieldScriptText_23AB58
	.globl gText_Rom_23AB58
gText_Rom_23AB58: @ 0x0823AB58
	.string "どの　せつめいが　ききたいですか？"
	.byte EOS
	.if (. - gText_Rom_23AB58) > 0x12
	.error "gText_Rom_23AB58 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_23AB58) < 0x12
	.space 0x12 - (. - gText_Rom_23AB58)
	.endif
