	@ asm/trade.s:5988 sub_08079BD4 (+3 aliases)
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA2B4
gText_Rom_5CA2B4: @ 0x085CA2B4
	.string "その　ポケモンは　いま\nこうかんに　だせません$"
	.if (. - gText_Rom_5CA2B4) != 0x18
	.error "gText_Rom_5CA2B4 must retain its original byte length"
	.endif
