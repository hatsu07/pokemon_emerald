	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_2C1D50
gText_Rom_2C1D50: @ 0x082C1D50
	.string "やめる$"
	.if (. - gText_Rom_2C1D50) > 0x4
	.error "gText_Rom_2C1D50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D50) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D50)
	.endif

	@ src/data/info_viewer.h:120 sInfoText_ChoiceClose (+4 aliases)
	.globl gText_Rom_2C1D54
gText_Rom_2C1D54: @ 0x082C1D54
	.string "とじる$"
	.if (. - gText_Rom_2C1D54) > 0x4
	.error "gText_Rom_2C1D54 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C1D54) < 0x4
	.space 0x4 - (. - gText_Rom_2C1D54)
	.endif
	.incbin "baserom.gba", 0x2c1d58, 0x8
	.globl gUnknown_82C1D60
gUnknown_82C1D60: @ 0x082C1D60
	.incbin "baserom.gba", 0x2c1d60, 0x17

