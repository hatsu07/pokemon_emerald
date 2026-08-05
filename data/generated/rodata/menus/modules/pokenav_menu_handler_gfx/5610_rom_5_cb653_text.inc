	@ src/pokenav_menu_handler_gfx.c:281 pokenav_menu_handler_gfx_line_281
	.globl gText_Rom_5CB653
gText_Rom_5CB653: @ 0x085CB653
	.string "うつくしい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB653) > 0x12
	.error "gText_Rom_5CB653 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB653) < 0x12
	.space 0x12 - (. - gText_Rom_5CB653)
	.endif
