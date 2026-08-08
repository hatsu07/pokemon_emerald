	@ field-script:0x21BAC6 BrailleMessage_2635FA
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_2635FA
gText_Rom_2635FA: @ 0x082635FA
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x29, 0x2D, 0x2B, 0x2F, 0x2E, 0xFF
	.if (. - gText_Rom_2635FA) != 0xc
	.error "gText_Rom_2635FA must retain its original byte length"
	.endif
