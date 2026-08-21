	@ src/main_menu.c:489 main_menu_line_489
	.globl gText_Rom_5CAB56
gText_Rom_5CAB56: @ 0x085CAB56
	.string "ダニエル{EOS}"
	.if (. - gText_Rom_5CAB56) > 0x5
	.error "gText_Rom_5CAB56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB56) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB56)
	.endif
