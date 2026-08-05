	@ field-script:0x21BABC BrailleMessage_2635EE
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_2635EE
gText_Rom_2635EE: @ 0x082635EE
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x06, 0x15, 0x0D, 0x0A, 0x09, 0x21, 0x25, 0x23, 0x27, 0x26, 0xFF
	.if (. - gText_Rom_2635EE) != 0xc
	.error "gText_Rom_2635EE must retain its original byte length"
	.endif
