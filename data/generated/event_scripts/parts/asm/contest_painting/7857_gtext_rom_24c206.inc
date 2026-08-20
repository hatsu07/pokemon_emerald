	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C206
gText_Rom_24C206: @ 0x0824C206
	.string "ノーマルランク{EOS}"
	.if (. - gText_Rom_24C206) != 0x8
	.error "gText_Rom_24C206 must retain its original byte length"
	.endif
