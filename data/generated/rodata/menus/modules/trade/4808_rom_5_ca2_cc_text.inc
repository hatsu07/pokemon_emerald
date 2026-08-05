	@ asm/trade.s:5988 sub_08079BD4 (+2 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2CC
gText_Rom_5CA2CC: @ 0x085CA2CC
	.string "タマゴは　いま\nこうかんに　だせません$"
	.if (. - gText_Rom_5CA2CC) != 0x14
	.error "gText_Rom_5CA2CC must retain its original byte length"
	.endif
