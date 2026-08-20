	@ field-script:0x264431 FieldScriptText_264AED
	.globl gText_Rom_264AED
gText_Rom_264AED: @ 0x08264AED
	.string "まえにね　{0xFD}{0x04}さんが\nとても　{0xFD}{0x02}な　{0xFD}{0x03}を\lわたしに　くれたの\pすごく　たいせつに　してるのよ{EOS}"
	.if (. - gText_Rom_264AED) > 0x31
	.error "gText_Rom_264AED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_264AED) < 0x31
	.space 0x31 - (. - gText_Rom_264AED)
	.endif
