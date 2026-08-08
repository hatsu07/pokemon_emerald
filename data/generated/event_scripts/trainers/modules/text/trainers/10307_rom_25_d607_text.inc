	@ data/text/trainers.inc:1562 Route116_Text_ClarkDefeat (+1 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_25D607
gText_Rom_25D607: @ 0x0825D607
	.string "ぜえ…… ぜえ……\nまけて つかれて しまった$"
	.if (. - gText_Rom_25D607) != 0x18
	.error "gText_Rom_25D607 must retain its original byte length"
	.endif
