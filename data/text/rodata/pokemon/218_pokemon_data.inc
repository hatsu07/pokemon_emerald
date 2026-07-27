	@ src/pokedex_plus_hgss.c:160 sText_Stats_CatchRate_Medium
	.globl gText_Rom_5CAAC1
gText_Rom_5CAAC1: @ 0x085CAAC1
	.string "ふつう$"
	.if (. - gText_Rom_5CAAC1) > 0x4
	.error "gText_Rom_5CAAC1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAAC1) < 0x4
	.space 0x4 - (. - gText_Rom_5CAAC1)
	.endif
	.incbin "baserom.gba", 0x5caac5, 0x5

	@ src/pokemon_storage_system.c:8078 pokemon_storage_system_line_8078 (+5 aliases)
	.globl gText_Rom_5CAACA
gText_Rom_5CAACA: @ 0x085CAACA
	.string "やめる$"
	.if (. - gText_Rom_5CAACA) > 0x4
	.error "gText_Rom_5CAACA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAACA) < 0x4
	.space 0x4 - (. - gText_Rom_5CAACA)
	.endif
	.incbin "baserom.gba", 0x5caace, 0xa
	.globl gUnknown_85CAAD8
gUnknown_85CAAD8: @ 0x085CAAD8

