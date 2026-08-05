	@ field-script:0x264560 FieldScriptText_264CBD
	.globl gText_Rom_264CBD
gText_Rom_264CBD: @ 0x08264CBD
	.string "あたし　クイズ　おねえさん！\nクイズ　だーいすき！$"
	.if (. - gText_Rom_264CBD) > 0x1a
	.error "gText_Rom_264CBD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264CBD) < 0x1a
	.space 0x1a - (. - gText_Rom_264CBD)
	.endif
