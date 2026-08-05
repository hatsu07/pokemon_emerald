	@ asm/pokemon_jump.s:7967 sub_0802E17C (+1 aliases)
	.globl gText_Rom_5CCE0F
gText_Rom_5CCE0F: @ 0x085CCE0F
	.string "さいこう　ジャンプかいすう$"
	.if (. - gText_Rom_5CCE0F) > 0xe
	.error "gText_Rom_5CCE0F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE0F) < 0xe
	.space 0xe - (. - gText_Rom_5CCE0F)
	.endif
