	@ src/pokenav_menu_handler_gfx.c:283 pokenav_menu_handler_gfx_line_283
	.globl gText_Rom_5CB676
gText_Rom_5CB676: @ 0x085CB676
	.string "かしこい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB676) > 0x11
	.error "gText_Rom_5CB676 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB676) < 0x11
	.space 0x11 - (. - gText_Rom_5CB676)
	.endif
