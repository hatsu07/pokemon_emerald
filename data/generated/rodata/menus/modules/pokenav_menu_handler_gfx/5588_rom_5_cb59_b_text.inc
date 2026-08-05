	@ src/pokenav_menu_handler_gfx.c:273 pokenav_menu_handler_gfx_line_273
	.globl gText_Rom_5CB59B
gText_Rom_5CB59B: @ 0x085CB59B
	.string "ポケモンを くわしく しらべます$"
	.if (. - gText_Rom_5CB59B) > 0x11
	.error "gText_Rom_5CB59B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB59B) < 0x11
	.space 0x11 - (. - gText_Rom_5CB59B)
	.endif
