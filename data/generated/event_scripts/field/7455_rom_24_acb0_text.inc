	@ field-script:0x2496C9 FieldScriptText_24ACB0
	.globl gText_Rom_24ACB0
gText_Rom_24ACB0: @ 0x0824ACB0
	.string "では　はりきって　どうぞ！\nレッツ！　アピール！{EOS}"
	.if (. - gText_Rom_24ACB0) > 0x19
	.error "gText_Rom_24ACB0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24ACB0) < 0x19
	.space 0x19 - (. - gText_Rom_24ACB0)
	.endif
