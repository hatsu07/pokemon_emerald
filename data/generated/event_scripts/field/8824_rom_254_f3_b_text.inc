	@ field-script:0x2550C3 FieldScriptText_254F3B
	.globl gText_Rom_254F3B
gText_Rom_254F3B: @ 0x08254F3B
	.string "それは　{0xFD}{0x02}さんが\nつかってた　グッズ　だよ\pこれに　するかい？"
	.byte EOS
	.if (. - gText_Rom_254F3B) > 0x21
	.error "gText_Rom_254F3B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_254F3B) < 0x21
	.space 0x21 - (. - gText_Rom_254F3B)
	.endif
