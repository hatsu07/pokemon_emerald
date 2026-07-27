	@ src/data/script_menu.h:249 script_menu_line_249
	.globl gText_Rom_55ECE8
gText_Rom_55ECE8: @ 0x0855ECE8
	.string "しんかいのキバ$"
	.if (. - gText_Rom_55ECE8) > 0x8
	.error "gText_Rom_55ECE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ECE8) < 0x8
	.space 0x8 - (. - gText_Rom_55ECE8)
	.endif
	.incbin "baserom.gba", 0x55ecf0, 0x20

	@ src/data/script_menu.h:250 script_menu_line_250
	.globl gText_Rom_55ED10
gText_Rom_55ED10: @ 0x0855ED10
	.string "しんかいのウロコ$"
	.if (. - gText_Rom_55ED10) > 0x9
	.error "gText_Rom_55ED10 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55ED10) < 0x9
	.space 0x9 - (. - gText_Rom_55ED10)
	.endif
	.incbin "baserom.gba", 0x55ed19, 0x9b

