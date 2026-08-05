	@ field-script:0x21BAB2 BrailleMessage_2635E2
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_2635E2
gText_Rom_2635E2: @ 0x082635E2
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x01, 0x05, 0x03, 0x07, 0x06, 0xFF
	.if (. - gText_Rom_2635E2) != 0xc
	.error "gText_Rom_2635E2 must retain its original byte length"
	.endif
