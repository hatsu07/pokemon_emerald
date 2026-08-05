	@ field-script:0x21A802 FieldScriptText_21A923
	.globl gText_Rom_21A923
gText_Rom_21A923: @ 0x0821A923
	.string "はつでんそうちは　しずかに　なった"
	.byte EOS
	.if (. - gText_Rom_21A923) > 0x12
	.error "gText_Rom_21A923 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21A923) < 0x12
	.space 0x12 - (. - gText_Rom_21A923)
	.endif
