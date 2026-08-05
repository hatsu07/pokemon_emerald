	@ field-script:0x21BBB9 BrailleMessage_263700
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263700
gText_Rom_263700: @ 0x08263700
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x05, 0x06, 0x19, 0x0D, 0x08, 0x09, 0x26, 0x10, 0x21, 0x04, 0x19, 0x16, 0x08, 0x19, 0xFF
	.if (. - gText_Rom_263700) != 0xf
	.error "gText_Rom_263700 must retain its original byte length"
	.endif
