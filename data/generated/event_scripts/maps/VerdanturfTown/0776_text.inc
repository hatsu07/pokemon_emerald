	@ data/maps/VerdanturfTown/scripts.inc:82 VerdanturfTown_Text_TownSign
	.globl gText_Rom_1E6305
gText_Rom_1E6305: @ 0x081E6305
	.string "ここは シダケ タウン\nくさの においの かぜふく こうげん$"
	.if (. - gText_Rom_1E6305) > 0x1f
	.error "gText_Rom_1E6305 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E6305) < 0x1f
	.space 0x1f - (. - gText_Rom_1E6305)
	.endif
