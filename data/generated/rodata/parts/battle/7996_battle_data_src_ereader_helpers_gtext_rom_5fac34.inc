	@ src/ereader_helpers.c:187 ereader_helpers_line_187
	@ Preserve exact byte length: semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5FAC34
gText_Rom_5FAC34: @ 0x085FAC34
	.string "オオスバメ$$$$$$"
	.if (. - gText_Rom_5FAC34) != 0xb
	.error "gText_Rom_5FAC34 must retain its original byte length"
	.endif
