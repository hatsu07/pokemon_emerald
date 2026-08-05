	@ asm/contest_painting.s:426 PrintContestPaintingCaption (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_24C20E
gText_Rom_24C20E: @ 0x0824C20E
	.string "スーパーランク$"
	.if (. - gText_Rom_24C20E) != 0x8
	.error "gText_Rom_24C20E must retain its original byte length"
	.endif
