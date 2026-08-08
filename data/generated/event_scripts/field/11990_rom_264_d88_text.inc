	@ field-script:0x26466A FieldScriptText_264D88
	.globl gText_Rom_264D88
gText_Rom_264D88: @ 0x08264D88
	.string "えっー！　あきらめちゃうの？$"
	.if (. - gText_Rom_264D88) > 0xf
	.error "gText_Rom_264D88 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264D88) < 0xf
	.space 0xf - (. - gText_Rom_264D88)
	.endif
