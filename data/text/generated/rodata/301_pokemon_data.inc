	@ src/pokemon_summary_screen.c:3874 sTextNatureUp
	.globl gText_Rom_64C8FC
gText_Rom_64C8FC: @ 0x0864C8FC
	.string "{COLOR}{05}$"
	.if (. - gText_Rom_64C8FC) > 0x4
	.error "gText_Rom_64C8FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_64C8FC) < 0x4
	.space 0x4 - (. - gText_Rom_64C8FC)
	.endif
	.incbin "baserom.gba", 0x64c900, 0x1dc96

