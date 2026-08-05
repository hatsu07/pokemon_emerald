	@ src/pokenav_menu_handler_gfx.c:280 pokenav_menu_handler_gfx_line_280
	.globl gText_Rom_5CB641
gText_Rom_5CB641: @ 0x085CB641
	.string "かっこいい ポケモンを みつけます$"
	.if (. - gText_Rom_5CB641) > 0x12
	.error "gText_Rom_5CB641 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB641) < 0x12
	.space 0x12 - (. - gText_Rom_5CB641)
	.endif
