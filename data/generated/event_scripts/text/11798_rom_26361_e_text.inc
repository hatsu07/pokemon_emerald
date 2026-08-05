	@ field-script:0x21BAE4 BrailleMessage_26361E
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_26361E
gText_Rom_26361E: @ 0x0826361E
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x31, 0x35, 0x33, 0x37, 0x36, 0xFF
	.if (. - gText_Rom_26361E) != 0xc
	.error "gText_Rom_26361E must retain its original byte length"
	.endif
