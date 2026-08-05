	@ src/pokenav_menu_handler_gfx.c:282 pokenav_menu_handler_gfx_line_282
	.globl gText_Rom_5CB665
gText_Rom_5CB665: @ 0x085CB665
	.string "かわいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB665) > 0x11
	.error "gText_Rom_5CB665 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB665) < 0x11
	.space 0x11 - (. - gText_Rom_5CB665)
	.endif
