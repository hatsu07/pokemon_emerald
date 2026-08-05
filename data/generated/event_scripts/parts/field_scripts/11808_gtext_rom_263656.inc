	@ field-script:0x21BB1F BrailleMessage_263656
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_263656
gText_Rom_263656: @ 0x08263656
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x07, 0x04, 0x17, 0x0F, 0x0A, 0x07, 0x26, 0x26, 0x08, 0x1F, 0xFE, 0x01, 0x11, 0x18, 0x00, 0x36
	.byte 0x0B, 0xFF
	.if (. - gText_Rom_263656) != 0x12
	.error "gText_Rom_263656 must retain its original byte length"
	.endif
