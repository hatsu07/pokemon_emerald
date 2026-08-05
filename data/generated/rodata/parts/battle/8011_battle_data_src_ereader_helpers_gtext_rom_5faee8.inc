	@ src/ereader_helpers.c:369 ereader_helpers_line_369
	@ Preserve exact byte length: internal terminator.
	.globl gText_Rom_5FAEE8
gText_Rom_5FAEE8: @ 0x085FAEE8
	.string "ジュペッタ$$$$$$"
	.if (. - gText_Rom_5FAEE8) != 0xb
	.error "gText_Rom_5FAEE8 must retain its original byte length"
	.endif
	.space 0x1, 0xFF
