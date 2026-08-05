	@ src/pokemon_storage_system.c:863 gText_Box
	.globl gText_Rom_5CB584
gText_Rom_5CB584: @ 0x085CB584
	.string "ボックス$"
	.if (. - gText_Rom_5CB584) > 0x5
	.error "gText_Rom_5CB584 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB584) < 0x5
	.space 0x5 - (. - gText_Rom_5CB584)
	.endif

