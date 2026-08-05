	@ asm/pokemon.s:10677 sub_0806C9E8 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AB057
gText_Rom_5AB057: @ 0x085AB057
	.string "たいりょく$"
	.if (. - gText_Rom_5AB057) != 0x6
	.error "gText_Rom_5AB057 must retain its original byte length"
	.endif
