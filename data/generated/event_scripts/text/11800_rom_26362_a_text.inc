	@ field-script:0x21BAEE BrailleMessage_26362A
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_26362A
gText_Rom_26362A: @ 0x0826362A
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x39, 0x3D, 0x3B, 0x3F, 0x3E, 0xFF
	.if (. - gText_Rom_26362A) != 0xc
	.error "gText_Rom_26362A must retain its original byte length"
	.endif
