	@ src/data/script_menu.h:229 script_menu_line_229
	.globl gText_Rom_5CAB4B
gText_Rom_5CAB4B: @ 0x085CAB4B
	.string "すなのさか$"
	.if (. - gText_Rom_5CAB4B) > 0x6
	.error "gText_Rom_5CAB4B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB4B) < 0x6
	.space 0x6 - (. - gText_Rom_5CAB4B)
	.endif
