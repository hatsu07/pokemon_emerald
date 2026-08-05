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
