	@ field-script:0x21BB0C BrailleMessage_26364C
	@ Preserve exact byte length: raw Braille glyph bytes.
	.globl gText_Rom_26364C
gText_Rom_26364C: @ 0x0826364C
	@ Six-byte Braille window header followed by Japanese Braille glyph bytes.
	.byte 0x09, 0x06, 0x13, 0x0D, 0x0C, 0x09, 0x10, 0x18, 0x38, 0xFF
	.if (. - gText_Rom_26364C) != 0xa
	.error "gText_Rom_26364C must retain its original byte length"
	.endif
