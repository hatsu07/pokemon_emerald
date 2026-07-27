	@ src/pokemon_storage_system.c:8103 pokemon_storage_system_line_8103
	.globl gText_Rom_5988A8
gText_Rom_5988A8: @ 0x085988A8
	.string "さばく$"
	.if (. - gText_Rom_5988A8) > 0x4
	.error "gText_Rom_5988A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5988A8) < 0x4
	.space 0x4 - (. - gText_Rom_5988A8)
	.endif
	.incbin "baserom.gba", 0x5988ac, 0x2a

