	@ field-script:0x249052 FieldScriptText_24A223
	.globl gText_Rom_24A223
gText_Rom_24A223: @ 0x0824A223
	.string "しかい『エントリーナンバー　{0xFD}{0x03}ばん！\n{0xFD}{0x02}さんの　{0xFD}{0x04}　です！$"
	.if (. - gText_Rom_24A223) > 0x21
	.error "gText_Rom_24A223 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A223) < 0x21
	.space 0x21 - (. - gText_Rom_24A223)
	.endif
