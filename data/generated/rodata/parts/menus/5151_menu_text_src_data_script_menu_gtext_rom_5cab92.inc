	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_5CAB92
gText_Rom_5CAB92: @ 0x085CAB92
	.string "しろいビードロ$"
	.if (. - gText_Rom_5CAB92) > 0x8
	.error "gText_Rom_5CAB92 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB92) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB92)
	.endif
