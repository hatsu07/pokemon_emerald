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
