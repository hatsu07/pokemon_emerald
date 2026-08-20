	@ field-script:0x21EAB2 FieldScriptText_26279C
	.globl gText_Rom_26279C
gText_Rom_26279C: @ 0x0826279C
	.string "まだ　じかんが　のこっていますが\nサファリゾーンを　やめますか？{EOS}"
	.if (. - gText_Rom_26279C) > 0x21
	.error "gText_Rom_26279C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26279C) < 0x21
	.space 0x21 - (. - gText_Rom_26279C)
	.endif
