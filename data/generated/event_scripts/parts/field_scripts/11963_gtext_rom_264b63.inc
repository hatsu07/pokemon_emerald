	@ field-script:0x26445E FieldScriptText_264B63
	.globl gText_Rom_264B63
gText_Rom_264B63: @ 0x08264B63
	.string "あっ　そう……\nじゃあ　さよならね……$"
	.if (. - gText_Rom_264B63) > 0x14
	.error "gText_Rom_264B63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264B63) < 0x14
	.space 0x14 - (. - gText_Rom_264B63)
	.endif
