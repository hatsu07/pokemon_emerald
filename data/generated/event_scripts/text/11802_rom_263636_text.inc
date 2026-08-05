	@ field-script:0x21BAF8 BrailleMessage_263636
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263636
gText_Rom_263636: @ 0x08263636
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x09, 0x06, 0x13, 0x0D, 0x0C, 0x09, 0x12, 0x32, 0x1A, 0xFF
	.if (. - gText_Rom_263636) != 0xa
	.error "gText_Rom_263636 must retain its original byte length"
	.endif
