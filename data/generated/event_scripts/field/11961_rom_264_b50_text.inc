	@ field-script:0x264468 FieldScriptText_264B50
	.globl gText_Rom_264B50
gText_Rom_264B50: @ 0x08264B50
	.string "……ほんと？　なにを　いただけるの？$"
	.if (. - gText_Rom_264B50) > 0x13
	.error "gText_Rom_264B50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264B50) < 0x13
	.space 0x13 - (. - gText_Rom_264B50)
	.endif
