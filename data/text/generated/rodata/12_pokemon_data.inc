	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2C2538
gText_Rom_2C2538: @ 0x082C2538
	.string "やめる$"
	.if (. - gText_Rom_2C2538) > 0x4
	.error "gText_Rom_2C2538 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2538) < 0x4
	.space 0x4 - (. - gText_Rom_2C2538)
	.endif
	.globl gUnknown_82C253C
gUnknown_82C253C: @ 0x082C253C
	.incbin "baserom.gba", 0x2c253c, 0x18
	.globl gUnknown_82C2554
gUnknown_82C2554: @ 0x082C2554
	.incbin "baserom.gba", 0x2c2554, 0x18
	.globl gUnknown_82C256C
gUnknown_82C256C: @ 0x082C256C
	.incbin "baserom.gba", 0x2c256c, 0x20

