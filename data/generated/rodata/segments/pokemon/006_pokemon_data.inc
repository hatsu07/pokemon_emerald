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
	@ Decoded text from ROM range: offset=0x2C1D58, size=0x8
	.string "せつめいをきく$"
	.globl gUnknown_82C1D60
gUnknown_82C1D60: @ 0x082C1D60
	@ Replaced baserom.gba range: offset=0x2C1D60, size=0x17
	.byte 0x15, 0x1F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x0C, 0x02, 0x60, 0x52, 0x9D, 0x00, 0x01, 0x3A
	.byte 0x29, 0x9F, 0x59, 0x73, 0x7E, 0x00, 0x00

