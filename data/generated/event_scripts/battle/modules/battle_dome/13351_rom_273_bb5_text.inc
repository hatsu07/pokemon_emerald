	@ src/battle_dome.c:892 battle_dome_line_892
	.globl gText_Rom_273BB5
gText_Rom_273BB5: @ 0x08273BB5
	.string "うんに まかせた たたかいかたを このむ。$"
	.if (. - gText_Rom_273BB5) > 0x16
	.error "gText_Rom_273BB5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_273BB5) < 0x16
	.space 0x16 - (. - gText_Rom_273BB5)
	.endif
