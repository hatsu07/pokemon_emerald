	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_5CAB9A
gText_Rom_5CAB9A: @ 0x085CAB9A
	.string "くろいビードロ$"
	.if (. - gText_Rom_5CAB9A) > 0x8
	.error "gText_Rom_5CAB9A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CAB9A) < 0x8
	.space 0x8 - (. - gText_Rom_5CAB9A)
	.endif
	@ Decoded text from ROM range: offset=0x5CABA2, size=0x7
	.string "ガラスのいす$"
