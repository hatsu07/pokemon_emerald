	@ src/pokemon_storage_system.c:8105 pokemon_storage_system_line_8105
	.globl gText_Rom_5CB40A
gText_Rom_5CB40A: @ 0x085CB40A
	.string "いわやま$"
	.if (. - gText_Rom_5CB40A) > 0x5
	.error "gText_Rom_5CB40A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB40A) < 0x5
	.space 0x5 - (. - gText_Rom_5CB40A)
	.endif
