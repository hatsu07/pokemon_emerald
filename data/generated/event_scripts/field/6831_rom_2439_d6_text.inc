	@ field-script:0x242EF8 FieldScriptText_2439D6
	.globl gText_Rom_2439D6
gText_Rom_2439D6: @ 0x082439D6
	.string "べんりなどうぐ　いろいろ　あります\n「フレンドリィショップ」$"
	.if (. - gText_Rom_2439D6) > 0x1f
	.error "gText_Rom_2439D6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2439D6) < 0x1f
	.space 0x1f - (. - gText_Rom_2439D6)
	.endif
