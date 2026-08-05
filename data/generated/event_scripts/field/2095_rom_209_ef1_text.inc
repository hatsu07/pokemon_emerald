	@ field-script:0x209E2D FieldScriptText_209EF1
	.globl gText_Rom_209EF1
gText_Rom_209EF1: @ 0x08209EF1
	.string "だいせいこう　じゃ！\p{0xFD}{0x02}は　{0xFD}{0x03}を\nわすれた　ようじゃ！$"
	.if (. - gText_Rom_209EF1) > 0x1e
	.error "gText_Rom_209EF1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_209EF1) < 0x1e
	.space 0x1e - (. - gText_Rom_209EF1)
	.endif
