	@ field-script:0x264763 FieldScriptText_264E73
	.globl gText_Rom_264E73
gText_Rom_264E73: @ 0x08264E73
	.string "ねえ！　ねえ！　あなたも\nクイズ　つくって　みない？$"
	.if (. - gText_Rom_264E73) > 0x1b
	.error "gText_Rom_264E73 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264E73) < 0x1b
	.space 0x1b - (. - gText_Rom_264E73)
	.endif
