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

	@ asm/pokemon_jump.s:7967 sub_0802E17C (+1 aliases)
	.globl gText_Rom_5CCE27
gText_Rom_5CCE27: @ 0x085CCE27
	.string "れんぞく　EXCELLENT$"
	.if (. - gText_Rom_5CCE27) > 0xf
	.error "gText_Rom_5CCE27 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CCE27) < 0xf
	.space 0xf - (. - gText_Rom_5CCE27)
	.endif
