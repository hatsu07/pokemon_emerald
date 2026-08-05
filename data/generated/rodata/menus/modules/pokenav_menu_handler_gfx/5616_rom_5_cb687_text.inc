	@ src/pokenav_menu_handler_gfx.c:284 pokenav_menu_handler_gfx_line_284
	.globl gText_Rom_5CB687
gText_Rom_5CB687: @ 0x085CB687
	.string "たくましい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB687) > 0x12
	.error "gText_Rom_5CB687 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB687) < 0x12
	.space 0x12 - (. - gText_Rom_5CB687)
	.endif
