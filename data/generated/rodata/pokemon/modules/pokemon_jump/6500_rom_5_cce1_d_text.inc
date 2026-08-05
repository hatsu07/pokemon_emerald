	@ asm/pokemon_jump.s:7967 sub_0802E17C (+2 aliases)
	.globl gText_Rom_5CCE1D
gText_Rom_5CCE1D: @ 0x085CCE1D
	.string "さいこう　とくてん$"
	.if (. - gText_Rom_5CCE1D) > 0xa
	.error "gText_Rom_5CCE1D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE1D) < 0xa
	.space 0xa - (. - gText_Rom_5CCE1D)
	.endif
