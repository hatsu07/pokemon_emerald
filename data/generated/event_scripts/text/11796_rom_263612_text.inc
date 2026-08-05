	@ field-script:0x21BADA BrailleMessage_263612
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263612
gText_Rom_263612: @ 0x08263612
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x11, 0x15, 0x13, 0x17, 0x16, 0xFF
	.if (. - gText_Rom_263612) != 0xc
	.error "gText_Rom_263612 must retain its original byte length"
	.endif
