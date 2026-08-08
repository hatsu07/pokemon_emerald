	@ field-script:0x21BB02 BrailleMessage_263640
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263640
gText_Rom_263640: @ 0x08263640
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x09, 0x0D, 0x0B, 0x0F, 0x0E, 0xFF
	.if (. - gText_Rom_263640) != 0xc
	.error "gText_Rom_263640 must retain its original byte length"
	.endif
