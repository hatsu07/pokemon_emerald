	@ src/data/moves_info.h:48 moves_info_line_48
	.globl gText_Rom_B11EF6
gText_Rom_B11EF6: @ 0x08B11EF6
	.string "はたく$"
	.if (. - gText_Rom_B11EF6) > 0x4
	.error "gText_Rom_B11EF6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B11EF6) < 0x4
	.space 0x4 - (. - gText_Rom_B11EF6)
	.endif
	.incbin "baserom.gba", 0xb11efa, 0x7404

	@ src/debug.c:1292 sColor_Green
	.globl gText_Rom_B192FE
gText_Rom_B192FE: @ 0x08B192FE
	.string "{COLOR GREEN}$"
	.if (. - gText_Rom_B192FE) > 0x4
	.error "gText_Rom_B192FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_B192FE) < 0x4
	.space 0x4 - (. - gText_Rom_B192FE)
	.endif
	.incbin "baserom.gba", 0xb19302, 0x21208

