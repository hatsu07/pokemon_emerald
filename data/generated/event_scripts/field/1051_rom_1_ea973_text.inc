	@ field-script:0x1EA48F FieldScriptText_1EA973
	.globl gText_Rom_1EA973
gText_Rom_1EA973: @ 0x081EA973
	.string "いい　どきょうだ！　きにいったぞ！{EOS}"
	.if (. - gText_Rom_1EA973) > 0x12
	.error "gText_Rom_1EA973 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EA973) < 0x12
	.space 0x12 - (. - gText_Rom_1EA973)
	.endif
