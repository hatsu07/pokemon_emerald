	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_5CAB7A
gText_Rom_5CAB7A: @ 0x085CAB7A
	.string "あおいビードロ$"
	.if (. - gText_Rom_5CAB7A) > 0x8
	.error "gText_Rom_5CAB7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB7A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB7A)
	.endif
