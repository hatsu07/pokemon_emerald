	@ src/pokemon_sprite_visualizer.c:527 textL
	.globl gText_Rom_6AD436
gText_Rom_6AD436: @ 0x086AD436
	.string "{L_BUTTON}$"
	.if (. - gText_Rom_6AD436) > 0x3
	.error "gText_Rom_6AD436 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_6AD436) < 0x3
	.space 0x3 - (. - gText_Rom_6AD436)
	.endif
	.incbin "baserom.gba", 0x6ad439, 0x1e970

