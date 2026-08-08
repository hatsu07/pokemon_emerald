	@ field-script:0x21BA42 BrailleMessage_2635D2
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_2635D2
gText_Rom_2635D2: @ 0x082635D2
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x04, 0x06, 0x1A, 0x0D, 0x07, 0x09, 0x26, 0x26, 0x08, 0x1F, 0x00, 0x01, 0x08, 0x21, 0x0F, 0xFF
	.if (. - gText_Rom_2635D2) != 0x10
	.error "gText_Rom_2635D2 must retain its original byte length"
	.endif
