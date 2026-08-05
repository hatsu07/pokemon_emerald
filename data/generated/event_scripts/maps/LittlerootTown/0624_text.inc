	@ data/maps/LittlerootTown/scripts.inc:997 LittlerootTown_Text_TownSign
	.globl gText_Rom_1E46A4
gText_Rom_1E46A4: @ 0x081E46A4
	.string "ここは ミシロ タウン\nどんな いろにも そまらない まち$"
	.if (. - gText_Rom_1E46A4) > 0x1e
	.error "gText_Rom_1E46A4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E46A4) < 0x1e
	.space 0x1e - (. - gText_Rom_1E46A4)
	.endif
