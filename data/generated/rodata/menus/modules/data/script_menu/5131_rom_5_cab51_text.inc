	@ src/data/script_menu.h:235 script_menu_line_235
	.globl gText_Rom_5CAB51
gText_Rom_5CAB51: @ 0x085CAB51
	.string "ウイリー$"
	.if (. - gText_Rom_5CAB51) > 0x5
	.error "gText_Rom_5CAB51 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB51) < 0x5
	.space 0x5 - (. - gText_Rom_5CAB51)
	.endif
