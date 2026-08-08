	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C21E
gText_Rom_24C21E: @ 0x0824C21E
	.string "マスターランク$"
	.if (. - gText_Rom_24C21E) != 0x8
	.error "gText_Rom_24C21E must retain its original byte length"
	.endif
