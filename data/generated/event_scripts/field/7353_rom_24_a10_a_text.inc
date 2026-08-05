	@ field-script:0x206D8E FieldScriptText_24A10A
	.globl gText_Rom_24A10A
gText_Rom_24A10A: @ 0x0824A10A
	.string "それでは　こちらへ　どうぞ！\nがんばって　くださいね！$"
	.if (. - gText_Rom_24A10A) > 0x1c
	.error "gText_Rom_24A10A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A10A) < 0x1c
	.space 0x1c - (. - gText_Rom_24A10A)
	.endif
