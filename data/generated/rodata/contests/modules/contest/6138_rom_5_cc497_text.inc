	@ asm/contest.s:6814 Contest_CopyStringWithColor
	@ Preserve exact byte length: internal label, semantic suffix text pointer, internal terminator.
	.globl gText_Rom_5CC497
gText_Rom_5CC497: @ 0x085CC497
	.string "{HIGHLIGHT}{0x00}{COLOR}{0xFF}C,$"
	.if (. - gText_Rom_5CC497) != 0x9
	.error "gText_Rom_5CC497 must retain its original byte length"
	.endif
