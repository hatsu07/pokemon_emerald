	@ field-script:0x21BAD0 BrailleMessage_263606
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263606
gText_Rom_263606: @ 0x08263606
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x19, 0x1D, 0x1B, 0x1F, 0x1E, 0xFF
	.if (. - gText_Rom_263606) != 0xc
	.error "gText_Rom_263606 must retain its original byte length"
	.endif
